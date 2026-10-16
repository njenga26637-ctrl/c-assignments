#include<iostream>
using namespace std;

int main(){
	 
	 string customer_name;
	 string model;
	 int quantity;
	 float price ;
	 double total_sales;
	 

	 cout<<"enter customer_name:"<<endl;
	 cin>>customer_name;
	 
	 cout<<"enter model:"<<endl;
	 cin>>model;
	 
	 cout<<"enter quantity:"<<endl;
	 cin>>quantity;
	 
	 cout<<"enter price:"<<endl;
	 cin>>price;
	  
	  //calculate total sales
	  total_sales =quantity*price;
	  
	  cout<<"VINNY_EMPORIUM_PHONES:"<<endl;
	  cout<<"customer_name:"<<customer_name<<endl;
	  cout<<"model:"<<model<<endl;
	  cout<<"quantity:"<<quantity<<endl;
	  cout<<"price:"<<price<<endl;
	  cout<<"total_sales:"<<total_sales<<endl;
	  
	  return 0;
	  
}