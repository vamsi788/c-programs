#include<iostream>
using namespace std;
main()
{
	int reg_no,m1,m2,m3,total;
	float avg;
	char name[30];
	cout<<"enterr reg_no,m1,m2,m3";
	cin>>reg_no>>m1>>m2>>m3;
	cout<<"enter name";
	cin>>name;
	total=m1+m2+m3;
	cout<<"total:"<<total;
	if(m1>=50&&m1<=100 && m2>=50&&m2<=100 && m3>50&&m3<=100)
	avg=total/3;
	cout<<"avg:"<<avg;
	if(avg>=90)
	cout<<"enter s grade";
	else if(avg>80 && avg<90)
	cout<<"a grade";
	else if(avg>70 && avg<80)
	cout<<"enter b grade";
	else if(avg>60 && avg<70)
	cout<<"enter c grade";
	else
	cout<<"no grade";
}
