#include <iostream>
using namespace std;

int main(void)
{
	int n;
    cin>>n;
    int output = n/100;
    cout<<"百元"<<output<<endl;
    n = n - 100 * output;
    output = n / 10;
    cout<<"十元"<<output<<endl;
    n = n - 10 * output;
    cout<<"壹元"<<n<<endl;
	
	return 0;
}
