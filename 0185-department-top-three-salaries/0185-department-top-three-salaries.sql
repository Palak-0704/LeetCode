# Write your MySQL query statement below
select dept.name as Department , emp.name as Employee , emp.salary as Salary 
from Employee emp
join Department dept 
on emp.departmentId = dept.id
where (
    select count(Distinct e2.salary)
    from Employee e2 
    where e2.departmentId = emp.departmentId
    And e2.salary > emp.salary 
) < 3 ;