#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int a[3];
    for(int i=0; i<3; i++){
        cin>>a[i];
    }
    sort(a, a+3);
    if(a[2]> a[1] + a[0]){
        cout<<"fit"<<endl;
    }else
        cout<<"unfit"<<endl;

	
	
	return 0;
}
