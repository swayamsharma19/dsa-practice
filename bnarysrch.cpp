#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;

    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] < target)
    {
        return mid + 1;
    }
    else
    {
        return mid - 1;
    }
}

int main()
{
    int n = 5, target = 4;
    int arr[] = {1, 2, 3, 4, 5};

    int result = binarySearch(arr, n, target);

    if (result != -1)
    {
        cout << "Target found at index: " << result << endl;
    }
    else
    {
        cout << "target not found" << endl;
    }

    return 0;
}