# Write a python program to accept a file name from user. If file exist display contents of file and number of characters, words and lines in a file, otherwise display appropriate message

import os 

fname = input("Enter name of file:")

if os.path.exists(fname):
    with open(fname, "r") as f:
        content = f.read()

        print("\nFile Conntent\n")
        print(content)

        print("Characters: ", len(content))
        print("Words: ", len(content.split()))
        print("Lines", len(content.splitlines()))
else:
    print("File does not exist.")