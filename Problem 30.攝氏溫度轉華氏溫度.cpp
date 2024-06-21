#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	float n;
    cin>>n;
    n = n * (9.0/5.0) +32;
    cout.setf(ios::fixed);
    cout.precision(1);
    cout<<n<<endl;
	
	
	return 0;
}
