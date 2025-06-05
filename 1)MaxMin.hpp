
//1
void MaxMin() 
{
    std::cout << "¬ведите 5 чисел:";

    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        std::cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    std::cout << "\n" << "Max: " << max << "\n" << "Min: " << min;

    return ;
}
