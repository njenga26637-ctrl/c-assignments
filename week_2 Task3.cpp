#include <iostream>
using namespace std;

int main(){
	double num1,num2;
	char op;
	
	cout<<"=====SIMPLE CALCULATOR===="<<endl;
	
	
	cout<<"enter the first number:";
	cin>>num1;
	
	cout<<"enter the second number:";
	cin>>num2;
	
	cout<<"enter an operator(+,-,*,/):";
	cin>>op;
	
	switch (op)
	{
		case '+':
			cout<<"Result="<<num1+num2;
			break;
		
		case '-':
			cout<<"Result="<<num1-num2;
			break;
		
		case '*':
			cout<<"Result="<<num1* num2;
			break;
		
		case'/':
			if (num2!=0)
				cout<<"Result=:"<<num1 /num2;
			
			else
			
			cout<<"Error :cannot devide by zero!";
		
            break;
        
			
		default:
			cout<<"invalid input:";
			

	}
	
	cout<<"\nCalculation completed successfully:"<<endl;
	
	return 0;
}