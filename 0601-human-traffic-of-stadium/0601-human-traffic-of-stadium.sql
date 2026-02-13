# Write your MySQL query statement below
select id , visit_date, people
from(
    select *,
    id - row_number() over(order by id  ) as  diff
    from Stadium
    where people > 99
) t 
where diff in (
    select diff 
    from(
        select *,  id - row_number() over(order by id) as  diff
        from Stadium
        where people > 99
    ) x 
    group by diff
    having count(*) >= 3
)
order by visit_date;
