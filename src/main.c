#include <stdio.h>
#include "sort.h"

int main(int argc, char* argv[]) {
    printf("hh");

    int a[5] = { 3, 4, 5, 2, 1 };
    int b[5] = { 0, };
    sort_bubble(5, a, b);

    return 0;
}
