#include <iostream>

extern double weighted_average(int array[], int n);
int main(){
    int array1[] = {1,2,1,4,1,3};
    int arraySize = sizeof(array1) / sizeof(array1[0]);
    std::cout << "The weighted average of the array is " << weighted_average(array1, arraySize) << std::endl;

    return 0;
}