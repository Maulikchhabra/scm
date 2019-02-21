#include<iostream>
using namespace std;
class fact //class declaration//
{
  public:
     
       fact()           //constructor declaration//       
       {
        int n; //variable declaration//
         cout << "Enter a positive integer: ";
         cin >> n;
    
         cout << "Factorial of " << n << " = " << factorial(n);
       
       }
      int factorial(int n)  //function declaration//
      {
      if(n > 1)
        return n * factorial(n - 1);
         else
           return 1;
      }
       ~fact()  //destructor//
     {
      cout<<"bye";
     }   
};      

int main()
{
fact obj;  //object //

return 0;
}
