#include <iostream>
#include <string>
#include <limits>
#include <type_traits>
 
template<typename T>
std::string to_binary_string(T n)
{
    static_assert(std::is_integral<T>::value, "Integer required.");
    if (std::numeric_limits<T>::is_signed &&
        n == std::numeric_limits<T>::min()) // (*)
    {
        // переполнение в знаковом типе - UB, избегаем его
        return "-1" + std::string(std::numeric_limits<T>::digits, '0');
    }
 
    std::string buffer;
    buffer.reserve(std::numeric_limits<T>::digits + 1); // +1 для возможного минуса
 
    bool negative = (n < 0);
    if (negative)
        n = -n; // это можно делать вследствие проверки (*)
 
    do
    {
        buffer += char('0' + n % 2);
        n = n / 2;
    } while (n > 0);
 
    if (negative)
        buffer += '-';
 
    return (std::string(buffer.crbegin(), buffer.crend()));
}
 
int main()
{
    int n;
    std::cin >> n;
    std::cout << to_binary_string(n);
 
    return 0;
}
