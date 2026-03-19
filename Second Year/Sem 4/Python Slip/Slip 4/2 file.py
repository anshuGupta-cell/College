# Write a python program for following
# a) Create a file which stores the first name, middle name and last name of your 5 friends
# b) Display contents of file
# c) Append other 5 friend’s names
# d) Display modified file contents

friends = [
    "Natsume\n",
    "Rukia\n",
    "Zero 2"
]

with open("friends.txt", "w") as f:
    f.writelines(friends)

print("Content")
with open("friends.txt", "r") as f:
    print(f.read())

