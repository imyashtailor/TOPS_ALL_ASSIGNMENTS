//destructor using below program
#include<iostream>
using namespace std;

class simpleinterest{
	public:
		int p,n,r;
		
		//default constructor
		simpleinterest(){
			cout<<"Enter the Principle = ";
			cin>>p;
			
			cout<<"Enter the No. of Year = ";
			cin>>n;
			
			cout<<"Enter the Rate = ";
			cin>>r;
		}
		
		//desturctor
		~simpleinterest(){
			cout<<"\n Destructor Automatically called";
		}
		
		void findinterest(){
			float interest = (p*n*r)/100;
			cout<<"\n Simple Interest = "<<interest;
		}
};

int main()
{
	simpleinterest s1;
	s1.findinterest();
	return 0;
}