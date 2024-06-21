#include <iostream>
using namespace std;

int main(void)
{
	int n;
    cin>>n;
    int max;
    cin>>max;
    for(int i=1; i<n; i++){
        int input;
        cin>>input;
        if(input>max){
            max = input;
        }
    }
    cout<<max;
	
	
	return 0;
}
