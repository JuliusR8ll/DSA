# Write your MySQL query statement below
select t.employee_id employee_id, t.name, count(t.employee_id) reports_count, 
round(avg(t.age),0) average_age
from
(select e1.employee_id, e1.name, e2.age
    from
employees e1 inner join
employees e2 
on e1.employee_id = e2.reports_to) t
group by t.employee_id
order by
employee_id;