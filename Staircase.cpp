#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    string stair = "#";
    string stair_space = " ";
    int array[n];
    cin >> n;
    for(int i = 1, k=n; i<=n && k>=0; i++, k--) {
        
            cout << string(k-1, ' ');
            cout << string(i, '#') << endl;
        
}
        
    return 0;
}
