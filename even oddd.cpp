#include<iostream>
using namespace std;
using std::string;
void non_argu_no_r()
{
	int x;
	cout<<"\n Enter a number ";
	cin>>x;
	if(x%2==0)
	{
		cout<<"\n The number "<<x<<" is even number"<<endl;
	}
	else
	{
		cout<<"\n The number "<<x<<" is odd number"<<endl;
	}
}
string non_argu_but_r()
{
	int x;
	cout<<"\n Enter a number ";
	cin>>x;
	if(x%2==0)
	{
		return "\n The number is even number";
	}
	else
	{
		return "\n The number is odd number";
	}
}
void argu_no_r(int a)
{
	int x;
	x=a;
	cout<<"\n You entered "<<x<<endl;
	if(x%2==0)
	{
		cout<<"\n The number "<<x<<" is even number"<<endl;
	}
	else
	{
		cout<<"\n The number "<<x<<" is odd number"<<endl;
	}
}
string argu_but_r(int a)
{
	int x;
	x=a;
	if(x%2==0)
	{
		return "\n The number is even number";
	}
	else
	{
		return "\n The number is odd number";
	}
}
int main()
{
	cout<<"\n *******************************************************";
	cout<<"\n . Funtion with no argument and no return value"<<endl;
	cout<<"\n *******************************************************";
	non_argu_no_r();
	cout<<"\n *******************************************************";
	cout<<"\n . Funtion with no argument but return value"<<endl;
	cout<<"\n *******************************************************";
	string b, c;
	b=non_argu_but_r();
	cout<<b;
	cout<<"\n *******************************************************";
	cout<<"\n . Funtion with argument but no return value"<<endl;
	cout<<"\n *******************************************************";
	argu_no_r(7);
	cout<<"\n *******************************************************";
	cout<<"\n . Funtion with argument but return value"<<endl;
	cout<<"\n *******************************************************";
	c=argu_but_r(6);
	cout<<c;
}
