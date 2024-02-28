#include <iostream>
extern double array_mean(int array[], int n);

int main(){
    int array[] = {23,45,32,8,13};
    int arraySize = sizeof(array) / sizeof(array[0]);
    std::cout << "The mean of the elements in the array is " << array_mean(array, arraySize) << std::endl;
    return 0;
 }
