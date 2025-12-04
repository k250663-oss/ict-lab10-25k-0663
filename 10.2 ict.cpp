#include<iostream>
#include<string.h>
using namespace std;

class bankacc{
	public:
	char acc_n[10];
	char acc_holder[50];
	float balance;
	
	bankacc(const char num[] , const char name[] , float b){
		balance = 0;
		strcpy(acc_n , num);
		strcpy(acc_holder , name);
		balance = b;
	}
	void deposit(float amount){
		balance += amount;
		cout<<"balance :"<<balance;
	}
	void withdraw(float amount){
		balance -= amount;
		cout<<"balance :"<<balance<<endl;
	}
	void display(){
		cout<<"acc number: "<<acc_n<<endl;
		cout<<"acc holder name: "<<acc_holder<<endl;
		cout<<"balance: "<<balance<<endl;
		
	}
};
int main(){
	bankacc u1 ("101" , "rafeh" , 900.0);
	bankacc u2 ("104" , "ali" , 8587.9);
	cout<<"user 1:"<<endl;
	u1.display();
	cout<<"after withdraw:"<<endl;
	u1.withdraw(300);
	u1.display();
	cout<<"user 2:"<<endl;
	u2.display();
	u2.deposit(290);
	cout<<"after deposit:"<<endl;
	u2.display();
}
