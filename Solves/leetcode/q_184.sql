# Write your MySQL query statement below
SELECT Department,Employee,Salary FROM 
    (SELECT
        D.NAME AS Department, 
        E.NAME AS Employee,
        E.SALARY AS Salary,
        DENSE_RANK() 
            OVER(PARTITION BY D.NAME ORDER BY E.SALARY DESC) AS ax
            FROM EMPLOYEE E
            JOIN DEPARTMENT D ON D.ID=E.DEPARTMENTID
    ) AS R
WHERE R.ax=1;
