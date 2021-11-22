/*Static data member And STatic Functions IN OOPs.
A static member function can only access static data member, other static 
member functions and any other functions from outside the class. Static member
 functions have a class scope and they do not have access to the this pointer of the class.
 */

#include<iostream>
#include<string> 
using namespace std;

class Employee{
	int id;
	static int count;
	public:
	 	void setData(void){
	 		cout << "Enter Id  = " ;
	 		cin >> id;
	 		count++;
		 }
		 void getData(void){
		 	cout << "The  Id of Employee is "  <<  id <<  " And The Number of Employee IS  " << count <<endl;
		 }
		 //Static Function
		 static void getcount(void){
		  cout << "The Value OF Count Is  : " ;
		  cout << count;
		  cout << endl;
		 }
};
			
int Employee :: count;

int main(){
	Employee e1,e2; 
    
    e1.getData();
    e1.setData();
    Employee::getcount();
    cout <<endl;
    e2.getData();
    e2.setData();
    Employee::getcount();
   
}

