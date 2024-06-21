#include <iostream>
using namespace std;

int main(){
    int a, b, temp;
    cin >> a >> b;
    // (a, b) = (b, r)
    while(b != 0){
        temp = b;
        b = a % b;
        a = temp;
    }
    cout << a << '\n';
}