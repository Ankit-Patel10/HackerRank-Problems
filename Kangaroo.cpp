#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x,v,x2,v2;
    cin >> x >> v >> x2 >> v2;
    for(int i = 0; i < 10000; i++) {
        if(x+(v*i) == x2+(v2*i)) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
