t = int(input())
v = list(map(int,input().split()))
c = list(map(int,input().split()))
a = sum(v)
b = sum(c)
mxx = a-b
for i in range(t):
    temp = a-b
    a1 = a - v[i]
    b1 = b - c[i]
    if((a1-b1)>temp):
        a = a1
        b = b1
        mxx = a-b
        
print(mxx)  
