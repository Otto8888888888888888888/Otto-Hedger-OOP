#include <iostream>

extern int sum_two_arrays(int array[], int secondarray[], int n)
int main(){
    int array1[] = {2,4,5,3};
    int array2[] = {2,8,2,3};
    int arraySize = sizeof(array1) / sizeof(array1[0]);
    std::cout << "The sum of the two arrays is " << std::endl;
    for (int i = 0; i < arraySize; ++i) {
        std::cout << sum_two_arrays(array3[i]) << std::endl;
    }
}