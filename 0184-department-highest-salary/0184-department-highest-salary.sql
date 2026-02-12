# Write your MySQL query statement below
select dept.name as Department, emp.name AS Employee , emp.salary as Salary  
from Employee emp, Department dept
where emp.DepartmentId = dept.id AND 
(emp.departmentId, emp.salary ) IN
(select departmentID , MAX(salary) from Employee group by DepartmentId)
