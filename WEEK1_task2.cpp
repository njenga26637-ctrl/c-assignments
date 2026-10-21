#include<iostream>
using namespace std;

int main(){
	 
	 string student_name;
	 float theory_marks;
	 float practical_marks;
	 double average_score;
	 
	 cout<<"enter student_name:"<<endl;
	 cin>>student_name;
	 
	 cout<<"enter theory_marks:"<<endl;
	 cin>>theory_marks;
	 
	 cout<<"enter practical_marks:"<<endl;
	 cin>>practical_marks;
	 
	 //calculate average score
	 average_score =(practical_marks + theory_marks)/2;
	 
	 //display results
	 
	 cout<<"DRIVING _TEST_RESULTS"<<endl;
	 cout<<"student_name:"<<student_name<<endl;
	 cout<<"theory_marks:"<<theory_marks<<endl;
	 cout<<"practical_marks:"<<practical_marks<<endl;
	 cout<<"average_score:"<<average_score<<endl;
	 
	 //determine pass or fail
	 if(average_score>=50){
		 cout<<"results:passed"<<endl;
	 }
	 else
	 {
		 cout<<"results:failed"<<endl;
	 }
	 
	 
	 return 0;
	  
}