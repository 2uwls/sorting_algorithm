#include "stddef.h"
#include "fill_random_num.h"

void fill_random_num(int A[], int n)
{
    srand(time(NULL));
    for (int i=0;i<n; i++)
    {
        A[i]=rand()%1000;
        for(int j=0; j<i;j++)
        {
            if (A[i]==A[j])
            {
                i--;
                break;
            }
        }
    } 
}

void mix(int A[],int n)
{
    srand(time(NULL));
    for(int i=0; i<5; i++)
    {
        int idx1=rand()%n;
        int idx2=rand()%n;

        int temp=A[idx1];
        A[idx1]=A[idx2];
        A[idx2]=temp;
    }

}
