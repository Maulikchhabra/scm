#include<iostream>
using namespace std;
int main()
{
   int a[10],n,i;
   cout<<"Enter the number to convert:";
   cin>>n;
   for(i=0;n>0;i++)
   {
   	a[i]=n%2;
   	n=n/2;
   }
   cout<<"Binary of the given number=";
   for(i=i-1;i>=0;i--)
   {
   	cout<<a[i];
   }
//---------------------------------------------------------------------------//
//Algorithm=1.Divide the num by 2 through %and store the remainder in array.//
//          2.Divide the num by 2 thru /    //
//          3.Repeat the step 2 until the num is greater than 0   //
//---------------------------------------------------------------------------//
