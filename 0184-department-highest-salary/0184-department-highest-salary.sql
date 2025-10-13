/* Write your PL/SQL query statement below */
WITH cte AS(
    SELECT id,name,salary,departmentId,
    MAX(salary) OVER(PARTITION BY departmentId) AS mx_salary
    FROM employee
)
SELECT d.name AS Department,c.name AS Employee,c.salary AS Salary 
FROM cte c
JOIN
department d
ON c.departmentId=d.id 
WHERE c.salary=c.mx_salary;