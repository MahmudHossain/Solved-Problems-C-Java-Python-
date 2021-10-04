a_set = set(map(int,input().split()))
t = int(input())
output = False
for i in range(t):
    
    n_set = set(map(int,input().split()))
    result = a_set.issuperset(n_set)
    
    if result and len(n_set)<len(a_set):
        output=True
    else:
        output = False
        break

print(output)
        