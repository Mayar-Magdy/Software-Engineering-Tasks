use Company_SD;
select * from Employee 
select * from Project
select * from Works_for
select * from Departments
select * from Employee 
select * from Dependent
--1. Display the Department id, name and id and the name of its manager.
select D.Dnum,D.Dname,EMP.SSN,EMP.Fname+' '+EMP.Lname as 'Manger Name'
from Employee EMP,Departments D
where D.MGRSSN=EMP.SSN

--2. Display the name of the departments and the name of the projects under its control.
select D.Dname  ,P.Pname as'projects under its control'  
from Departments D,Project P where D.Dnum=P.Dnum

--3. Display the Id, name and location of the projects in Cairo or Alex city. 
select P.Pnumber,P.Pname ,P.Plocation
from Project P where P.City in('Alex','Cairo')

--4. Display the Projects full data of the projects with a name starts with "p" letter. 
select *
from Project P where P.Pname like 'P%'

--5. display all the employees in department 10 whose salary from 1000 to 2000 LE monthly 
select EMP.Fname +' '+EMP.Lname ,EMP.SSN ,EMP.Bdate ,EMP.Address,EMP.Sex,EMP.Superssn
from Employee EMP where EMP.Dno=10 and Salary between 1000 and 2000

--6.  Retrieve the names of all employees in department 10 who works more than or equal10 hours per week on "P1" project.
select EMP.Fname+' '+EMP.Lname as 'names'
from Employee EMP, Works_for W
where EMP.SSN=W.ESSn and (W.Hours=10 or W.Hours>10)  and EMP.Dno='10'and  W.Pno='100'

--7. Find the names of the employees who directly supervised with Huda. 
select EMP.Fname+' '+EMP.Lname as 'name',EMP.SSN,
Sup.Fname+' '+Sup.Lname as 'Supervisor_Name',Sup.SSN as 'Supervisor_SSN'
from Employee EMP inner join Employee Sup
on EMP.Superssn=Sup.SSN and Sup.Fname='Huda' --no one supervised by hudaa
--8. Retrieve the names of all employees and the names of the projects they are working on, sorted by the project name.
select EMP.Fname +' '+EMP.Lname 'Name' ,P.Pname'Project Name' 
from Employee EMP,Project P,Works_for W where EMP.SSN= W.ESSn and P.Pnumber=W.Pno
order by (P.Pname)
--9. For each project located in Cairo City , find the project number, the controlling department name ,
--the department manager last name ,address and birthdate. 
select EMP.Fname +' '+EMP.Lname 'name' ,EMP.Bdate ,p.Pname,D.Dname
from Departments D,Project P,Employee EMP where D.Dnum=P.Dnum and D.MGRSSN =EMP.SSN
--10. Display All Data of the mangers 
select Emp2.* from Employee Emp1,Employee Emp2 where Emp1.Superssn=Emp2.SSN

--11. Display All Employees data and the data of their dependents even if they have no dependents 
select * from Employee EMP,Dependent d where EMP.SSN=d.ESSN
--12. Insert your personal data to the employee table as a new employee in department number 30, SSN = 102672, Superssn = 112233. 
insert into Employee values('Mayar','Magdy',102672,'3/3/2003','Elfayoum','F',10000,112233,30)
-- 1 row effected

--13. Insert another employee with personal data your friend as new employee in department number 30, SSN = 102660, but don’t enter any value for salary or manager number to him. 
insert into Employee(Fname,Lname,SSN,Dno)values('reem','moawd',102660,30)

--14. In the department table insert new department called "DEPT IT" , with id 100, employee with SSN = 112233 as a manager for this department. The start date for this manager is '1-11-2006'.
insert into Departments values('DEPT IT',100,112233,'11/1/2006')

--15. For each project, list the project name and the total hours per week (for all employees) spent on that project. 
select P.Pname,sum(W.Hours) as 'Total hours per week' 
from Project P,Works_for W
where W.Pno=P.Pnumber
group by P.Pname
--------------------------------------------
--16. For each department, retrieve the department name and the maximum, minimum and average salary of its employees. 
select D.Dname,max(EMP.Salary)'maximum_Salary',min(EMP.Salary)'Minimum_salary'
from Employee EMP,Departments D
where EMP.Dno=D.Dnum
group by D.Dname
---------------------------------------------------------------------------------------------------------
--17. Retrieve a list of employees and the projects they are working on ordered by department and within each department, ordered alphabetically by last name, first name. 

select D.Dname, E.Fname, E.Lname, P.Pname
from Departments D, EMPLOYEE E, Works_for W, PROJECT P
where D.Dnum = E.Dno and E.Ssn = W.Essn and W.Pno = P.Pnumber
ORDER BY D.Dname, E.Fname, E.Lname;--sorted

