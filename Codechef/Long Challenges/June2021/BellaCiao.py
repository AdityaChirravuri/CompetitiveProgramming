# cook your dish here
for i in range(int(input())):
    D, d, p, q= map(int, input().split())
    #print(D, d, p, q)
    if d> D:
        print(p)
    else:
        n = D//d;
        rem = D%d;
        s = d*n*(2*p + (n-1)*q)
        s = s//2
        if rem!=0:
            s += rem*(p + n*q)
    print(s)
