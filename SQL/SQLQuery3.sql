-- sql join
/*==> 2 types ==> inner join
outer join ==> right
left
full outer */
use AdventureWorks2012

select * from Person.Person
select * from Person.Address

-- inner join
select A.FirstName, A.LastName, B.city, 
A.BusinessEntityID, B.AddressID
from 
Person.Person A
inner join
Person.Address B
on
A.BusinessEntityID = B.AddressID order by A.BusinessEntityID

-- outer join
create view vw_fop6_fullOuterJoin as
select A.FirstName, A.LastName, B.city, 
A.BusinessEntityID, B.AddressID
from 
Person.Person A
full outer join
Person.Address B
on
A.BusinessEntityID = B.AddressID

select * from vw_fop6_fullOuterJoin

-- stored procedure
use fop6

create table myTable
(
	id int,
	name varchar(30),
	[roll no] int
)
go

create procedure sp_myprocess
@id int,
@name varchar(30),
@roll int,
@stmt varchar(30) = ''
as
Begin
	if @stmt = 'insert'
	begin
		insert into myTable values (@id ,@name, @roll);
	end
	
	if @stmt = 'select'
	begin
		select * from myTable
	end

	if @stmt = 'update'
	begin
		update myTable set name = @name, [roll no] = @roll
		where id = @id
	end

	if @stmt = 'delete'
	begin
		delete from myTable where id = @id
	end
End

exec sp_myprocess @id = 1, @name='Ravan', @roll = 13, @stmt = 'insert'
exec sp_myprocess @id = 2, @name='Ajay', @roll = 21, @stmt = 'insert'
exec sp_myprocess @id = 1, @name='Ravan', @roll = 13, @stmt = 'select'
exec sp_myprocess @id = 1, @name='Raban', @roll = 23, @stmt = 'update'
exec sp_myprocess @id = 1, @name='Ajay', @roll = 13, @stmt = 'delete'


create trigger myTrigger
on myTable
for delete
as 
	 if 21 in (select [roll no] from deleted)
	 begin
		print 'Ajay Devgan Cannot be Deleted';
		rollback transaction;
	 end


-- error handling

begin try
	declare @num numeric(5,2)
	select @num = 217/10;
	print @num;
end try
begin catch
	print 'Error'
	print ERROR_MESSAGE();
	print ERROR_Number();
	print error_line();
	print error_state();
	print error_severity();
	throw;
end catch




