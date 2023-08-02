select product_name,sum(unit) as unit
from Orders as o left join Products as p
On o.product_id = p.product_id where o.order_date > '2020-01-31' 
and o.order_date < '2020-03-01' group by o.product_id
having sum(unit)>=100;