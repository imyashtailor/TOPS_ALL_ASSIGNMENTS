//class and object exampple
#include<iostream>
using namespace std;

class Product{
	
	public:
	//data member
	
	int pid;
	char name[20];
	int price;
	string description;
	
	//member function
	void getProductInfo(){
		cout<<"\nEnter the Pid name price description = ";
		cin>>pid>>name>>price>>description;
	}
	
	void showProductInfo(){
		cout<<"\n Pid = "<<pid;
		cout<<"\n Name = "<<name;
		cout<<"\n Price = "<<price;
		cout<<"\n description = "<<description;
	}
};
int main(){
	Product p1;
	p1.getProductInfo();
	p1.showProductInfo();
	return 0;
}