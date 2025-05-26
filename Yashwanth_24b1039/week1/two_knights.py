x=int(input())

n=1

while(n<=x):
    total=n*n*(n*n-1)//2

    attacking=(n-1)*(n-2)*4

    attacking=max(attacking,0)

    print(total-attacking)

    n+=1