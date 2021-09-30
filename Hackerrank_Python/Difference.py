a,b=(int(input()),set(map(int,input().split())))
c,d=(int(input()),set(map(int,input().split())))

result =b.difference(d)
print (len(result))