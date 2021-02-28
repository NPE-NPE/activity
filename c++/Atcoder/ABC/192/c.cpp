#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string N;
  int K;
  cin >> N >> K;
 
  for (int i = 0; i < K; i++) {
    //各桁の数字小さい順
    sort(N.begin(), N.end());
    //string min = sort(N.begin(), N.end());と書くと
    //以下のエラーが出る
    //error: conversion from ‘void’ to non-scalar type ‘std::string’ {aka ‘std::__cxx11::basic_string<char>’} requested
    string min = N;
    //各桁の数字大きい順
    reverse(N.begin(), N.end());
    string max = N;
    //文字列から数値に変換
    int MAX = stoi(max);
    int MIN = stoi(min);
    //計算し、結果を文字列としてNに代入
    int f = MAX - MIN;
    N = to_string(f);
  }
  cout << N << endl;
}
