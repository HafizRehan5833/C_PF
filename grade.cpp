#include<iostream>
using namespace std;
int main(){
	int num;
	
	cout<<"Enter the number : ";
	cin>>num;
	
	if (num>=90){
		cout<<"Your Grade is A.";
		
	}
	
	else if (num>=80){
		cout<<"Your Grade is B.";
	}
		else if (num >=70	){
		cout<<"Your Grade is C.";
	}
		else if (num>=60){
		cout<<"Your Grade is D.";
	}
		else if (num>=50){
		cout<<"Your Grade is E.";
	}
	else{
		cout<<"You Grade is F.You need to improve it...";
		
	}
}
