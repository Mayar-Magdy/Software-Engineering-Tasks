create table Department  
(
    DeptNo int IDENTITY (1, 1) PRIMARY KEY,
    DeptName Nvarchar(20),
	--a.  Nvarchar for DeptName because it can store both Unicode and non-Unicode characters like arabic , english , jabanes
    DepLocation Nchar(2) CONSTRAINT ck_location CHECK (Deplocation IN ('NY','DS','KW')) DEFAULT 'NY'
	--a.
	--Nchar for Location because it is a fixed-length data type that can store Unicode characters. 
	--location values will always be two characters .
	--to ensure consistent storage and performance
	--b.
	--Yes, we can use it but its not the best choice.
    -- becuese Char(2) can only store non-Unicode characters which means it cannot handle different languages. 

);

alter database Net23_Company
add filegroup SecondaryFG

alter database Net23_Company
ADD FILE ( 
NAME = Net23_Company_Data2,
FILENAME = 'C:\Program Files\Microsoft SQL Server\MSSQL16.MSSQLSERVER\MSSQL\DATA\Net23_Company_Data2.ndf', 
SIZE = 10MB,
MAXSIZE = 50MB, 
FILEGROWTH = 10%
)TO FILEGROUP SecondaryFG;

create table Employee
(
EmpNo int not null, 
EmpFname varchar(50) not null,
EmpLname varchar(50) not null,
DeptNo int not null, --foreign key
Salary int not null, --unique and check constraints
constraint pk_Employee primary key (EmpNo), 
constraint fk_Employee foreign key (DeptNo) references Department(DeptNo),
constraint uq_Employee unique (Salary),
constraint ck_Employee check (Salary > 700 and Salary < 6000) 
)
on SecondaryFG --file group bouns
---visually table
---TelephoneNumber(add&drop)----
alter table Employee
add TelephoneNumber varchar(20);

alter table Employee
drop column TelephoneNumber;

create table Project
(
ProjectNo varchar(50) not null, 
ProjectName varchar(100) not null, 
Budget int null ,
)
alter table Project
add constraint pk_Project primary key (ProjectNo) 


create table Works_on
(
EmpNo int not null,
ProjectNo varchar(50) not null, 
Job varchar(50) null, 
Enter_Date date not null default getdate(), 
constraint pk_Works_on primary key (EmpNo, ProjectNo), 
constraint fk_Works_on_Employee foreign key (EmpNo) references Employee (EmpNo), 
constraint fk_Works_on_Project foreign key (ProjectNo) references Project (ProjectNo) 
)


INSERT INTO Department (DeptName,DepLocation)VALUES
('cs', 'NY'),
( 'is', 'DS'),
('math', 'KW');

INSERT INTO Employee (EmpNo, EmpFname, EmpLname, DeptNo, Salary) VALUES
(1001, 'MAI', 'amr', 1, 5000),
(1002, 'mayar', 'Magdy', 2, 4000),
(1003, 'liala', 'omar', 3, 3000);



INSERT INTO Project (ProjectNo, ProjectName, Budget) VALUES
('P1', 'Doctor', 100000),
('P2', 'shcool',	NULL),	
('P3', 'books', 300000),
('P4', 'social', 400000),
('P5', 'learningplt', 500000);



INSERT INTO Works_on (EmpNo, ProjectNo, Job, Enter_Date) VALUES
(1001, 'P1', 'Manager', '2023-10-06'),
(1002, 'P2', 'Developer', '2021-11-07'),
(1003, 'P3', 'Tester','2023-2-15'),
(1003, 'P1', 'Clerk', '2023-10-06');


--update and delete--
UPDATE Employee SET Salary = 5500 WHERE EmpNo = 1001;
DELETE FROM Project WHERE ProjectNo = 'P3';
--The DELETE statement conflicted with the REFERENCE constraint "fk_Works_on_Project". The conflict occurred in database "Net23_Company", table "dbo.Works_on", column 'ProjectNo'.

DELETE FROM Works_on WHERE EmpNo = 1002;


ALTER TABLE Employee
DROP COLUMN EmpNo
--'pk_Employee' is dependent on column 'EmpNo'.
--'fk_Works_on_Employee' is dependent on column 'EmpNo'.

--i.Add new employee with EmpNo =11111 In the works_on table [Is there error what is it].--
INSERT INTO Works_on VALUES
(11111, 'mazen', 'ali', 20, 2000);

INSERT INTO Works_on (EmpNo)VALUES
(11111);
--Cannot insert the value NULL into column 'ProjectNo', table 'Net23_Company.dbo.Works_on'; column does not allow nulls. INSERT fails.

UPDATE Works_on SET EmpNo = 11111 WHERE EmpNo = 10102;
--no errorr and (0 rows affected)

UPDATE Employee SET EmpNo = 22222 WHERE EmpNo = 10102;
--no errorr and (0 rows affected)
DELETE FROM Employee WHERE EmpNo = 10102;
--no errorr and (0 rows affected)




