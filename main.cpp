#include<iostream>
#include<cstdlib>
#include <ctime>
#include <vector>
#include "1)MaxMin.hpp"
#include "2)Summa.hpp"
#include "3)Income.hpp"

int main()
{
    setlocale(LC_ALL, "ru");

    MaxMin();
    system("pause");
    system("cls");

    Summa();
    system("pause");
    system("cls");

    Income();

    return 0;
}
