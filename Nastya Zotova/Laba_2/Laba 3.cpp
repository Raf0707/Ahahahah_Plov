#include <iostream>
using namespace std;
 
void ReversSum(int x);
 
int main()
{
    int a,b;
    cin >> a >> b;
    int x = a + b;
    cout << x << endl;
 
    ReversSum(x);
 
 
    return 0;
}
 
 
void ReversSum(int x)
{
  if(x == 0)
  return ;

    int y = x%10;
 
    x /= 10;
 
    cout << y;
 
   ReversSum(x);
}
