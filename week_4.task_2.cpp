#include <iostream>
using namespace std;

int main(){
	double  AccountBal;
	double withdrawableAmnt;
	
	cout<<" enter AccountBal :";
	cin>>AccountBal;
	
	
	
	while(AccountBal>0){

	  
		cout<<"enter withdrawableAmnt:";
        cin>>withdrawableAmnt;
        
        if(withdrawableAmnt>AccountBal){
			cout<<"Insufficient balance:"<<endl;
			break;
		}
		if(withdrawableAmnt<=0){
			cout<<"enter a valid amount:"<<endl;
			continue;
		}
		AccountBal -=withdrawableAmnt;
		
		cout<<"remaining balance is :"<<AccountBal<<endl;
	}
	cout<<"\n account bal is:"<<AccountBal<<endl;
	
	return 0;
}