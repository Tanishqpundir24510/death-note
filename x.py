x=int(input())
y=int(x)
rev=0
while(y > 0): 
    a = y % 10
    rev = rev * 10 + a 
    y = y // 10
if x==rev :
    print("Palindrome")
else :
    print("Not Palindrome")
