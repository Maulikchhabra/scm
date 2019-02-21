#include<iostream>
using namespace std;
class pointer
{
	
};
int main()
{
	int a,b,*ptr1,*ptr2;
	int sum,sub,mul,increment,decrement;
	float div;
	cout<<"Enter the values of a ="<<endl;
	cin>>a;
	cout<<"Enter the value of b ="<<endl;
	cin>>b;
	ptr1=&a;//pointer //
	ptr2=&b;
	
	sum=*ptr1+*ptr2;
	sub=*ptr1-*ptr2;
	mul=(*ptr1)*(*ptr2);
	div=(*ptr1)/(*ptr2);
	cout<<"Sum is ="<<sum<<endl;
	cout<<"Substrction is ="<<sub<<endl;
	cout<<"Multiplication is ="<<mul<<endl;
	cout<<"Division is ="<<div<<endl;
	increment=++(*ptr1);
	cout<<"Increment ="<<increment<<endl;
	decrement=--(*ptr1);	
	cout<<"Decrement ="<<decrement<<endl;
return 0;	
}
