#include<iostream>
using namespace std;
void getEmployeeDetail(string &employee_name, double &basic_salary, double &overtime_hours){
	cout<<"enter employeename :";
	cin>>employee_name;
	
	cout<<"enter basic salary:";
	cin>>basic_salary;
	
	cout<<"enter overtimehours:";
	cin>>overtime_hours;
	
}
double calculateovertimepay(double overtime_hours){
	double overtimepay=overtime_hours*70;
	
	return overtimepay;
}
double calculateNetsalary(double basic_salary, double overtimepay){
	double Netsalary= basic_salary+overtimepay;
	
	return Netsalary;
}
void displayPayslip(string employee_name,double basic_salary,double overtime_hours,double Net_salary,double overtimepay){
	
	cout<<"\n===========PAYSLIP===========:"<<endlssa;
	cout<<"Employees name:"<<employee_name<<endl;
	cout<<"basic salary:Ksh"<<basic_salary<<endl;
	cout<<"overtime_hours:"<<overtime_hours<<endl;
	cout<<"overtimepay:"<<overtimepay<<endl;
	cout<<"Net salary:Ksh"<<Net_salary<<endl;
	cout<<"=========================="<<endl;
}
int main(){
	string employee_name;
	double basic_salary,overtime_hours,Net_salary,overtimepay;
	
	getEmployeeDetail(employee_name,basic_salary,overtime_hours);
	
	overtimepay= calculateovertimepay(overtime_hours);
	
	Net_salary= calculateNetsalary(basic_salary,overtimepay);
	
	displayPayslip(employee_name,basic_salary,overtime_hours,Net_salary, overtimepay);
	
	
	
	return 0;
}