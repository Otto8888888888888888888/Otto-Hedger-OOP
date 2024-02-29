#include <iostream>

extern int min_element(int array[], int n);

int main(){
    int array1[] = {4,5,8,2,8,-5,2,-4};
    int arraySize = sizeof(array1) / sizeof(array1[0]);
    std::cout << "The smallest number in the array is " << min_element(array1,arraySize) << std::endl;
    
    return 0;
}