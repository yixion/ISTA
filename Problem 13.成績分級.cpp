#include <iostream>
using namespace std;

int main(void)
{
	int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        int grade;
        cin>>grade;
        if(grade<=100 && grade>=90){
            cout<<"優等"<<endl;
        }else if(grade<=89 && grade>=80){
            cout<<"甲等"<<endl;
        }else if(grade<=79 && grade>=70){
            cout<<"乙等"<<endl;
        }else if(grade<=69 && grade>=60){
            cout<<"丙等"<<endl;
        }else if(grade<=59){
            cout<<"不及格"<<endl;
        }
    }
	
	
	return 0;
}
