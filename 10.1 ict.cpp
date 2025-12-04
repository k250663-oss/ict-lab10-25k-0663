#include<iostream>
#include<string.h>
using namespace std;
class students{
	public:
	char name[50];
	char r_n[10];
	float marks;
	
	//constructor:
	students(const char n[] , const char r[] , float m){
		strcpy(name , n);
		strcpy(r_n , r);
		marks = m;
	}
	void display(){
		cout<<"name: \n"<<name;
		cout<<"r_n: \n"<<r_n;
		cout<<"marks: \n"<<marks;
	}
	
	bool cmarks(){
		return marks>=50;            //true condition
	}
	void updatemarks(float newmarks){
		marks = newmarks;
	}
};
int main(){
	students s1("laiba" , "cs1" , 89.6);
	students s2("ali" , "cs2" , 90.7);
	students s3("hassan" , "cs6" , 45.8);
	
	s1.display();
	s2.display();
	s3.display();
	
	cout<<"pass or fail\n";
	students student[] = {s1 , s2 , s3};
	for (students s : student){
	
	cout<<(s.cmarks()? "pass":"fail")<<endl;
}
	s2.updatemarks();
	s2.display();
}

