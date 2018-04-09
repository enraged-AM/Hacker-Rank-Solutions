#include <bits/stdc++.h>

using namespace std;

//vector < int > getRecord(vector < int > s){
    // Complete this function
//}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    //vector < int > result = getRecord(s);
 //   string separator = "", delimiter = " ";
   //// for(auto val: result) {
    //    cout<<separator<<val;
        //separator = delimiter;
   // }
    int maxCount = 0;
    int minCount = 0;
    
    int MaxVal = s[0];
    int MinVal = s[0];
    
    for(int i=1; i<n; i++) {
        if(s[i]>MaxVal) {
            MaxVal=s[i];
            maxCount++;
        }
        if(s[i]<MinVal) {
            MinVal=s[i];
            minCount++;
        }
        
    }
    cout << maxCount << " " << minCount;
    return 0;
}
