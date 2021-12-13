def insertionSort1(n, arr):
    i = arr[-1] 
    j = n-2
    while (i < arr[j]) and (j >= 0):
        arr[j+1] = arr[j]
        print(*arr)
        j -= 1

    arr[j+1] = i
    print(*arr)
    
n=14
arr=[1,3,5,9,13,22,27,35,46,51,55,83,87,23]
insertionSort1(n,arr)