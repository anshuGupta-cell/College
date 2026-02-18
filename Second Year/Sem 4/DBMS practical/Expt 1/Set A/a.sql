Write a procedure to display addition, subtraction and multiplication of three numbers.
exp1=# CREATE OR REPLACE PROCEDURE CalculateOperations(
IN n1 int,
IN n2 int,
IN n3 int
)
LANGUAGE plpgsql
AS $$
BEGIN 
RAISE NOTICE 'ADD %', n1 + n2 + n3;RAISE NOTICE 'SUB %', n1 - n2 - n3;  
RAISE NOTICE 'MULT %', n1 * n2 * n3;  

END;
$$;
CREATE PROCEDURE

exp1=# CALL CalculateOperations(4, 3, 2);
NOTICE:  ADD 9
NOTICE:  SUB -1
NOTICE:  MULT 24
CALL

