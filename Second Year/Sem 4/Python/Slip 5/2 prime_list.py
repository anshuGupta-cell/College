# Write a python program to create a list of prime numbers between m and n using List comprehension. (Accept the value of m and n from user, m should be less than n)

m = int(input("Enter lower bound"))
n = int(input("Enter upper bound"))

if m>=n:
    print("Error: m shoud be lower")
else:
    primes = [num for num in range(m, n+1) if num>1 and all(num % i != 0 for i in range (2, int(num**0.5)+1))]
    print("prime numbers", primes)