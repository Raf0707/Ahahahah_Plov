#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <cstring>

int dec2bin(int num)
{
   int out = 0, order = 1;
   while(num)
   {
       out += (num & 0x1) * order;
       num >>= 1;
       order *= 10;
   }
   return out;
}

template <class T> int eq(T a, T b) { return ((a == b) ? (1) : (0)); }

int countOfEvenNumberInBin(int num)
{
   int count = 0;
   while(num)
       {
           count += ~(num & 1) & ~eq(num & 0x7, 0) & 1;
           num >>= 3;
       }
   return count;
}

bool isNoDigit(char ch) { return (((ch >= '0') && (ch <= '9')) ? (false) : (true)); }

int main()
{
   std::string str;
   std::cin >> str;
   while(std::find_if(str.begin(), str.end(), isNoDigit) != str.end())
   {
       std::cout << "Error. Please re-enter data:" << std::endl;
       std::cin >> str;
   }
   char tmp[64];
   strcpy(tmp, str.c_str());
   std::cout << dec2oct(atoi(tmp)) << ' ' << countOfEvenNumberInBin(atoi(tmp)) << std::endl;
   std::cout << dec2bin(atoi(tmp));
   return 0;
}
