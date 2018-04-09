#include <bits/stdc++.h>

using namespace std;

int main() {
    int counterFinal=0;
    int sum=0;
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;

    for(int i=0; i<n; i++) {
        for(int k=i; k<(i+m); k++)
            sum = sum+s[k];
        if(sum==d)
            counterFinal++;
        sum=0;
    }
        cout << counterFinal;

    return 0;
}