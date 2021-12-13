import math
import os
import random
import re
import sys

#
# Complete the 'plusMinus' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def plusMinus(arr):
    l=len(arr)
    positive=0
    negative=0
    zero = 0
    for i in range(n):
        if arr[i]>=1:
            positive+=1
        elif arr[i]==0:
            zero+=1
        elif arr[i]<1:
            negative+=1
        
    print("{:.6f}".format(positive/l))
    print("{:.6f}".format(negative/l))
    print("{:.6f}".format(zero/l))
        
if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
