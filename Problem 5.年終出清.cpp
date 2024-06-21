#include <iostream>
using namespace std;

int main(void)
{
	int n;
    cin>>n;
    if(n>=100)
        cout<<n*100*0.7<<endl;
    else if(n>=30)
        cout<<n*100*0.8<<endl;
    else if(n>=10)
        cout<<n*100*0.9<<endl;
    else
        cout<<n*100<<endl;
	
	
	return 0;
}
