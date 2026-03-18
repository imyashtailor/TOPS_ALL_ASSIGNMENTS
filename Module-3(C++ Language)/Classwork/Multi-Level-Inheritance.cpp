//Multilevel-Inheritance in c++
#include<iostream>
using namespace std;

int i,j; //Global Declaration

class Country{
	public:
		int cid;
		char clist[2][20] = {"India","Australia"};
		
		void getCountry(){
			cout<<"\n===================Select Country====================\n";
			for(i=0;i<2;i++){
				cout<<"\n Press"<<i<<"for"<<" "<<clist[i]<<endl;
			}
			cout<<"\nSelect Country"<<endl;
			cin>>cid;
		}	
};

class State:public Country{
	public:
		int sid;
		char slist[4][20] = {"Gujarat","Maharashtra","Melbourne","Perth"};
		
		void getState(){
			cout<<"\n===================Select State====================\n";
			for(j=0;j<4;j++){
				cout<<"\n Press"<<j<<"for"<<" "<<slist[j]<<endl;
			}
			cout<<"\nSelect State"<<endl;
			cin>>sid;
		}	
};

class City:public State{
	public:
		int cityid;
		char address[100];
		char citylist[2][30] = {"Bilimora","Surat"};
		
		void getFullAddress(){
			cout<<"\n===================Select City====================\n";
			for(j=0;j<2;j++){
				cout<<"\n Press"<<j<<"for"<<" "<<citylist[j]<<endl;
			}
			cout<<"\nSelect City"<<endl;
			cin>>cityid;
			
			cout<<"Enter the Address = "<<endl;
			cin.ignore();
			cin.getline(address,100);
		}
		
		void showaddress(){
			cout<<"\nCountry = "<<clist[cid]<<endl;
			cout<<"\nState = "<<slist[sid]<<endl;
			cout<<"\nCity = "<<citylist[cityid]<<endl;
			cout<<"\nAddress = "<<address<<endl;
		}	
};

int main()
{
	City c1;
	c1.getCountry();
	c1.getState();
	c1.getFullAddress();
	c1.showaddress();
	
	return 0;
}