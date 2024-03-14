#include <iostream>

void modifyArray(double* array, int size, double value){
    double *arr2 = new double[size];
    for(int i=0; i<size; ++i){
        arr2[i] = array[i] + value;
    }

    //for(int i = 0;i < size; ++i){
    //    std::cout << arr2[i] << std::endl;
    //}
}