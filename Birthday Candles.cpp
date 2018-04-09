#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    int MaxVal=1;
    int count=0;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
        if(ar[ar_i]>=MaxVal)
            MaxVal = ar[ar_i];
    }
        for(int i=0; i<n;i++) {
            if(ar[i]==MaxVal)
                count=count+1;
        }
    cout << count << endl;
    return 0;
}