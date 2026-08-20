CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
      # Write your MySQL query statement below.
    SET N = N - 1;
    RETURN(
        SELECT DISTINCT(salary) FROM Employee order by salary desc
        LIMIT 1 Offset N
        );
END