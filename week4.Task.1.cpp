#include <iostream>
using namespace std;
int main(){
	string employee_name;
	double basic_salary,bonus,totalsalary;
	
	for(int i=1;i<=5;i++){
		cout<<"\n REPORT FOR EMPLOYEE:"<<i<<endl;
		
		cout<<"enter employee_name:"<<i<<":";
		cin>>employee_name;
		
		cout<<"enter basic salary:";
		cin>>basic_salary;
		
		
			//calculate bonus
			bonus=0.05*basic_salary;
			
			//calculate totalsalary
	      totalsalary =basic_salary+bonus;
	      
	      cout<< "bonus is:"<< bonus<<endl;
	      cout<<"totalsalary:"<<totalsalary<<endl;
	}
		
	
	
	
	return 0;
}