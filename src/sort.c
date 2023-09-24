#include "sort.h"

void print_arr(int arr_size, int arr[]);

void sort_bubble(int arr_size, int source_arr[], int target_arr[])
{
    for (int i = 0; i < arr_size; i++)
    {
        target_arr[i] = source_arr[i];
    }

    for (int i = arr_size - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            // print_arr(arr_size, target_arr);
            if (target_arr[j] > target_arr[j+1])
            {
                int temp = target_arr[j + 1];
                target_arr[j + 1] = target_arr[j];
                target_arr[j] = temp;
            }

            print_arr(arr_size, target_arr);
        }
    }
    
}

void print_arr(int arr_size, int arr[])
{
    for (int i = 0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
