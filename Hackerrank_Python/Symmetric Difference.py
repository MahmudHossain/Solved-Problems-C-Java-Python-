a,b=(int(input()),list(input().split()))
c,d=(int(input()),list(input().split()))
x=set(b)
y=set(d)
result =list(x.symmetric_difference(y))
#final=list(result.sort())
#for i in final:
 #   print(i)
print ('\n'.join(sorted(result, key=int)))