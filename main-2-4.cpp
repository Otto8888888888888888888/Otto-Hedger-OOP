#include <iostream>

extern int sum_min_max(int integers[], int length);
int main(){
    int array1[] = {3,54,5,2,7,4,5,88,2,-34};
    int arraySize = sizeof(array1) / sizeof(array1[0]);
    std::cout << sum_min_max(array1, arraySize) << std::endl;

}