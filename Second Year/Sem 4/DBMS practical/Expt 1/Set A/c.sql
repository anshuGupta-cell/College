CREATE DATABASE company_db;
\c company_db;

CREATE TABLE Department (
dno INT PRIMARY KEY,
dname VARCHAR(50),
empname VARCHAR(50),
city VARCHAR(50)
);

-- 1 Write a procedure to insert values in Department table =>
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

company_db=# call ins_dept(1, 'hr', 'amt', 'Pune');
NOTICE:  inserted
CALL


-- 2 Write a procedure to display all employees working in ‘Pune’ city =>

company_db=# CREATE OR REPLACE PROCEDURE display_employees_pune()
LANGUAGE plpgsql AS $$
DECLARE
	rec RECORD;
BEGIN
	FOR rec IN
		SELECT empname, dname
		FROM Department
		WHERE city = 'Pune'
	LOOP
		RAISE NOTICE 'Employee: %, Department: %',
		rec.empname, rec.dname;
	END LOOP;
END;
$$;

CREATE PROCEDURE

company_db=# CALL display_employees_pune();
NOTICE:  Employee: amt, Department: hr
CALL
