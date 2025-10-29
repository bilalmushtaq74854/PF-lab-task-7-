#include<iostream>
using namespace std;
int main()
{
	int day;
	cout<<"enter a number:";
	cin>>day;
	switch(day){
		case 1:
			cout<<"monady";
			break;
		case 2:
			cout<<"tuesday";
			break;
		case 3:
			cout<<"wednesday";
			break;
		case 4:
			cout<<"thursday";
			break;
		case 5:
			cout<<"friday";
			break;
		default:
		   cout<<"weekend";
		   break;
			}
	return 0;
}
