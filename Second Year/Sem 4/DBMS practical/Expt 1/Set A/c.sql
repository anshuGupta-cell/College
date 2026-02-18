company_db=# create or replace procedure ins_dept(
in dno int ,
in dname varchar(50),
in empname varchar(50), in city varchar(50)
)
language plpgsql
as $$
begin 
    insert into Department (dno, dname, empname, city) 
	values (dno, dname, empname, city);
	raise notice 'inserted';  
end;
$$;
CREATE PROCEDURE

company_db=# call ins_dept(1, 'hr', 'amt', 'a');
NOTICE:  inserted
CALL

