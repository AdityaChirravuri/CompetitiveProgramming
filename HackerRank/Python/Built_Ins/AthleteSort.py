import math
import os
import random
import re
import sys

def Solve(arr, k):

    arr.sort(key = lambda l: l[k])
    for i in range(len(arr)):
        print(*arr[i])
    


if __name__ == '__main__':
    nm = input().split()

    n = int(nm[0])

    m = int(nm[1])

    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))
        

    k = int(input())

    Solve(arr, k)
