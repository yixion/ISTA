#include <iostream>
using namespace std;

int main(void)
{
	int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        if(t<=60){
            if(t>37){
                cout<<"避免外出"<<endl;
            }else{
                cout<<"可依需要待在戶外"<<endl;
            }
        }else{
            if(t>150){
                cout<<"避免外出"<<endl;
            }else{
                cout<<"可依需要待在戶外"<<endl;
            }
        }
    }
	
	return 0;
}
