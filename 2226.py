n = int(input())
if n<=2:
    print(n-1)
else:
    dp = 1
    for i in range(3, n):
        if i%2==0:
            dp=dp*2-1
        else:
            dp=dp*2+1
    print(dp)
