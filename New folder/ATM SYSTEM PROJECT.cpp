#include<iostream>
#include<stdlib.h>
//c++ program to implement the ATM
// Management system
#include<string.h>
using namespace std;
class Bank{
	// private variable used inside
	private:
		string name;
		int accnumber;
		char type[10];
	    int amount;
		int tot=0;
		// public variables
	public:
		// function to set the person's data
		void setvalue()
		{
			cout<<"Enter Name:\n";
			cin.ignore();
			// to use space in string
			getline(cin,name);
			cout<<"Enter account number:"<<endl;
			cin>>accnumber;
			cout<<"Enter account type:"<<endl;
			cin>>type;
			cout<<"Enter Balance:"<<endl;
			cin>>tot;
		}
		// function to display the require data
    void showdata()
    {
    	cout<<"Name:"<<name<<endl;
    	cout<<"Account Number:"<<accnumber<<endl;
    	cout<<"Account type:"<<type<<endl;
    	cout<<"Balance:"<<tot<<endl;
	}
	// function to deposit the amount in ATM
	void deposit()
	{
		cout<<"\n Enter amount to be deposited\n";
		cin>>amount;
	}
	// function to show the balance amount
	void showbal()
	{
		tot=tot+amount;
		cout<<"\n Total balance is:"<<tot;
	}
	// function to withdraw the amount in ATM
	void withdraw()
	{
		int a,avail_balance;
		cout<<"Enter amount to withdraw\n";
		cin>>a;
		avail_balance=tot-a;
		cout<<"Available Balance is:"<<avail_balance;
	}
};
// Driver code
int main()
{
	// object of class
	Bank b;
	int choice;
	// infinite while loop to choose
	// options everytime
	while(1)
	{
		cout<<"\n---------------------------";
		cout<<"----------WELCOME------------";
		cout<<"-----------------------------";
	    cout<<"\nEnter Your Choice\n";
	    cout<<"\t1.Enter name,Account "
	        <<"number,Account type\n";
	    cout<<"\t2.Balance Enquiry\n";
	    cout<<"\t3.Deposit Money\n";
	    cout<<"\t4.Show Total Balance\n";
	    cout<<"\t5.Withdraw Money\n";
	    cout<<"\t6.Cancel\n";
	    cin>>choice;
	    // choice to select from
	    switch(choice){
	    	case 1:
	    		b.setvalue();
				break;
			case 2:
				b.showdata();
				break;
			case 3:
				b.deposit();
				break;
			case 4:
				b.showbal();
				break;
			case 5:
				b.withdraw();
				break;
			case 6:
				exit(1);
				break;
			default:
				cout<<"\nInvalid Choice\n";
	    }
	}
	return 0;
}
