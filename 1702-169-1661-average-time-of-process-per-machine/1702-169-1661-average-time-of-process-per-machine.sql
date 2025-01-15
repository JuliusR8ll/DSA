# Write your MySQL query statement below
select T.machine_id, round(avg(T.time),3) processing_time 
from
(select a.machine_id,a.process_id, (b.timestamp - a.timestamp) time
from
activity a left join
activity b on(
    a.machine_id = b.machine_id and a.process_id = b.process_id 
    and a.activity_type = 'start' and b.activity_type = 'end')) T

group by T.machine_id 

;