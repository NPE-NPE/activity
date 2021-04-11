N = int(input())

V = list(map(int, input().split()))

T = []
A = []

V.reverse()
print(V)

for i in range(N):
  d = V(0)
  T.append(d)
  V.pop(0)
  print(T)
  
  c = statistics.median(V)
  A.append(c)
  V.remove(c)

print(sum(T))
