/*
	Class for Bank Account
	Aim :- Create a class BankAccount with data members like balance and member functions like deposit and withdraw. 
	Implement encapsulation by keeping the data members private. 
*/
#include<iostream>
using namespace std;

class BankAccount{
	private:
		double balance;
	
	public:
		BankAccount(double b){
			balance = b;
		}
	
	//creating a two functions
	void deposit(double amount){
		balance += amount;
		cout<<"Deposited Value = "<<amount<<endl;
	}
	
	void withdraw(double amount){
		if(amount > balance){
			cout<<"Insufficient Balance!...";
		}else{
			balance -= amount;
			cout<<"Withdraw Value = "<<amount<<endl;
		}
	}
	
	//creating to show balance function
	void showbalance(){
		cout<<"Current Balance = "<<balance<<endl;
	}
};

int main()
{
	double initialBalance,depositamount,withdrawamount;
	
	cout<<"Enter the Initial Balance = ";
	cin>>initialBalance;
	BankAccount account(initialBalance);
	
	account.showbalance();
	
	cout<<endl;
	cout<<"Enter the Deposit Value = ";
	cin>>depositamount;
	account.deposit(depositamount);
	
	cout<<"Enter the Withdraw Value = ";
	cin>>withdrawamount;
	account.withdraw(withdrawamount);
	
	cout<<endl;
	account.showbalance();
	return 0;
}