#include <iostream>

extern int num_count(int array[], int n, int number);

int main(){
    int array[] = {2,4,5,3,2,8,2,3};
    int arraySize = sizeof(array) / sizeof(array[0]);
    int number = 2;
    std::cout << "The number of " << number << "'s in the array is " << num_count(array, arraySize, number) << std::endl;
}
    