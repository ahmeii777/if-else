#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int marks;
	
	cout<<"Enter marks:";
	cin>>marks;
	
	if (marks>=50) {
		cout<<"result pass"<<endl;
	    }else{
			cout<<"result fail"<<endl;
		}
		return 0;
	}
