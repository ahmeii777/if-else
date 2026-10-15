#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num;
	cout<<"enter num";
	cin>> num;
	if(num%5==0)
	cout<<"result:divisible by 5"<<endl;
	else
	cout<<"result:not divisible by 5"<<endl;
	return 0;
}
