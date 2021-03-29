#本書のコード
N = int(input())
S = []

for i in range(0, N):
    si = input()
    si = list(si)  # 受け取った文字列 si を文字のリストに変換する
    S.append(si)

for i in range(N - 2, -1, -1):#range(s, t)はsからtの一つ前まで１ずつ増やす, この文はN-2から-1の一つ前（0）まで減らす
    for j in range(1, 2 * N - 1):#S[i]の２文字目（i == 1）から2*N - 1の一つ前（2 * N - 2）まで文字一つずつ表示
        if S[i][j] == "#":
            if S[i + 1][j - 1] == "X":
                S[i][j] = "X"
            if S[i + 1][j] == "X":
                S[i][j] = "X"
            if S[i + 1][j + 1] == "X":
                S[i][j] = "X"
for i in range(0, N): #２次元配列としてではなく文字列として出力するので、改行の出力は必要ない
    S[i] = "".join(S[i])  # 文字のリストS[i]を結合して、文字列に戻す
    print(S[i])

#自分のコード
N = int(input())
S = []
for _ in range(0, N):
    si = input()
    S.append(si)

for i in range(N - 1, 0):
  for j in range(0, 2 * (N - 1)):
    if S[i][j] == '#' and S[i + 1][j - 1] == 'X' or S[i + 1][j] == 'X' or S[i + 1][j - 1] == 'X':
      S[i][j] == 'X'

for i in range(0, N):
  for j in range(0, 2 * N - 1):
    if(S[i][j % 2 * N - 1 == 0)
    print(S[i][j])

