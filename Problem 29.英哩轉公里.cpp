#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	int n;
    cin>>n;
    cout.setf(ios::fixed);
    cout.precision(1);
    double res = n * 1.6;
    cout<<"km="<<res<<endl;
	
	
	return 0;
}
