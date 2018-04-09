#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }

    for(int i=0; i<n; i++) {
        for(int p=1; p<=21; p++) {
            if(grades[i]<5*p && grades[i]>=38) {
                if(5*p - grades[i]<3)
                    cout << 5*p << endl;
                else
                    cout << grades[i] << endl;
                break;
            }
            else if(grades[i]<38) {
                cout << grades[i] << endl;
                break;
            }
        }
    }

    return 0;
}
