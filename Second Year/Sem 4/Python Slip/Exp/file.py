fname = "Exp/host"
# with open(fname, "w") as f:
#     f.write("fljksa  sldkfj")

data = ""
with open(fname, "r") as f:
    data = f.read()

data.replace("anshu", "fljksa")
print(data)
data.replace("fljksa", "anshu")

print(data)

# with open(fname, "w") as f:
#     f.write(data)
#     print("success")

