#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum1 = 0;
    int arr[n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        sum1 += arr[i];
        sum1 -= arr[n-i-1];
    }
    cout << abs(sum1);
    return 0;
}
