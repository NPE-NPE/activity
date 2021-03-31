#本書のコード

N = int(input())
# 今までに出てきたゾロ目数の数
z = 0
# 1 から 555555 までの整数を全て調べる。調べている数を iとする
for i in range(1, 555555 + 1):#インクリメントをi += 1と実装しないように注意
    # i がゾロ目数かどうか調べるために、i を文字列にした si を作る
    si = str(i)
    # i がゾロ目数だったかどうかを保存する変数
    ok = True
    # si の全ての文字が si の 0 文字目と同じかどうかを調べる
    # si の 0 文字目と同じ文字が含まれていたら、i はゾロ目数ではない
    for s in si:
        if s != si[0]:
            ok = False
    # i がゾロ目数のとき、出てきたゾロ目数の数を 1 増やす
    if ok:
        z += 1
    # i がゾロ目数で、N 番目に出てきたゾロ目数ならば、答えとして保存する
    if ok and z == N:
        ans = i
print(ans)

#全探索でない自分のコード
N = int(input())
counta = 9
countb = 18
countc = 27
countd = 36
counte = 45
n = 0

for i in range(5):
  if(9 >= N >= 1):
    continue
  elif(18 >= N >= 10):
    n += 11
    counta += 1
    if(counta == N):
      break
  elif(27 >= N >= 19):
    n += 111
    countb += 1
    if(countb == N):
      break
  elif(36 >= N >= 28):
    n += 1111
    countc += 1
    if(countc == N):
      break
  elif(45 >= N >= 37):
    n += 11111
    countd += 1
    if(countd == N):
      break
  else:
    n += 111111
    counte += 1
    if(counte == N):
      break
  
if(9 >= N >= 1):
  print(N)
else:
  print(n)

#全探索を試そうとした自分のコード  
N = int(input())
i = 0
si = str(i)
count = 0

for i in range(1, 555555):
  i += 1
  if i => 9:
    count += 1
  if 10 >= i > 9:
    count += 1
    if si[0] == s[1]:
      count += 1
      if count == N:
        break 
    elif si[0] == s[1] and si[0] == s[2]:
      count += 1
    elif si[0] == s[1] and si[0] == s[2] and si[0] == s[3]:
      count += 1
    elif si[0] == s[1] and si[0] == s[2] and si[0] == s[3] and si[0] == si[4]:
      count += 1
    elif si[0] == s[1] and si[0] == s[2] and si[0] == s[3] and si[0] == si[4] and si[0] == si[5]:
      count += 1
    elif si[0] == s[1] and si[0] == s[2] and si[0] == s[3] and si[0] == si[4] and si[0] == si[5] and si[0] == si[6]:
      count += 1
    
  
print(i)
