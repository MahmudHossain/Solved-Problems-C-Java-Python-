n = int(input())
s = set(map(int, input().split()))
for _ in range(int(input())):
    new_list = input().split()
    case = new_list[0]
    if case=='pop':
        #if s:
            s.pop()
    elif case=='remove':
 #       if new_list[1] in s:
            s.remove(int(new_list[1]))
    elif case=='discard':
        s.discard(int(new_list[1]))
        
print(sum(s))