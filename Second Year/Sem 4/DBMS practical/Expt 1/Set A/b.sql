b. Write a procedure to display division of two numbers use raise to display error messages.

exp1=# CREATE OR REPLACE PROCEDURE divide(
in n1 numeric,
in n2 numeric
)
language plpgsql
as $$
begin 
    if n2 = 0 then 
		raise exception 'ERROR: division by 0 is not allowed';
	end if; 
	raise notice 'division is: %', n1/n2;
end;
$$;
CREATE PROCEDURE

exp1=# call divide (9, 7);
NOTICE:  division is: 1.2857142857142857
CALL

