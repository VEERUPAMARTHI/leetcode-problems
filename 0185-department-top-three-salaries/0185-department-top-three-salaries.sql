/* Write your PL/SQL query statement below */
WITH cte AS
(
    SELECT e.id,e.name AS Employee,d.name AS Department,e.salary,
    DENSE_RANK() OVER(PARTITION BY d.id ORDER BY e.salary DESC) AS rank FROM
    employee e
    JOIN
    department d
    ON e.departmentid=d.id;
)
SELECT department,employee,salary FROM cte WHERE rank<4;