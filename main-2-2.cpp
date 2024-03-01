#include <iostream>

extern int max_element(int array[], int n);
int main(){
    int array1[] = {4,5,8,2,8,-5,2,-4};
    int arraySize = sizeof(array1) / sizeof(array1[0]);
    std::cout << "The laargest number in the array is " << max_element(array1,arraySize) << std::endl;
    return 0;
}
