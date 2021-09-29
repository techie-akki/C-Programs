#include <stdio.h>

int binary_search(int arr[], int low, int high, int element)
{
    int mid;
    if (low == high)
    {
        if (arr[low] == element)
        {
            printf("element %d found at %d location.\n", element, low + 1);
            return 1;
        }
        else
        {
            printf("element not found.\n");
            return 0;
        }
    }
    else
    {
        mid = (low + high)/2;
        if (arr[mid] == element)
        {
            printf("element  %d found at %d location.\n", element, mid + 1);
            return 1;
        }
        else if (arr[mid] > element)
        {
            //high = mid - 1;
            return binary_search(arr, low, mid-1, element);
        }
        else
        {
            //low = mid + 1;
            return binary_search(arr, mid+1, high, element);
        }
    }
}

int main()
{
    int arr[] = {2, 4, 5, 7, 8}, size = 5, low = 0, high = size - 1, element = 4;
    binary_search(arr, low, high, element);
    return 0;
}