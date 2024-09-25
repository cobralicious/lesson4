#include <iostream>

// int add(int a, int b)
// {
//     return a + b;
// }
//
// int multiply(int c, int d)
// {
//     return c * d;
// }
//
// int main()
// {
//     std::cout << add(7, 8) << std::endl; // внутри функции add(): a = 7, b = 8, значит a + b = 15
//     std::cout << multiply(4, 5) << std::endl; // внутри функции multiply(): c = 4, d = 5, значит c * d = 20
//
//     // Мы можем передавать целые выражения в качестве аргументов
//     std::cout << add(2 + 3, 4 * 5) << std::endl; // внутри функции add(): a = 5, b = 20, значит a + b = 25
//
//     // Мы можем передавать переменные в качестве аргументов
//     int x = 4;
//     std::cout << add(x, x) << std::endl; // будет 4 + 4
//
//     std::cout << add(1, multiply(2, 3)) << std::endl; // будет 1 + (2 * 3)
//     std::cout << add(1, add(2, 3)) << std::endl; // будет 1 + (2 + 3)
//
//     return 0;
// }


int doubleNumber(int a)
{

    return a * 2;
}

int main()
{
    int a;
    std::cin >> a;
    std::cout << doubleNumber(a) << std::endl;
    return 0;
}