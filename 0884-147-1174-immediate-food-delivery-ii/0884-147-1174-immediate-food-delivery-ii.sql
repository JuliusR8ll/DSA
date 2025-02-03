select round((sum(case when t.o = t.d then 1 else 0 end)/
        count(*)) *100,2) immediate_percentage
from
(select customer_id, min(order_date) o, min(customer_pref_delivery_date) d
from delivery
group by 
customer_id) t;