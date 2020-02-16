-- constraint
create table school
(
	id int identity(101,1),
	name varchar(50) not null,
	[contact no] numeric(10,0) unique not null,
	email varchar(80) null,
	fee money default 1000,
	mark int not null check (mark>=40 and mark<=100)
)

insert into school(name, [contact no], email, fee, mark)
values ('Smith', 9801200111, 'smith@gmail.com', 2340.67,62),
('John Doe', 9801200112,'john@gmail.com', 1500, 85)



-- error not null
insert into school( [contact no], email, fee, mark)
values ( 9801200113, 'smith@gmail.com', 2340.67,62)

-- error unique
insert into school( name,[contact no], email, fee, mark)
values ( 'Aaloo',9801200112, 'smith@gmail.com', 2340.67,62)

-- email null
insert into school( name,[contact no], fee, mark)
values ( 'Aaloo',9801200113,  2340.67,62)

select * from school
-- default case
insert into school( name,[contact no],  mark)
values ( 'Kobi',9801200114,  62)

-- error in check
insert into school( name,[contact no],  mark)
values ( 'Kobit',9801200115,  24)

-- primary key and foreign key constraint
create table register
(
	id int primary key,
	name varchar(30)
)
create table neo_events
(
	id int foreign key references register(id),
	event_name varchar(30)
)

insert into register values(501,'Roshan'),(502,'Nishan'),(503,'Subhashish')

select * from register

insert into neo_events values(501, 'CAN_Infotech'),
(501,'Education Fair')

select * from neo_events

insert into neo_events values(505,'CAN_Infotech')

select A.name, B.event_name
from
register A
full outer join
neo_events B
on A.id = B.id

drop database fop6

use AdventureWorks2012

select left('International',5);

-- display all columns
select * from HumanResources.Employee;

-- specific column
select BusinessEntityID, JobTitle from HumanResources.Employee

-- concatenate columns
select LoginID + ' ==> ' + JobTitle as [Concatenated Column]from HumanResources.Employee

select * from Production.ProductCostHistory

-- computed column
select ProductID, StandardCost, StandardCost * 0.15 as discount from
Production.ProductCostHistory

-- distinct values
select distinct ProductID from Production.ProductCostHistory

-- distinct values
select distinct ProductID, StandardCost from Production.ProductCostHistory

-- top values
select distinct top 10 ProductID from Production.ProductCostHistory

-- top percentage values
select distinct top 10 percent ProductID from Production.ProductCostHistory

--order by ==> asc, desc
select distinct top 10 percent ProductID from Production.ProductCostHistory
order by ProductID desc

-- ==> wild card, _, % 
select * from Person.Person

select * from Person.Person where FirstName like '_a_i'
select * from Person.Person where LastName like 'D%'
select * from Person.Person where PersonType like '[GSI]C'
select * from Person.Person where PersonType like '[^G]C'

-- select with where
select StandardCost from Production.ProductCostHistory
where StandardCost>=20 and StandardCost <=50
order by StandardCost asc

-- aggregate function
-- avg, sum, count, min, max
select * from Sales.SalesOrderDetail

select AVG(UnitPrice) as Average,
SUM(UnitPrice) as TotalSum,
COUNT(UnitPrice) as TotalCount,
MAX(UnitPrice) as MaximumValue,
MIN(UnitPrice) as MinimumValue
from Sales.SalesOrderDetail

-- group by
select * from Production.WorkOrderRouting

select WorkOrderID,AVG(ActualResourceHrs) from Production.WorkOrderRouting
group by WorkOrderID having avg(ActualResourceHrs)<3

--join, view, stored procedure, trigger, error handling