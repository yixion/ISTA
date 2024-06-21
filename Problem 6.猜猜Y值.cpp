#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int X;
        cin>>X;
        if(X>= 50 && X<=70){
            cout<<X<<endl;
        }else{
            cout<<100<<endl;
        }
    }
    return 0;
}
