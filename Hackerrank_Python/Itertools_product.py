from itertools import product

def cartesian_product(arr1, arr2):
 
    # return the list of all the computed tuple
    # using the product() method
    return tuple(product(arr1, arr2))

if __name__=="__main__":
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    a.sort()
    b.sort()
    t = cartesian_product(a,b)
    for i in range(len(t)):
        print(t[i],end=" ")
