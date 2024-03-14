#include <iostream>
double* duplicateArray(double* array, int size){
    double *arr2 = new double[size];
    for(int i=0; i<size; ++i){
        arr2[i] = array[i];
    }
    //for(int i = 0;i < size; ++i){
     //   std::cout << arr2[i] << std::endl;
    //}
    return arr2;
}