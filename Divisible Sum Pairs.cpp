#include <bits/stdc++.h>

using namespace std;

int main() {
    int count=0;
    int sum;
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    
    for(int i=0; i<n; i++) {
        for(int j=1; j<n; j++) {
            if(i<j) {
            sum = ar[i]+ar[j];
                if(sum%k==0)
                    count++;
            }
        }
    }
    cout << count;
    return 0;
}
