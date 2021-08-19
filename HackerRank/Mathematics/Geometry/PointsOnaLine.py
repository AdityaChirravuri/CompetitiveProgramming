#!/bin/python3

import math
import os
import random
import re
import sys

if __name__ == '__main__':
    n = int(input())
    a = [0, 0]
    for n_itr in range(n):
        xy = input().split()

        x = int(xy[0])

        y = int(xy[1])
        
        #a = xy
        if n_itr == 0:
            a = xy
            continue
        
        if a[0] != xy[0] and a[1] != xy[1]:
            print("NO")
            break
        if n_itr == n-1:
            print("YES")

            
    
