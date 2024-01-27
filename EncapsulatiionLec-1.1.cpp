/*1. WAP to get and display 5 Students information using
encapsulation by including below mentioned
attributes:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_email
- stu_city
- stu_college
Output:
Enter ID : 1
Enter Name : aman
Enter Age : 20
Enter Course : bca
Enter Email : aman@gmail.com
Enter City : surat
Enter College Name : amanhighschool
User ID is : 1
User Name is : aman
User Age is : 20
User Course is : bca
User Email is : aman@gmail.com
User City is : surat
User College Name is : amanhighschool
Enter ID : 2
Enter Name : chaman
Enter Age : 21
Enter Course : bscit
Enter Email : chaman@gmail.com
Enter City : jamnagar
Enter College Name : bhupendraJogi
User ID is : 2
User Name is : chaman
User Age is : 21
User Course is : bscit
User Email is : chaman@gmail.com
User City is : jamnagar
User College Name is : bhupendraJogi
Enter ID : 3
Enter Name : magan
Enter Age : 22
Enter Course : maganit
Enter Email : magan@gmail.com
Enter City : magnagar
Enter College Name : maganiHighschool
User ID is : 3
User Name is : magan
User Age is : 22
User Course is : maganit
User Email is : magan@gmail.com
User City is : magnagar
User College Name is : maganiHighschool
Enter ID : 4
Enter Name : chagan
Enter Age : 22
Enter Course : bCA
Enter Email : chagnu@gmail.com
Enter City : Chagnagar
Enter College Name : Chaguhighschool
User ID is : 4
User Name is : chagan
User Age is : 22
User Course is : bCA
User Email is : chagnu@gmail.com
User City is : Chagnagar
User College Name is : Chaguhighschool
Enter ID : 5
Enter Name : manidas
Enter Age : 22
Enter Course : apse
Enter Email : nagmani@gmail.com
Enter City : manipur
Enter College Name : nagmanihighschool
User ID is : 5
User Name is : manidas
User Age is : 22
User Course is : apse
User Email is : nagmani@gmail.com
User City is : manipur
User College Name is : nagmanihighschoolf
*/

#include<iostream>
using namespace std;
class Student{
	int id;
	char name[30];
	int age;
	char course[30];
	char email[30];
	char city[30];
	char clg[30];
	public:
		void setData(){
			cout<<"Enter ID : ";
			cin>>id;
			cout<<"Enter Name : ";
			cin>>name;
			cout<<"Enter Age : ";
			cin>>age;
			cout<<"Enter Course : ";
			cin>>course;
			cout<<"Enter Email : ";
			cin>>email;
			cout<<"Enter City : ";
			cin>>city;
			cout<<"Enter College Name : ";
			cin>>clg;
		}
		void getData(){
			cout<<"User ID is : "<<id<<endl;
			cout<<"User Name is : "<<name<<endl;
			cout<<"User Age is : "<<age<<endl;
			cout<<"User Course is : "<<course<<endl;
			cout<<"User Email is : "<<email<<endl;
			cout<<"User City is : "<<city<<endl;
			cout<<"User College Name is : "<<clg<<endl;
		}
};
int main(){
	Student s1,s2,s3,s4,s5;
	
	s1.setData();
	s1.getData();
	s2.setData();
	s2.getData();
	s3.setData();
	s3.getData();
	s4.setData();
	s4.getData();
	s5.setData();
	s5.getData();

	
	return 0;
}
