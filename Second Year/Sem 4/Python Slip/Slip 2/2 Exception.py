# Write a python program to demonstrate a user defined exception that checks whether the entered marks are between 0 and 100. Display an approprite message for invalid input and out of range values. Also display Grade of marks.

class InvalidMarksError (Exception):
    pass
try:
    marks = int(input("Enter marks (0 - 100)"))
    if marks < 0 or marks > 100:
        raise InvalidMarksError("marks should ")
except ValueError:
    print("value err")
except InvalidMarksError as e:
    print("error", e)