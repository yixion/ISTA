#include <iostream>
using namespace std;

int main(void)
{
	int n;
    cin>>n;
    if(n>=3 && n <= 5)
        cout<<"Spring"<<endl;
    else if(n>=6 && n<=8)
        cout<<"Summer"<<endl;
    else if(n>=9 && n<=11)
        cout<<"Autumn"<<endl;
    else if(n==12 || n<=2)
        cout<<"Winter"<<endl;
	
	return 0;
}
