#include<iostream>
using namespace std;
class account{
	public:
		long long accno;
		string name;
		double balance=0;
		void create(){
			cout<<"Enter the account number:";
			cin>>accno;
			cout<<"Enter the name:";
			cin>>name;
		}
		void deposit(){
			double amt;
			cout<<"Enter the amount to deposit:";
			cin>>amt;
			balance=balance+amt;
			cout<<"Amount Deposited Successfully.\n";
		}
		void withdraw(){
			double amt;
			cout<<"Enter the amount to withdraw:";
			cin>>amt;
			if(amt>balance)
				cout<<"Insufficient Balance.";
			else{
				balance=balance-amt;
				cout<<"Amount withdrawed successfully.\n";
			}
		}
		void display(){
			cout<<"\n-----Account Details-----\n";
			cout<<"* Account Number: "<<accno<<endl;
			cout<<"* Name: "<<name<<endl;
			cout<<"* Balance: "<<balance<<endl;
		}
};
int main(){
	account a;
	int choice;
	a.create();
	do{
		cout<<"\n-----Bank Menu-----\n";
		cout<<"1.Deposit\n";
		cout<<"2.Withdraw\n";
		cout<<"3.Account Details\n";
		cout<<"4.Exit\n";
		cout<<"Enter your choice:";
		cin>>choice;
		switch(choice){
			case 1:
				a.deposit();
				break;
			case 2:
				a.withdraw();
				break;
			case 3:
				a.display();
				break;
			case 4:
				cout<<"Thank you!!!\n";
				break;
			default:
				cout<<"Invalid choice.\n";
		}
	}while(choice!=4);
	return 0;
}
