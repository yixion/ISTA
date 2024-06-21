#include <iostream>
using namespace std;

int main(void)
{
	int n;
    cin>>n;
    if(n%4 == 0 && n%100==0)
        cout<<"Common Year"<<endl;
    else if(n%4 == 0)
        cout<<"Bissextile"<<endl;
    else
        cout<<"Common Year"<<endl;
	
	
	return 0;
}
