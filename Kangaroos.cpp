#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    int n = 10000;
    int count = 0;
    int firstKangaroo [n];
    int secondKangaroo [n];
    firstKangaroo [0] = x1;
    secondKangaroo [0]= x2;
    
    for(int i=1; i<n; i++) {
        firstKangaroo[i] = firstKangaroo [0] + v1*i;
        secondKangaroo[i] = secondKangaroo [0] + v2*i;
        if(firstKangaroo [i] == secondKangaroo [i])
            count++;
    }
    if(count>0)
        cout << "YES";
    else
        cout << "NO";
    return " ";
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}
