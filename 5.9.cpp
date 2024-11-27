#include<iostream>
using namespace std;
int main(){
	int year;
	
	cout<<"Enter a year: ";
	cin>>year;
	
	if (year%4==0){
		cout<<"Your year is leap year..";
	}
	else{
		cout<<"Your year is not leap year..";
	}

}
