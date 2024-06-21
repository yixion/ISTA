#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int n;
    cin>>n;
    int re = n;
    int a = n / 100;
    n = n - a*100;
    int b = n/10;
    n = n - b*10;
    if(re == pow(a, 3) + pow(b, 3) + pow(n, 3)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
	
	return 0;
}
