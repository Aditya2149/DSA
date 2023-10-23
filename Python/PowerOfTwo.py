n = int(input())
i = 0
ispow = False
while i <=31:
    if(n == pow(2,i)):
        ispow = True
        break
    i = i+1

if(ispow):
    print(f"{n} is a power of Two")
else:
    print(f"{n} is not a power of Two")
