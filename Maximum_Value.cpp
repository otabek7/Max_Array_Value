#include <vector>
#include <iostream>

int find_max_value(int arr[], int i, int length)
{
    if (i == length - 1) 
        return arr[i];
    else
    {
        if (arr[i] < find_max_value(arr, i + 1, length))
            return find_max_value(arr, i + 1, length);
        else
            return arr[i];
    }
}

int main()
{
    int arr[] = {102, 101, 45, 78, 34, 67};
    std::cout << "Largest Element is : " << find_max_value(arr, 0, 5) <<std::endl;
}