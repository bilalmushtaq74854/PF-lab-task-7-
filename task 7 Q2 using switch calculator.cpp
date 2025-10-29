#include<iostream>
using namespace std;
int main()
{
	char bilal;
	int a,b;
	cout<<"enter operator:";
	cin>>bilal;
	cout<<"enter two numbers:";
	cin>>a>>b;
	switch(bilal){
		case '+':
			cout<<"result:"<<a+b;
			break;
		case'-':
			cout<<"result:"<<a-b;
			break;
		case'*':
			cout<<"result:"<<a-b;
			break;
		case'/':
			cout<<"result:"<<a/b;
			break;
		default:
			cout<<"invalid operater!";
	}
	return 0;
}
