#include <iostream>
using namespace std;
bool pres(char *a, char x, int n){
    for (int i = 0; i < n; i++){
        if (*(a + i) == x)
            return true;
    }
    return false;
}
bool fun(int n, char *a){
    char stat = *a;
    for (int i = 1; i < n; i++){
        if (*(a + i) == stat)
            continue;
        else {
            if (pres(a, *(a + i), i))
                return false;
            else
                stat = *(a + i);
        }
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    for (int z = 0; z < t; z++){
        int n;
        cin >> n;
        char arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if (fun(n, arr))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
