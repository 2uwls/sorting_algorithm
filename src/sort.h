#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_arr(int arr[],int arr_size);
int sort_bubble(int arr_size, int source_arr[], int target_arr[]);

void merge_dsc(int list[], int target_arr[],int left, int mid, int right,int* count);
void sort_merge(int source_arr[], int target_arr[], int left, int right, int* count);