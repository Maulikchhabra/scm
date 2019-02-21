#include<iostream>
using namespace std;
class pointerarray
{
	
};
int main()
{
	int arr[5],i;
	int sum,sub,mul,div,increment,decrement;
	cout<<"Enter the elements=";
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"Elements are="<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<"ADDITION IS DONE ON = "<<*(arr+1)<<*(arr+2)<<endl;
	sum=*(arr+1)+*(arr+2);
	cout<<"sum is ="<<sum<<endl;
	cout<<"SUBSTRACTION IS DONE ON ="<<*(arr+4)<<*(arr+1)<<endl;
	sub=*(arr+4)-*(arr+1);
    cout<<"sub is ="<<sub<<endl;
    cout<<"MULTIPLICATION IS DONE ON ="<<*(arr+1)<<*(arr+2)<<endl;
    mul=*(arr+1)*(*(arr+2));
    cout<<"mul is ="<<mul<<endl;
    cout<<"INCREMENT IS DONE ON ="<<*(arr+1)<<endl;
    increment=++(*(arr+1));
    cout<<"increment is ="<<increment<<endl;
    cout<<"DECREMENT IS DONE ON ="<<increment<<endl;
    decrement=--(*(arr+1));
    cout<<"decrement is ="<<decrement<<endl;
 return 0;   
}
