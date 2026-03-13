# Write a python program to accept a string, find all words that do not contain vowels


text = input("Enter a string: ")
vowels = "aeiouAEIOU"

# Split the text into words
words = text.split()

# Find words without vowels
words_no_vowels = [word for word in words if not any(ch in vowels for ch in word)]

print("Words without vowels:", words_no_vowels)