# Write your MySQL query statement below
WITH CTE AS
    (SELECT Salary,DENSE_RANK() OVER (ORDER BY Salary desc) AS SALARY_RANK
        FROM Employee)
SELECT MAX(salary) AS SecondHighestSalary 
    FROM CTE
WHERE SALARY_RANK=2
