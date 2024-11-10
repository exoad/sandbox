# Write your MySQL query statement below
SELECT DISTINCT(a.email) from Person a JOIN Person b ON a.email=b.email AND a.id<>b.id
