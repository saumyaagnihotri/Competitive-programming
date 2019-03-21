t = int(input())
while(t):
    t = t-1
    s = input().split()
    n = list(map(int, s[0]))
    d = int(s[1])
    f = -1
    i = 0 
    if(n[len(n)-1]>d):
            n[len(n)-1] = d
    while(i<len(n)-1):
        f = -1
        if(n[i]>n[i+1]):
            f = i
        i+=1    
        if(f==-1):
            continue
        
        n.pop(f)
        n.append(d)
        i = 0
    print(''.join(map(str, n)))
