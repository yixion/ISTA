#include <iostream>
using namespace std;

int main(void)
{
	int n;
    cin>>n;
    if(n<0){
        cout<<"負數"<<endl;
    }else if(n == 0){
        cout<<0<<endl;
    }else{
        cout<<"正數"<<endl;
    }
	
	
	return 0;
}
