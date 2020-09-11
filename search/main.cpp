#include <iostream>

#include "search.h"

int main(int argc, char const *argv[])
{
    search s;
    int arr[] = {2, 3, 4, 10, 40};
    int x = 40;
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = s.binary_search(arr, 0, n - 1, x);
    std::cout << "index: " << index << std::endl;
    return 0;
}
