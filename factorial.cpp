#include<iostream>
using namespace std;
class fact
{
  public:
     
       fact()                  
       {
        int n;
         cout << "Enter a positive integer: ";
         cin >> n;
    
         cout << "Factorial of " << n << " = " << factorial(n);
       
       }
      int factorial(int n)
      {
      if(n > 1)
        return n * factorial(n - 1);
         else
           return 1;
      }
       ~fact()
     {
      cout<<"bye";
     }   // destructor
};      

int main()
{
fact obj;

return 0;
}
