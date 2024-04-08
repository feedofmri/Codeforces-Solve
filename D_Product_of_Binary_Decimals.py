def can_be_product_of_binary_decimals(n):
    return all(digit in '01' for digit in str(n))

# Read the number of test cases
t = int(input())

# Process each test case
for _ in range(t):
    n = int(input())
    if can_be_product_of_binary_decimals(n):
        print("YES")
    else:
        print("NO")
