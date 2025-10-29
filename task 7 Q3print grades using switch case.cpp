#include<iostream>
using namespace std;
int main(){
     int marks;
     cout<<"enter your marks";
     cin>>marks;
        switch(marks/10){
        	case 9:
        		cout<<"Grade A";
        		break;
        	case 8:
        		cout<<"grade B";
        		break;
        	case 7:
        		cout<<"grade C";
        		break;
        	case 6:
        		cout<<"grade D";
        		break;
        	case 5:
        		cout<<"grade E";
        		break;
        	case 4:
        		cout<<"grade F";
        		break;
        	default :
        		cout<<"very poor";
        }
        return 0;
    }

	

