#include "workshop.h"
#include <iostream>

int main(){
    double ten = 10.2;
    double array[] = {3,4,56,73,2};
    int arraySize = sizeof(array) / sizeof(array[0]);
    char star = 's';
    double* ptrdoub = &ten;
    char* str = &star;
    int N = 5;
    double M = 3.5; // Value to initialize the array elements with
    double *maxPtr = dynamicArray(N);
    //changeValue(ptrdoub);
    //printArray(array, arraySize) ;
    //std::cout << arrayMax(array, arraySize) << std::endl;
    std::cout << maxPtr << std::endl;
    delete[] maxPtr;

    return 0;
}
