#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int s, t;
    cin >> s >> t;
    int a, b;
    cin >> a >> b;
    int m, n;
    cin >> m >> n;
    int ad[m];
    int applecounter = 0;
    int orangecounter = 0;
    for(int i = 0; i < m; i++) {
        cin >> ad[i];
        if(a+ad[i] >= s && a+ad[i] <= t) {
            applecounter++;
        }
    }
    int od[n];
    for(int i = 0; i < n; i++) {
        cin >> od[i];
        if(b+od[i] >= s && b+od[i] <= t){
            orangecounter++;
        }
    }
    cout << applecounter << "\n";
    cout << orangecounter;

    return 0;
}
