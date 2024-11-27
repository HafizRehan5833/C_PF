#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int choice,radius;
	float area,circum;
	cout<<"Enter the choice 1or2: ";
	cin>>choice;
	cout<<"Enter radius: ";
	cin>>radius;
	
	if (choice==1){
		area=3.14*radius*radius;
		cout<<"Your area is: "<<area;
		
	}
	else{
		circum=2*3.14*radius;
		cout<<"Your circumference is: "<<circum;
	
	}
}
