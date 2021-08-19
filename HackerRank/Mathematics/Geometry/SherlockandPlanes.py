#!/bin/python3

import os
import sys

# Complete the solve function below.
def solve(points):
    for i in range(len(points)):
        if i == 0:
            a = points[0]

        else:
            if a[0] != points[i][0] and a[1] != points[i][1] and a[2] != points[i][2]:
                return "NO"

    return "YES"

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        points = []

        for _ in range(4):
            points.append(list(map(int, input().rstrip().split())))

        result = solve(points)

        fptr.write(result + '\n')

    fptr.close()
