// Zadachi.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    /*setlocale(LC_ALL, "");
    float a;
    float b;
    
    std::cout <<"Введите число: ";
    std::cin >> a;
    std::cout << "Введите число: ";
    std::cin >> b;


    float c = a + b;
    std::cout << "\n Сложение: ";
    std::cout << c;
    
    float d = a - b;
    std::cout << "\n Вычитание:  ";
    std::cout << d;
    
    float u = a * b;
    std::cout << "\n Умножение: ";
    std::cout << u;
    
    float x = a / b;
    std::cout << "\n Деление: ";
    std::cout << x;*/
    
    //Задача 1
    
    float one_katet;
    float two_katet;
    

    std::cin >> one_katet;
    std::cin >> two_katet;

    float c = (one_katet * one_katet) + (two_katet * two_katet);
    c * c;
    std::cout << "\n Гипотенуза: ";
    std::cout << c;
    float S = one_katet * two_katet / 2;
    std::cout << "\n Площадь: ";
    std::cout << S;
    
}   

