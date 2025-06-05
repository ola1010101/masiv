//2
void Summa()
{
    int kolich, lower, upper, threshold;
    std::cout << "������� ���������� ��������� � �������: ";
    std::cin >> kolich;

    std::cout << "������� ������ ������� ���������: ";
    std::cin >> lower;

    std::cout << "������� ������� ������� ���������: ";
    std::cin >> upper;

    std::cout << "������� �������� ������ (�������� ������ ����� ����� �������������): ";
    std::cin >> threshold;
    std::srand(static_cast<unsigned int>(std::time(0)));

    std::vector<int> array(kolich);
    int sum = 0;
    for (int i = 0; i < kolich; ++i) {
        array[i] = std::rand() % (upper - lower + 1) + lower;
        if (array[i] < threshold) {
            sum += array[i];
        }
    }
    std::cout << "��������������� ������: ";
    for (int i = 0; i < kolich; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "����� ���������, ������� " << threshold << ": " << sum << std::endl;

    return ;
}