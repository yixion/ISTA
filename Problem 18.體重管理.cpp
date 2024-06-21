#include <iostream>
using namespace std;

int main(void)
{
	int n;
    cin>>n;
    if(n<18.5)
        cout<<"體重過輕"<<endl;
    else if(n<24)
        cout<<"體重正常"<<endl;
    else if(n<28)
        cout<<"體重過重"<<endl;
    else
        cout<<"肥胖"<<endl;
	
	
	return 0;
}
