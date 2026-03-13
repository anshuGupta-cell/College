# Write a python program to list all files in a current directory. Display total count of .py files and content of any one .py files

import os

path = os.getcwd()

files = os.listdir(path)

print("Filels in cwd")
for file in files:
    print(file)

pyFiles = [f for f in files if f.endswith(".py")]
print(pyFiles.__len__())

if pyFiles:
    file_name = pyFiles[0]
    print(file_name)

    with open(file_name, "r") as f:
        content = f.read()
        print(content)
else:
    print("No py files")
