#wite a python prog that accelpts value of m and n. Divides m by n and handles a ZeroDivisionError if the user tries to divide by zero.

try:
    m = int(input("Enter m: "))
    n = int(input("Enter n: "))

    print(m/n)
except ZeroDivisionError:
    print("zero")
except ValueError:
    print("value error, please enter a no")