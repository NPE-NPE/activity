#未解決
#自分のコード（関数）
def is_match(T, S):
  for i in range(0, len(S)):
    for j in range(0, len(T)):
      if S(i) == T(j):
        

#本書のコード（関数）
# 文字列 T が文字列 S にマッチするかどうかを判定する関数
# マッチするときは True を、マッチしないときは False を返す
def is_match(T, S):
    # S の i 文字目から始まる部分が T とマッチするかどうか調べる
    #Sの長さ全部を調べる必要はなく、Sの長さからTの長さを引いた数（Sのi文字目からTの１文字目（先頭）の間）までを順に調べれば良い
    for i in range(0, len(S) - len(T) + 1):
        # S の i 文字目から始まる部分が
        # T とマッチしているかどうかを保持する変数
        ok = True
        # T の j 文字目と、S の i+j 文字目を見比べる
        for j in range(0, len(T)):
            # T の j 文字目が S の i+j 文字目と異なっていて、
            # かつ、T の j 文字目が "." でもない場合、
            # S の i 文字目から始まる部分は T とはマッチしない
            if S[i + j] != T[j] and T[j] != ".":
                ok = False
        # S の i 文字目から始まる部分が T マッチしている場合、True を返す
        if ok:
            return True
    # S の全ての部分について T とマッチしなかった場合、False を返す
    return False
  
#自分のコード（文字列Sにマッチする長さ１の候補全列挙）
S = input()

if S[i] == 

#本書のコード（文字列Sにマッチする長さ１の候補全列挙）
# 使える文字の一覧
C = "abcdefghijklmnopqrstuvwxyz."
# 文字列 S とマッチする文字列を保持する配列
M = []
# 長さ 1 の文字列を全て調べ、S とマッチするものを M に入れる
for T in C:
    if is_match(T, S):
        M.append(T)
        
#本書のコード（解答）
# 文字列 T が文字列 S にマッチするかどうかを判定する関数
# マッチするときは True を、マッチしないときは False を返す
def is_match(T, S):
    # S の i 文字目から始まる部分が T とマッチするかどうか調べる
    for i in range(0, len(S) - len(T) + 1):
        # S の i 文字目から始まる部分が
        # T とマッチしているかどうかを保持する変数
        ok = True
        # T の j 文字目と、S の i+j 文字目を見比べる
        for j in range(0, len(T)):
            # T の j 文字目が S の i+j 文字目と異なっていて、
            # かつ、T の j 文字目が "." でもない場合、
            # S の i 文字目から始まる部分は T とはマッチしない
            if S[i + j] != T[j] and T[j] != ".":
                ok = False
        # S の i 文字目から始まる部分が T マッチしている場合、True を返す
        if ok:
            return True
    # S の全ての部分について T とマッチしなかった場合、False を返す
    return False


S = input()
# 使える文字の一覧
C = "abcdefghijklmnopqrstuvwxyz."
# 文字列 S とマッチする文字列を保持する配列
M = []
# 長さ 1 の文字列を全て調べ、S とマッチするものを M に入れる
for T in C:
    if is_match(T, S):
        M.append(T)

# 長さ 2 の文字列を全て調べ、S とマッチするものを M に入れる
for c1 in C:
    for c2 in C:
        T = c1 + c2
        if is_match(T, S):
            M.append(T)
# 長さ 3 の文字列を全て調べ、S とマッチするものを M に入れる
for c1 in C:
    for c2 in C:
        for c3 in C:
            T = c1 + c2 + c3
            if is_match(T, S):
                M.append(T)
print(len(M))
