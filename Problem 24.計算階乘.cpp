#include <iostream>
using namespace std;

int main(void)
{
	int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int input;
        cin>>input;
        int output = 1;
        for(int j= 1; j<=input; j++){
            output = output * j;
        }
        cout<<output<<endl;
    }
	
	
	return 0;
}
