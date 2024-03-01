#include <iostream>
extern double sum_even(double array[], int n);
int main(){
    double array1[] = {3,5,2,1,4};
    int arraySize = sizeof(array1) / sizeof(array1[0]);
    std::cout << "The sum of all the even positioned numbers in the array is " << sum_even(array1, arraySize) << std::endl;

    return 0;
}