#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    for(int j = 0; j < n; j++) {
        for(int i = j; i < n-1; i++) {
            cout << " ";
        }
        for(int k = 0; k < j+1; k++) {
            cout << "#";
        }
        cout << "\n";
    }
    
    return 0;
}
