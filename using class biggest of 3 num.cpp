#include<iostream>
using namespace std;
class biggest
{
	int x,y,z;
	public:
		void getdata();
		void putdata();
};
void biggest::getdata()
{
	cout<<"enter x,y,z values";
	cin>>x>>y>>z;
}
void biggest::putdata()
{
	if(x>y && x>z)
	cout<<" x is greatest:"<<x;
	else if(y>z)
	cout<<"y is greatest:"<<y;
	else
	cout<<"z is greatest:"<<z;
}
main()
{
	biggest k;
	k.getdata();
	k.putdata();
}
