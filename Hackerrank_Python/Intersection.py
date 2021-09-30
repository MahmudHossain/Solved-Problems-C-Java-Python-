a,b=(int(input()),list(input().split()))
c,d=(int(input()),list(input().split()))
x=set(b)
y=set(d)
result =list(x.intersection(y))
print (len(result))

#alternate
'''a,b=(int(input()),map(input().split()))
c,d=(int(input()),map(input().split()))

result =b.intersection(d)
print (len(result))'''
