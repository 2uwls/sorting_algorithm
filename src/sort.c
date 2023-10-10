#include "sort.h"

void print_arr(int arr[],int arr_size)
{
    for (int i = 0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int sort_bubble(int arr_size, int source_arr[], int target_arr[])
{
    int count=0;
    for (int i = 0; i < arr_size; i++)
    {
        target_arr[i] = source_arr[i];
    }

    for (int i = arr_size - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (target_arr[j] > target_arr[j+1])
            {
                int temp = target_arr[j + 1];
                target_arr[j + 1] = target_arr[j];
                target_arr[j] = temp;
                count++;
            }
        }
    }
    return count;
}


void merge_dsc(int list[], int target_arr[],int left, int mid, int right,int* count)
{
    int i=left;
    int j=mid+1;
    int k=left;
    int l;

    while(i<=mid && j<=right)
    {
        if (list[i]>=list[j])
        {
            target_arr[k++]=list[i++];
        } 
        else
        {
            target_arr[k++]=list[j++];
        }
        (*count)++;
    }

    while(i<=mid)
    {
        target_arr[k++]=list[i++];
    }
    while (j<=right)
    {
        target_arr[k++]=list[j++];
    }
    
    for (l=left; l<=right; l++)
    {
        list[l]=target_arr[l];
    }
}


void sort_merge(int source_arr[], int target_arr[], int left, int right, int* count)
{
    int mid;

    if(left<right)
    {
        mid=(left+right)/2;
        sort_merge(source_arr, target_arr,left, mid, count);
        sort_merge(source_arr,  target_arr,mid+1, right,count);
        merge_dsc(source_arr, target_arr,left, mid, right, count);
    }
}
