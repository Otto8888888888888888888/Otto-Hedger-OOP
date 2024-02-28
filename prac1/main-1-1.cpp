#include <iostream>

extern int array_sum(int[], int);

int main(){
    int array[] = {23,45,32,8,13};
    int arraySize = sizeof(array) / sizeof(array[0]);

    std::cout << "The sum of the elements in the array is " << array_sum(array, arraySize) << std::endl;
    
    return 0;
}