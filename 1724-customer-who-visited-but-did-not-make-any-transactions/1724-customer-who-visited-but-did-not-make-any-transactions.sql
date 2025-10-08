/* Write your PL/SQL query statement below */
WITH cte AS    
(
    SELECT v.customer_id AS customer_id
    FROM
    visits v   
    LEFT JOIN
    transactions t
    ON v.visit_id = t.visit_id
    WHERE t.visit_id IS NULL
)
SELECT customer_id,COUNT(*) AS count_no_trans
FROM cte
GROUP BY customer_id;