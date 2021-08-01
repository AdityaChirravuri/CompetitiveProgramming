# 1 test case failed
def isPrime(n) :
    if (n <= 1) :
        return False
    if (n <= 3) :
        return True
 
    if (n % 2 == 0 or n % 3 == 0) :
        return False
 
    i = 5
    while(i * i <= n) :
        if (n % i == 0 or n % (i + 2) == 0) :
            return False
        i = i + 6
 
    return True
 
n = int(input())
arr = list(map(int, input().split()))
 
stack = []
queue = []
for i in arr:
    if isPrime(i):
        queue.append(i)
    else:
        stack.append(i)
 
for i in queue:
    print(i, end = " ")
print()
stack = reversed(stack)
for i in stack:
    print(i, end = " ")
