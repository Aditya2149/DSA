import string

s = input()
n =  int(input())
count = 0

if(n==1):
    for i in s:
        if(i == " "):
            continue
        count += 1
    print(count)

if(n==2):
    for i in s:
        if(i == " "):
            continue
        count += 1
    print(count)

if(n==3):
    for i in s:
        if(i == " "):
            continue
        count += 1
    print(count)

if(n>3):
    print("Invalid Input")

    