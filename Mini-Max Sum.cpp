#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> arr(5);
    long long int countArray [5];
    long long int countArray_Final [5];
    long long int totalCountFinal;
    long long int totalCount = 0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
       totalCount = totalCount + arr[arr_i];
       countArray[arr_i] = arr[arr_i];
    }
    for(int i = 0; i<5; i++) {
        totalCountFinal = totalCount - countArray[i];
        countArray_Final[i] = totalCountFinal;
    }
    
    long long int MaxVal = 0;
    long long int MinVal = countArray_Final[0];
    
    for(int i = 0; i<5; i++) {
        if(countArray_Final[i]>MaxVal)
            MaxVal = countArray_Final[i];
        if(countArray_Final[i]<MinVal)
            MinVal = countArray_Final[i];
    }
    
    cout << MinVal << " " << MaxVal;
    return 0;
}
