#include <iostream>
using namespace std;

int Sum(int a, int b)
{
   return a + b ;
}
 
 int Reverse(int *a, int *b)
 {
   n = Sum(*a, *b);
   while (n > 0)
     n = n % 10;
    int rev = rev * 10 + n;
     n = n /10;
     return n;
     
 }
 
 
 
int main()
{
   int a = 0;
   int b = 0;
   cin >> a >> b;
   cout << "Summa chisel =  "<<Sum(a,b);
   return 0;
   
   
}
