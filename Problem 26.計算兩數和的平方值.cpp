#include <iostream>
using namespace std;

int main(void)
{
	int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int a, b, sum;
        cin>>a>>b;
        sum = a + b;
        cout<<sum*sum<<endl;
    }
	
	
	return 0;
}
