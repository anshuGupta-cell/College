# Write a Python program to create a list of elements. 
# Shuffle the elements of a given list and display the list. 
# [Hint: Use random.shuffle()]

import random

my_list = [1, 2, 3, 4, 5, 6]

print("Oriented List: ", my_list)

random.shuffle(my_list)
print("shuffled list: ", my_list)