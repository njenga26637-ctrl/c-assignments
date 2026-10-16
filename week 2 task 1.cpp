 #include<iostream>
using namespace std;

int main(){
    string student_name;
    int age;
    float exam_score;

    cout<<"enter student_name:";
    cin>>student_name;

    cout<<"enter age:";
    cin>>age;

    cout<<"enter exam_score:";
    cin>>exam_score;

    if(age>=18 && exam_score>=50)
    {
        cout<<"admitted\n";
    
    }
else
{
cout<<"not admitted\n";
}

cout<<"student_name:"<<student_name<<endl;
cout<<"age:"<<age<<endl;
cout<<"exam_score:"<<exam_score<<endl;


}