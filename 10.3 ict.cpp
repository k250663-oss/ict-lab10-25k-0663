#include<iostream>
#include<string.h>
using namespace std;
class vehicle{
	public:
	char type[10];
	char regnum[10];
	bool rented;
	
	//constructor:
	vehicle(const char vt[] , const char rn[] , bool rent){
		rent = false;
		strcpy(type , vt);
		strcpy(regnum , rn);
		rented = rent;
	}
	void rentv(){
		rented = true;
		cout<<"confirmed";
	}
	void returnv(){
		rented = false;
		
	}
	void display(){
		cout<<"Vehicle type: "<<type<<endl;
		cout<<"Reg number: "<<regnum<<endl;
		cout<<"rented status: "<<rented;
	}
	
};
int main(){
	
	vehicle v1("bike" , "2012" , false);
	vehicle v2("car" , "2010" , false);
	vehicle v3("truck" , "2008" , false);
	
	v2.rentv();
	v2.display();
	
	
}
