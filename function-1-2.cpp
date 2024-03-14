#include <iostream>

void modifyArray(double* array, int size, double value){
    double array2[size] = {0,0,0,0};
    for(int i = 0;i < size; ++i){
        array2[i] = array[i] + value;
    }
    //for(int i = 0;i < size; ++i){
    //    std::cout << array2[i] << std::endl;
    //}
}