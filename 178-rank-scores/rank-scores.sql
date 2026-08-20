# Write your MySQL query statement below
SELECT score,
DENSE_RANK() OVER (Order BY score DESC) as 'rank'
FROM Scores
Order BY score DESC;
