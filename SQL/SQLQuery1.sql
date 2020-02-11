/* create database */
create database qwerty

-- use database
use qwerty

-- delete database
drop database qwerty 

create database fop6

use fop6

-- creating a table
create table students
(
	std_id int,
	std_name varchar(50)
)
 -- view table
 select * from students

 -- data insert
 insert into students values (101,'Nishan'),
 (102,'Roshan'),(103,'Subhashish')

 -- modify datatype in column
 insert into students values ('101A','Nishan');
 alter table students alter column std_id varchar(10);

 -- add column
 alter table students add [contact no] numeric(10,0);

 select * from students
 
 -- update data
 update students
 set [contact no] = 9801200111
 where std_id = '101'

 -- delete column
 alter table students drop column [contact no]

 -- delete rows
 delete from students where std_id = '101A';

 -- empty table
 truncate table students

 -- delete table
 drop table students

