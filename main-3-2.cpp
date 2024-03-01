#include <iostream>

extern int median_array(int array[], int n);
int main(){
    int array1[] = {3,5,2,1,4};
    int arraySize = sizeof(array1) / sizeof(array1[0]);
    std::cout << "The median number of the array is " << median_array(array1, arraySize) << std::endl;

    return 0;
}