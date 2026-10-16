#include<iostream>
using namespace std;

int main(){
	
	int number;
	int sum=0;
	
	//take imput from the user
	cout<<"enter a number:";
	cin>> number;
	
	while (number>=0){
		//add all positive numbers
		sum+=number;
		
		//take the imput again if the number is positive
		cout<<"enter a number:"<<endl;
		cin>>number;
		
	}
	//display the sum
	cout<<"\nThe sum is"<< sum<<endl;
	
	return 0;
}