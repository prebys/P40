// myarray.c
#include <stdio.h>

double find_max_C(double *arr, int n) {
    double max = -1e6;
    for (int i = 0; i < n; i++) {
        if(arr[i]>max) max=arr[i];
    }
    return max;
}
