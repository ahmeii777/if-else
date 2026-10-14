#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int age;
	
	cout<<"enter age"<<endl;
	cin>> age;
	
	if (age>=18){
		cout <<"eligible to vote"<<endl;
	} else{
		cout<<"not eligible to vote"<<endl;
	}
	return 0;
}
