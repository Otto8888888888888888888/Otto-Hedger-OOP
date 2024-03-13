#include <iostream>

void changeValue(double* ptrdoub){
    *ptrdoub = 42;
}

void printArray(double* array, int size) {
    for(int i=0;i<size;++i){
        std::cout << array[i] << std::endl; 
    }
}

double arrayMax(double* array, int size){
    double max = array[0];
    for(int i=1;i<size;++i){
        if (array[i]>max){
            max = array[i];
        }
    }
    return max;
}
double* dynamicArray(int N){
    double *dynArr = new double[N];
    for(int i = 0; i < N; i++){
       dynArr[i] = i;
    }
    double maximum = arrayMax(dynArr, N);
    int index = 0;
    for(int i = 0; i < N; i++) {
        if(dynArr[i] == maximum) {
            index = i;  
            break;
        }
    }
    return &dynArr[index];
}