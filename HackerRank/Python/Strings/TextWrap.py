import textwrap
string = input()
n = int(input())
l = textwrap.wrap(string,n)
for i in range(len(l)):
    print(l[i])
