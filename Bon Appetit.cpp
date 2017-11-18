#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k;
    cin >> n >> k;
    int c[n];
    int totalcharged = 0;
    for(int i = 0; i < n; i++) {
        cin >> c[i];
        totalcharged += c[i];
    }
    totalcharged -= c[k];
    int charged;
    cin >> charged;
    if(totalcharged/2 == charged) {
        cout << "Bon Appetit" << "\n";
        return 0;
    }
    cout << charged - (totalcharged/2);
    
  
    
    
    return 0;
}
