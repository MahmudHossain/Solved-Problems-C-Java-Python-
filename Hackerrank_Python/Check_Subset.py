# Enter your code here. Read input from STDIN. Print output to STDOUT
t = int(input())
for i in range(t):
    a = int(input())
    a_set = set(map(int,input().split()))
    b = int(input())
    b_set = set(map(int,input().split()))
    z=a_set.issubset(b_set)
    if z:
        print(z)
    else:
        print('False')