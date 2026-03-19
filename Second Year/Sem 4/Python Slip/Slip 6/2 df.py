# Create a following DataFrame named as “data”. Write the python code for the following

import pandas as pd

data = {
    "comany": ["pencil", "pencil"],
    "name": ["apsara", "nataraj"],
    "count": [34, 57],
    "price": [450, 500],
}

df = pd.DataFrame(data)
print(df)

# a) Find all rows with the label "Pencil" (Company == "Pencil")
pencil_rows = df[df["comany"]=="pencil"]
print(pencil_rows)

# b) Change the count of Eraser as 25 instead of 20