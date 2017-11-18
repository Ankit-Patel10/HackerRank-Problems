#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int scores[n];
    int max;
    int min;
    int maxtimes = 0;
    int mintimes = 0;
    for(int i = 0; i < n; i++) {
        cin >> scores[i];
        if(i == 0) {
        max = scores[0];
        min = scores[0];
        }
        if(scores[i] > max) {
            maxtimes++;
            max = scores[i];
        }
        else if(scores[i] < min) {
            mintimes++;
            min = scores[i];
        }
        
    }
    cout << maxtimes << " " << mintimes;
    return 0;
}
