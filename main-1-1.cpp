#include <iostream>

extern double arrayMin(double* array, int size);

int main(){
    double array[] = {4,2,3,1};
    int size =  sizeof(array)/sizeof(array[0]);
    std::cout << arrayMin(array, size) << std::endl;
    return 0;
}