#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int grades[n];
    for(int i = 0; i < n; i++) {
        cin >> grades[i];
        if(grades[i] < 38) {
            cout << grades[i] << "\n";
        }
        else if(grades[i] % 5 <= 2) {
            cout << grades[i] << "\n";
    }
        else{
            grades[i] = ceil(grades[i]/5);
            cout << (grades[i]+1)*5 << "\n";
        }
    }
    return 0;
}
