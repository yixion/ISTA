#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int n;
    cin>>n;
    int a[n];
    int count = 0;
    int count2 = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]>=900)
            count++;
        else if(a[i]>600 && a[i]<=700)
            count2++;
    }
	sort(a, a+n);
    cout<<a[n-1]<<endl;
    cout<<count<<endl;
    cout<<count2<<endl;
    cout<<a[0]<<endl;
    
	
	return 0;
}
