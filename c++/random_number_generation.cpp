#include <iostream>

using namespace std;

int main(){
        rondom_device seed_gen;
        mt19937 engine{seed_gen()};
        uniform_int_distribution<> dist{0,99};//0~99の乱数生成

        const int no = dist(engine);//秘密（にされた）の整数 = 生成された一つだけの乱数
        //constant 定数　xでなくnoを入力（一つの乱数として設定したnoの書き換え）を防ぐためにconst使用
        int x;
        //以下、ユーザーから秘密にした状態で整数を入力させる
