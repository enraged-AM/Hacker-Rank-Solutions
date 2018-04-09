#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    string arrayTime, timeChanger, numberCheck, timeChangerPM, arrayTimeAM;
    arrayTime = s;
    arrayTimeAM = s;
    arrayTimeAM = arrayTimeAM.erase(8,2);
    timeChanger = s;
    timeChanger = timeChanger.erase(0, 2);
    timeChanger = timeChanger.erase(6, 2);
    numberCheck = arrayTime[1];
    int value = atoi(numberCheck.c_str());
    
    if(arrayTime[8]=='P' && arrayTime[9]=='M') {
        if(arrayTime[0]=='0') {
                for(int i=12; i<=21; i++) {
                    if(i%12==value)
                        cout << i << timeChanger;
    }
    }
        if(arrayTime[0]=='1' && arrayTime[1]=='0')
            cout << "22" << timeChanger;
        if(arrayTime[0]=='1' && arrayTime[1]=='1')
            cout << "23" << timeChanger;
        if(arrayTime[0]=='1' && arrayTime[1]=='2')
            cout << "12" << timeChanger;
    }
    if(arrayTime[8]=='A' && arrayTime[9]=='M')
    {
        if(arrayTime[0]=='1' && arrayTime[1]=='2')
            cout << "00" << timeChanger;
        else
            cout << arrayTimeAM;
            
        
    }
   
    return 0;
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}
