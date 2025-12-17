# compare.py - Input two number, compare them, and print the sum

# Prompt for a
a=int(input())

# Prompt for b
b=int(input())

# Compare the two
if a>b:
    print("a is greater than b")
else:
    print("a is less than or equal to b")

# Print the sum
print("a={}, b={}, a+b = {}".format(a,b,a+b))