#include<bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int score;
        cin >> score;
        if(score >= 2000)
            cout << "1" << '\n';
        else if(score < 2000 && score >= 1600)
            cout << "2" << '\n';
        else
            cout << "3" << '\n';
    }
}
