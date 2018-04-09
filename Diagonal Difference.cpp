#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int counterDiagonalRightSide = 0;
    int counterDiagonalLeftSide = 0;
    int sumDiagonals;
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0, i=n-1; a_i < n && i>=0; a_i++, i--){
       for(int a_j = 0; a_j < n; a_j++){
          cin >> a[a_i][a_j];
           if(a_i==a_j) {
    counterDiagonalRightSide = counterDiagonalRightSide + a[a_i][a_j];
           }
           
    }
      counterDiagonalLeftSide = counterDiagonalLeftSide + a[a_i][i];
    }
    sumDiagonals = counterDiagonalRightSide - counterDiagonalLeftSide;
    if(sumDiagonals<0)
        cout << -(sumDiagonals);
    else
        cout << sumDiagonals;
    
    
    return 0;
}
