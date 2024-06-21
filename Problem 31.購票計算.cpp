#include <iostream>
using namespace std;

int main(void)
{
	int input;
    cin>>input;
    int a = 0;
    while((input - a * 10) >= 0){
        a += 1;
    }
	a -= 1;
    cout<<"NT10="<<a<<endl;
    input -= a*10;
    a = 0;
    while((input - a * 5) >= 0){
        a += 1;
    }
	a -= 1;
    cout<<"NT5="<<a<<endl;
    input -= a*5;
	cout<<"NT1="<<input<<endl;
	return 0;
}