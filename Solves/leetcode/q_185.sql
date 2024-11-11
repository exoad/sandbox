# Write your MySQL query statement below
SELECT d.NAME AS Department,
       e.NAME AS Employee,
       salary
FROM   employee e
       LEFT JOIN department d
              ON e.departmentid = d.id
WHERE  (SELECT Count(DISTINCT salary)
        FROM   employee t1
        WHERE  t1.departmentid = d.id
               AND t1.salary >= e.salary) <= 3
       AND d.NAME IS NOT NULL
ORDER  BY d.id DESC;  
