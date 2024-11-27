#include<iostream>
using namespace std;
int main(){
	float salary,bonus;
	int grade;
	cout<<"Enter your salary:";
	cin>>salary;
	cout<<"Enter the grade:";
	cin>>grade;
	
	if (grade>15){
		bonus=salary*50/100;
	}
	else{
		bonus=salary*25/100;
	}
	
	salary=bonus+salary;
	
	cout<<"Your salary after bonus: ";
	cin>>salary;
	
}
	
