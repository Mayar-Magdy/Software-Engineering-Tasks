 CREATE TABLE Department  
(
    DeptNo int primary key,
    DeptName Nvarchar(20),
     DepLocation Nchar(2) constraint ck_location check (  Deplocation in ('NY','DS','KW')) DEFAULT 'NY'
);
insert into Department
values(1, 'cs','DS')
insert into Department(DeptNo,DeptName)
values(2, 'is')
insert into Department
values(3, '???????','KW')