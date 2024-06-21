#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void)
{
	int a[3];
    for(int i=0; i<3; i++){
        cin>>a[i];
    }
    sort(a, a+3);
    if(a[2] < a[1] + a[0])
        cout<<"Not Triangle"<<endl;
    else if(pow(a[2],2)==pow(a[1],2) + pow(a[0],2))
        cout<<"Right Triangle"<<endl;
    else if(pow(a[2],2) > pow(a[1],2) + pow(a[0],2))
        cout<<"Acute Triangle"<<endl;
    else if(pow(a[2],2) < pow(a[1],2) + pow(a[0],2))
        cout<<"Obtuse Triangle"<<endl;
	
	
	return 0;
}
