#include <iostream>
using namespace std;

int main(void)
{
	int N;
    cin>>N;
    int output = N / (60 * 60 * 24);
    cout<<output<<" days"<<endl;
    N = N - output * (60 * 60 * 24);
    output = N / (60 * 60);
    cout<<output<<" hours"<<endl;
    N = N - output * (60 * 60);
    output = N / (60);
    cout<<output<<" minutes"<<endl;
    N = N - output * (60);
    cout<<N<<" seconds"<<endl;
	
	
	return 0;
}
