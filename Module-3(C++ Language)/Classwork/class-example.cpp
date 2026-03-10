//class and object exampple
#include<iostream>
using namespace std;

class User{
	
	public:
	//data member
	
	char name[20];
	char email[30];
	int contact;
	
	//member function
	void getUserInfo(){
		cout<<"\nEnter the Name Email and Contact = ";
		cin>>contact>>name>>email;
	}
	
	void showUserInfo(){
		cout<<"\n Name = "<<name;
		cout<<"\n Emial = "<<email;
		cout<<"\n Contact = "<<contact;
	}
};
int main(){
	User u1;
	u1.getUserInfo();
	u1.showUserInfo();
	return 0;
}