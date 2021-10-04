n,m = map(int,input().split())
n_element = list(map(int,input().split()))
a_set = set(map(int,input().split()))
b_set = set(map(int,input().split()))
count=0
for i in n_element:
    if i in a_set:
        count+=1
for i in n_element:
    if i in b_set:
        count-=1  

print(count)