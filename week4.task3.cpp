#include <iostream>
using namespace std;

int main(){
string correctusername="peter";
string correctpassword="2000";

string username,password;

do{
	cout<<"enter username:";
	cin>>username;
	
	cout<<"enter password:";
	cin>>password;
	
	//check credentials
	if(username == correctusername && password == correctpassword){
		cout<<"access granted:"<<endl;
		
	}
	else{
		cout<<"incorrect credentials,try again."<<endl;
	}
	
}
while(username!=correctusername ||password!=correctpassword);

	return 0;
}