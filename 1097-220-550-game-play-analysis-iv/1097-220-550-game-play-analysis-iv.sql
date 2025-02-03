# Write your MySQL query statement below
select round(count(distinct a.player_id)/(select count(distinct player_id) from activity), 2) fraction
from
activity a join
(select player_id, min(event_date) d
from activity 
group by
player_id
) t
on a.player_id = t.player_id  and datediff(a.event_date,t.d) = 1
;