#include <iostream>

// Function to take input into an array
void fillArray(int arr[], int size)
{
    std::cout << "Enter " << size << " integer elements:" << std::endl;
    for (int i = 0; i < size; ++i)
    {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
}

// Function to print the elements of an array
void printArray(const int arr[], int size)
{
    std::cout << "Array elements: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    const int ARRAY_SIZE = 5;
    int myNumbers[ARRAY_SIZE];

    // Call the function to fill the array with user input
    fillArray(myNumbers, ARRAY_SIZE);

    // Call the function to print the array
    printArray(myNumbers, ARRAY_SIZE);

    return 0;
}