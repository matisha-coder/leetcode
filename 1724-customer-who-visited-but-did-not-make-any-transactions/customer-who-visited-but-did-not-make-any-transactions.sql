# Write your MySQL query statement below
SELECT v.customer_id,
COUNT(*) AS count_no_trans
FROM Visits v
Left join Transactions t
On v.visit_id= t.visit_id
where t.transaction_id is null
GROUP BY v.customer_id;
