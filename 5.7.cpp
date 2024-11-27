#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,max,min;
	cout<<"Enter the numbers:";
	cin>>a>>b>>c>>d>>e;
	min=max=a;
	if (b<min){
	min=b;
	}
	if (c<min){
	min=c;
	}
	else if (d<min){
	min=d;
	}
	else if (e<min){
	min=e;
	}
	else if (b>min){
	max=b;
	}
		else if (c>min){
	max=c;
	}
		else if (d>min){
	max=d;
	}
		else if (e>min){
	max=e;
	}
	
	cout<<"Largest number : "<<max<<"\n";
	cout<<"Minimum number: "<<min;
}
