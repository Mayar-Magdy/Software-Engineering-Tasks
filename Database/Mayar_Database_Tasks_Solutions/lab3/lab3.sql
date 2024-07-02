--Task--
create database Net23_Company
on primary (
name='Net23_Company_Data',
Size=10MB,
filegrowth=10%,
Maxsize=50MB,
filename='C:\Program Files\Microsoft SQL Server\MSSQL16.MSSQLSERVER\MSSQL\DATA\Net23_Company_Data.mdf'

)
log on 
(
name='Net23_Company_Log',
Size=5MB,
filegrowth=10%,
Maxsize=40MB,
filename='C:\Program Files\Microsoft SQL Server\MSSQL16.MSSQLSERVER\MSSQL\DATA\Net23_Company_Log.ldf'

)--end the task--