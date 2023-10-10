#include <stdio.h>
#include "sort.h"
#include "fill_random_num.h"


int main()
{
    printf("BUBBLE SORT\n");
    int A[100];
    fill_random_num(A, 100);
    int B[100]={0,};
    int C[100]={0,};

    printf("1)\n");
    printf("before sorting--------------\n");
    print_arr(A,100);
    printf("after sorting--------------\n");
    int operationCount=sort_bubble(100,A,B);
    print_arr(B,100);
    printf("counting: %d\n\n", operationCount);

    printf("2)");
    printf("almost already sorted\n");
    printf("before sorting--------------\n");
    for (int i=0;i<100;i++)
    {
        A[i]=i;
    }
    mix(A,100);
    print_arr(A,100);
    printf("after sorting--------------\n");
    int operationCount2=sort_bubble(100,A,B);
    print_arr(B,100);
    printf("counting: %d\n\n", operationCount2);

    printf("3)");
    printf("almost reversely sorted\n");
    printf("before sorting--------------\n");
    for (int i=0;i<100;i++)
    {
        A[i]=100-i;
    }
    mix(A,100);
    print_arr(A,100);
    printf("after sorting--------------\n");
    int operationCount3=sort_bubble(100,A,B);
    print_arr(B,100);
    printf("counting: %d\n", operationCount3);


    printf("\n\n\nMERGE(DSC) SORT\n");
    int D[100];
    fill_random_num(D, 100);
    int E[100]={0,};
    int F[100]={0,};

    printf("1)");
    printf("before sorting--------------\n");
    print_arr(D,100);
    printf("after sorting--------------\n");
    int count1=0;
    sort_merge(D,E,0,99,&count1);
    print_arr(E,100);
    printf("counting: %d\n\n", count1);

    printf("2)");
    printf("almost already sorted\n");
    printf("before sorting--------------\n");
    for (int i=0;i<100;i++)
    {
        D[i]=i;
    }
    mix(D,100);
    print_arr(D,100);
    printf("after sorting--------------\n");
    int count2=0;
    sort_merge(D,E,0,99,&count2);
    print_arr(E,100);
    printf("counting: %d\n\n", count2);

    printf("3)");
    printf("almost reversely sorted\n");
    printf("before sorting--------------\n");
    for (int i=0;i<100;i++)
    {
        D[i]=100-i;
    }
    mix(A,100);
    print_arr(A,100);
    printf("after sorting--------------\n");
    int count3=0;
    sort_merge(D,E,0,99,&count3);
    print_arr(E,100);
    printf("counting: %d\n", count3);


    return 0;
}
