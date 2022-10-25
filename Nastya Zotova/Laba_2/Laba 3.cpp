#include <iostream>
using namespace std;
 
void recursion(int x);
 
int main()
{
    int a,b;
    cin >> a >> b;
    int x = a + b;
    cout << x << endl;
 
    recursion(x);
 
 
    return 0;
}
 
 
void recursion(int x)
{
  if(x == 0)
  return ;

    int y = x%10;
 
    x /= 10;
 
    cout << y;
 
    recursion(x);
}
