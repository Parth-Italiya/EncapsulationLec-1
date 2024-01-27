/*2. WAP to get and display 5 Customers
information using encapsulation by including
below mentioned attributes:
- cust_id
- cust_name
- cust_age
- cust_telecome_brand_name (like Jio, Airtel, Vi, etc.)
- cust_mobile_number
- cust_city
- cust_simcard_validity (in years)
*/

#include<iostream>
using namespace std;
class Customer{
	int id;
	char name[20];
	int age;
	char brand[15];
	long long int mobile;
	char city[25];
	int validity;
	public:
		void setData(){
			cout<<"Enter ID : ";
			cin>>id;
			cout<<"Enter Name : ";
			cin>>name;
			cout<<"Enter Age : ";
			cin>>age;
			cout<<"Enter Telecom Brand Name : ";
			cin>>brand;
			cout<<"Enter Mobile Number : ";
			cin>>mobile;
			cout<<"Enter City : ";
			cin>>city;
			cout<<"Enter Sim Validity : ";
			cin>>validity;
		}
		void getData(){
			cout<<"Customer ID is : "<<id<<endl;
			cout<<"Customer Name is : "<<name<<endl;
			cout<<"Customer Age is : "<<age<<endl;
			cout<<"Customer Brand  is : "<<brand<<endl;
			cout<<"Customer Mobile Number is : "<<mobile<<endl;
			cout<<"Customer City is : "<<city<<endl;
			cout<<"Customer Simcard Validity is : "<<validity<<endl;
		}
};
int main(){
	Customer c[5];
	int i;
	for(i=1;i<=5;i++){
		c[i].setData();
	}
	for(i=1;i<=5;i++){
		c[i].getData();
	}
	return 0;
}

