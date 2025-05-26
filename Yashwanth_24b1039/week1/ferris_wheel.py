n, x=map(int,input().split())
weight=list(map(int,input().split()))

weight.sort(reverse=True)

min_gondala=0
i=0
j=n-1
while j>i:
    if((weight[i]+weight[j])<=x):
        j-=1
    min_gondala+=1
    i+=1
    
if (i==j):
    min_gondala+=1

print(min_gondala)