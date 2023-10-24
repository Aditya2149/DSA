print("Enter two numbers and operation: ")
a,b=  map(int,input().split())
print("Enter operation: ")
op = input()

if(op == '+'):
    print(f"Sum: {a+b}")
elif(op == '-'):
    print(f"Difference: {a-b}")
elif(op == '*'):
    print(f"Product: {a*b}")
elif(op == '/'):
    print(f"Divide: {a/b}")
elif(op == '%'):
    print(f"Modulus: {a%b}")
else:
    print("Invalid operation")
