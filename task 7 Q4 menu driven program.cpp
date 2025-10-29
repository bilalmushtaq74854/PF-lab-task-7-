#include<iostream>
using namespace std;
int main()
{
	int num1,num2,choice;
	cout<<"enter two numbers:";
	cin>>num1>>num2;
	cout<<"menu"<<endl;
	cout<<"press 1 to add"<<endl;
	cout<<"press 2 to subtract"<<endl;
	cout<<"press 3 to exit"<<endl;
	cout<<"enter your choice(1-3):";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"result(addition)="<<num1+num2;
			break;
		case 2:
			cout<<"result(subtraction)="<<num1-num2;
			break;
		case 3:
			cout<<"exiting program....";
			break;
		default:
			cout<<"invalid choice!please select 1,2 and 3";
	}
	return 0;
}
