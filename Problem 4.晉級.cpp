#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int n;
    cin>>n;
    int count = 0;
    for(int i=0; i<n; i++){
        string s;
        int score;
        cin>>s>>score;
        if(score >= 60){
            cout<<s<<endl;
            count += 1;
        }
    }
	if(count>n/2){
        cout<<"晉級"<<endl;
    }
	
	return 0;
}
