#include<iostream>
using namespace std;
//function prototype

void employeedetail();
float calculateovertimepay(float overtime_hour, float rateperhours);
float calculatenetsalary(float basic_salary, float overtimepay);
void displaypayslip(string employee_name,float basic_salary,float overtime_hours, float rateperhours,float netsalary,float overtimepay);

int main(){
float overtime,rate,bsalary,overpay,nsalary;
string employee_name;	

	employeedetail();
	//&
	/*
	displaypayslip(employee_name,bsalary,overtime,
	rate,nsalary,overpay);
	*/
	return 0;
}
void employeedetail(){
	string employee_name;
	float basic_salary, overtime_hours;
	
	cout<<"enter employee_name:";
	cin>>employee_name;
	
	cout<<"enter basic_salary:";
	cin>>basic_salary;
	
	 cout<<"enter overtime_hours:";
	 cin>>overtime_hours;
	 
	 
	
}
float calculateovertimepay(float overtime_hours, float rateperhours){
	
float overtimepay =overtime_hours * rateperhours;

return overtimepay;

}
float calculatenetsalary(float basic_salary, float overtimepay){

       float netsalary= basic_salary+ overtimepay;
       
return netsalary;
}
void displaypayslip(string employee_name,float basic_salary,float overtime_hours, float rateperhours,float netsalary,float overtimepay){

 cout<<"========PAYSLIP======="<<endl;
 cout<<"======================"<<endl;
 cout<<"employee_name:"<<employee_name<<endl;
 cout<<"basic_salary:"<<basic_salary<<endl;
 cout<<"overtime_hours:"<<overtime_hours<<endl;
 cout<<"rateperhours:"<<rateperhours<<endl;
 cout<<"netsalary:"<<netsalary<<endl;
 cout<<"overtimepay:"<<overtimepay<<endl;
 cout<<"=========================="<<endl;

}