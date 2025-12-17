// find_max.c
// Designed to be called by Python
// Compile
// Mac:
//     gcc -dynamiclib -o libfind_max.dylib find_max.c
// Linux:
//     gcc -fPIC -shared -o libfind_max.so find_max.c
// Windows:
//    Install Visual Studio 2022 free Community Version, including C/C++ Development tools
//    Open a 64-bit (!!!) development command window.  Type (note: /LD is case sensitive)
//      cl /LD find_max.c
//    which will create "find_max.dll"
//    
#include <stdio.h>

//Need a special prefix in Windows
#ifdef _WIN32
 #define PREFIX  __declspec(dllexport)
#else
 #define PREFIX
#endif

PREFIX double find_max(double *arr, int n) {
    double max=arr[0];                    // Initialize the array
    // find the maximum
    for (int i = 1; i < n; i++) {         
        if(arr[i]>max) max=arr[i];
    }
    return max;
}
