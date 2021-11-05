t = int(input())
for i in range(t):
    
    try:
        a,b = map(int,input().split())
        print(a//b)
    except Exception as e:
        print("Error Code:",e)
    #except ValueError:
        #print('Error Code: invalid literal for int() with base 10: {0}'.format(b)) 