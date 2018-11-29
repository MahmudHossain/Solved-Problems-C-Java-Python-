n = int(input())
arr=[]
for i in range(n):

    arr.append(input().split(' '))


flag=max(arr)
while max(arr)==flag:
    arr.remove(max(arr))

print(max(arr))
