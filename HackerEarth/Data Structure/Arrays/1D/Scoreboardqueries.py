for _ in range(int(input())):
   n, q = map(int, input().split())
   scr = list(map(int, input().split()))
   rank = {}
   for s in scr:
       if rank.get(s):
           rank[s] += 1
       else:
           rank[s] = 1

   for _ in range(q): 
       i, c = map(int, input().split())
       if scr[i-1] != c:
           rank[scr[i-1]] -= 1
           if rank[scr[i-1]] == 0:
               del rank[scr[i-1]]
           if rank.get(c):
               rank[c] += 1
           else:
               rank[c] = 1
 
           scr[i-1] = c
       print(len(rank) + 1)
