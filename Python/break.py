for i in range(5):
    if i > 2:
        if i <4:
            print("Breaking from inner if block")
            break  # This will exit the inner if block
    print("Value of i:", i)

print("Loop finished")
