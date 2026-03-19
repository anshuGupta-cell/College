# Write a Python program that prompts the 
# user to input two numbers and 
# raises a TypeError exception 
# if the inputs are not numerical.

try:

    m = input("Enter num 1: ")
    n = input("Enter num 2: ")

    if not (m.replace('.', '', 1).isdigit() and n.replace('.', '', 1).isdigit()):
        raise TypeError("Both inputs must be numerical")

    m = float(m)
    n = float(n)
    print(m, n)
    
except TypeError as e:
    print("error", e)