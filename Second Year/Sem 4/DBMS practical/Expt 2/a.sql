postgres=# create or replace function MinMaxNos (
a int,
b int
)
returns table (
Min int,
Max int
)
language plpgsql
as $$
begin
    return query
    select
        case when a < b then a else b end as Min,
        case when a > b then a else b end as Max;
end;
$$;
CREATE FUNCTION
postgres=# select * from MinMaxNos(10,39);
 min | max 
-----+-----
  10 |  39
