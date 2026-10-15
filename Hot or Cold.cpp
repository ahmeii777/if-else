#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float temp;
	cout<<"enter temperature";
	cin>> temp;
	
	if(temp > 30)
	cout<<"result hot"<<endl;
	else
	cout<<"result cold"<<endl;
	return 0;
}
