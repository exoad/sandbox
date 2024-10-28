#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	int wid=0;
	float bal=0;
	cin>>wid>>bal;
	if((wid%5==0) && (wid+0.50)<=bal)
	{
	    cout<<fixed<<setprecision(2)<<float(bal-wid-0.50)<<endl;
	}
	else
	{
	     cout<<fixed<<setprecision(2)<<double(bal);
	}
	return 0;
}
