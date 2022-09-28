#include<iostream>
using namespace std;
class balayya
{
	int x,y,sum;
	public:
		void getdata();
		void putdata();
};
void balayya::getdata()
{
	cout<<"enter x,y values";
	cin>>x>>y;
}
void balayya::putdata()
{
	sum=x+y;
	cout<<"sum of two num:"<<x+y;
}
main()
{
	balayya l;
	l.getdata();
	l.putdata();
}
