#include <iostream>

extern int sum_two_arrays(int array[], int secondarray[], int n);
int main(){
    int array1[] = {2,4,5,3};
    int array2[] = {2,8,2,3};
    int arraySize = sizeof(array1) / sizeof(array1[0]);;
    std::cout << "The sum of the two arrays is " << sum_two_arrays(array1, array2, arraySize)<< std::endl;

}