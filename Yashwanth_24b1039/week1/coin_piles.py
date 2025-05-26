n=int(input())

while(n>0):

    a,b=map(int,input().split())

    print( "YES" if ((2*a-b)>=0 and (2*b-a)>=0 and (2*a-b)%3==0 and (2*b-a)%3==0) else "NO")

    n-=1
