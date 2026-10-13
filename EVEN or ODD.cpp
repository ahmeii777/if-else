#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num;
	
	cout<<"enter num"<<endl;
	cin>>num;
	
	if(num%2== 0){
		cout<<"even number"<<endl;
	}else{
		cout<<"odd number"<<endl;
	}
	return 0;
}
