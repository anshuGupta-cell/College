# Write a python program to accept a string. Count total no. of vowels. Consonants and special symbols from it.

s = input("Enter a string: ")
vowels = 0
cons = 0
special = 0

for ch in s:
    if ch.isalpha():
        if ch.lower() in "aeiou":
            vowels += 1
        else: 
            cons += 1
    else: 
        special += 1

print("Vowels: ", vowels)
print("Consonants: ", cons)
print("Special: ", special)