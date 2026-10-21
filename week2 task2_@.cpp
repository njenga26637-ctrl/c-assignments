#include<iostream>
using namespace std;
 int main(){
	 string student_name;
	 int age;
	 float exam_score;
	 
	 cout<<"enter student_name:"<<endl;
	 cin>>student_name;
	 
	 cout<<"enter age:"<<endl;
	 cin>>age;
	 
	 cout<<"enter exam_score";
	 cin>>exam_score;
	 
	 //using nested if statements
	 if(age>=18){
		 
		 	//inner if condition
	    if(exam_score>=50){
			cout << "Admitted"<<endl;
		}
		else{
			cout << "Not admitted:Low score"<<endl;
		}
	 }
	 else{
		 cout << "Not admitted:Underage"<<endl;
	 }
	 	//display results
	 	cout<<"student_name:"<<student_name<<endl;
	 	cout<<"age:"<<age<<endl;
	 	cout<<"exam_score:"<<exam_score<<endl;
	 	
	 	
	 	return 0;
	 
 }