# Write your MySQL query statement below
select distinct u.name,coalesce(sum(r.distance) over(partition by u.id),0) travelled_distance 
from (Users u left join Rides r
on r.user_id = u.id)
order by travelled_distance desc, u.name;