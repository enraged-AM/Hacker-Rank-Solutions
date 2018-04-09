#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    long double negativeCounter = 0;
    long double positiveCounter = 0;
    long double zeroCounter = 0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        if(arr[arr_i]<0)
            negativeCounter = negativeCounter + 1;
        else if(arr[arr_i]>0)
            positiveCounter++;
        else
            zeroCounter++;
    }
    long double positiveRatio = positiveCounter/n;
    long double negativeRatio = negativeCounter/n;
    long double zeroRatio = zeroCounter/n;
    
    cout << positiveRatio << endl << negativeRatio << endl << zeroRatio;
    return 0;
}
