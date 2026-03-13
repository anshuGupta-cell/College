import pandas as pd 

mobileData = {
    "mobile": ["iPhone", "Samsung", "Vivo"],
    "price": [35999, 3999, 4999]
}

df = pd.DataFrame(mobileData)
print(df)
