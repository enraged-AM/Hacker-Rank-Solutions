#include <bits/stdc++.h>

using namespace std;


int main() {
    int counter=0;
    int BetweenCount=0;
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int MaxVal;
    int MaxValA = 1;
    int MaxValB = 1;
    
    for(int i=0, k=0; i<n || k<m; i++, k++) {
        if(a[i]>MaxValA)
            MaxValA=a[i];
        if(b[k]>MaxValB)
            MaxValB=b[k];
    }
    if(MaxValB>MaxValA)
        MaxVal=MaxValB;
    else if(MaxValA>MaxValB)
        MaxVal = MaxValA;
    else if(MaxValA=MaxValB)
        MaxVal = MaxValA;
    

    for(int i=1; i<=MaxVal; i++) {
           int count=0;
        for(int k=0; k<n; k++)
           count = count+i%a[k];
        for(int r=0; r<m; r++)
           count = count+b[r]%i;
        if(count==0)
            BetweenCount++;
    }

    cout << BetweenCount;
    return 0;
}
