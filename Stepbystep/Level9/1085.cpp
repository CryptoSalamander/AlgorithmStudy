//
// Created by HHS on 2020-02-16.
//
#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
int main() {
    int x,y,w,h;
    int tmp1,tmp2;
    cin >> x >> y >> w >> h;
    tmp1 = min(x,y);
    tmp2 = min(w-x,h-y);
    cout << min(tmp1,tmp2);
}
