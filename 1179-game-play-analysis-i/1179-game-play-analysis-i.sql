# Write your MySQL query statement below
/* Write your PL/SQL query statement below */
SELECT player_id,MIN(event_date) AS first_login
FROM Activity
GROUP BY player_id;