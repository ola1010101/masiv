//3
void Income()
{
    const int month{ 12 };
    int income[month]{ 1,2,3,4,5,6,7,8,9,10,11,12 };
    int monthStart{ 0 };
    int monthEnd{ 0 };

    for (int i{ 0 }; i < month; ++i)
    {
        std::cout << "Доход за: ";

        if (i == 0)
        {
            std::cout << "\n" << "January: ";
        }
        else if (i == 1)
        {
            std::cout << "February: ";
        }
        else if (i == 2)
        {
            std::cout << "March: ";
        }
        else if (i == 3)
        {
            std::cout << "April: ";
        }
        else if (i == 4)
        {
            std::cout << "May: ";
        }
        else if (i == 5)
        {
            std::cout << "June: ";
        }
        else if (i == 6)
        {
            std::cout << "July: ";
        }
        else if (i == 7)
        {
            std::cout << "August: ";
        }
        else if (i == 8)
        {
            std::cout << "September: ";
        }
        else if (i == 9)
        {
            std::cout << "October: ";
        }
        else if (i == 10)
        {
            std::cout << "November: ";
        }
        else
        {
            std::cout << "December: ";
        }

        std::cin >> income[i];
    }
    std::cout << "\nВведите диапазон за который вы бы хотели посмотреть доход:\n";
    std::cout << "Введите первый месяц: ";
    std::cin >> monthStart;
    std::cout << "Введите последний месяц: ";
    std::cin >> monthEnd;



    monthStart--;

    int maxI{ monthStart };
    int minI{ monthStart };

    for (int i{ monthStart }; i < monthEnd; ++i)
    {

        if (income[i] > income[maxI])
        {
            maxI = i;
        }
        else if (income[i] < income[minI])
        {
            minI = i;
        }
    }

    std::cout << "\nМинимум: " << minI + 1 << '\n';
    std::cout << "Максимум: " << maxI + 1 << '\n';

    return;
}