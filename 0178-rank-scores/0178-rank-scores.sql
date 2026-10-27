# Write your MySQL query statement below
select
score,DENSE_RANK() over (ORDER BY score DESC) AS `rank`
from scores;