#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a+0, a+3);
    string s;
    cin>>s;
	if(s == "Asc"){
        cout<<a[0]<<"<"<<a[1]<<"<"<<a[2]<<endl;
    }else{
        cout<<a[2]<<"<"<<a[1]<<"<"<<a[0]<<endl;  
    }
	
	return 0;
}
