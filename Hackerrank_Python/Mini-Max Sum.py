
import math
import os
import random
import re
import sys


def miniMaxSum(arr):
    # Write your code here
    arr.sort()
    minimum = (sum(arr)-arr[-1])
    print(minimum,end=" ")
    maximum = (sum(arr)-arr[0])
    print(maximum)
    

if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
