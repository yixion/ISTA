#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int main(void)
{
    int res = 0;
    int n;
    cin>>n;
    int i=3;
    cout<<2;
    res += 2;
    int count = 1;
    while(count != n){
        if(isPrime(i)){
            cout<<","<<i;
            res += i;
            count += 1;
        }
        i += 1;
    }
	cout<<endl;
    cout<<res<<endl;
	
	return 0;
}
