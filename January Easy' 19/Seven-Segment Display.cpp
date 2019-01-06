m = {'0': 6, '1': 2, '2': 5 , '3': 5  ,'4': 4 ,'5': 5 ,'6' : 6 ,'7': 3 , '8': 7 ,'9': 6 } 
testcase = int(input())
for aksjdfj in range(testcase):
    n1 = (input())
    
    sticks = 0
    if(n1=='0'):
        print("111")
    else:
        for i in n1:
           sticks = sticks + m[i]
 
        if(sticks%2==0):
            s ="1"
            ll = int(sticks/2)
            #print(sticks%2)
            #print(ll)
            print(s*ll)
        else:
            cc = int(sticks/2)
            cc = cc*2
            ss = "7"
            k = "1"
            #print("2")
            print(ss + (int(cc/2)-1)*k)
    print("\n")