#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
    int n;
    cin>>n;
    stack<string>st;
    n++;
    vector<int>v;
    while(n--){
        string str;
        getline(cin,str);
        string s="";
        for(int i=0;i<str.length();i++){
            if((str[i]==' ' || str[i]==',' || str[i]=='.'||str[i]==';'||str[i]==':' )&& s!=""){
                st.push(s);
                s="";
            }
            else {
                s=s+str[i];
            }
        }
    }
    while(st.empty()==false){
        cout<<st.top()<<" ";
        st.pop();
    }
    
}
