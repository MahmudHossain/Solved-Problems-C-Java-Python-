a,b=(int(input()),set(map(int,input().split())))
c,d=(int(input()),set(map(int,input().split())))

result =b.symmetric_difference(d)
print (len(result))