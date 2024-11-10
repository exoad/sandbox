# Write your MySQL query statement below
SELECT DISTINCT stock_name,
    SUM(
        CASE WHEN operation="Sell"
        THEN price ELSE -price END
    )
    OVER(PARTITION BY stock_name) AS capital_gain_loss
FROM Stocks;
