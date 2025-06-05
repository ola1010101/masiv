//2
void Summa()
{
    int kolich, lower, upper, threshold;
    std::cout << "¬ведите количество элементов в массиве: ";
    std::cin >> kolich;

    std::cout << "¬ведите нижнюю границу диапазона: ";
    std::cin >> lower;

    std::cout << "¬ведите верхнюю границу диапазона: ";
    std::cin >> upper;

    std::cout << "¬ведите значение порога (элементы меньше этого будут суммироватьс€): ";
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
    std::cout << "—генерированный массив: ";
    for (int i = 0; i < kolich; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "—умма элементов, меньших " << threshold << ": " << sum << std::endl;

    return ;
}