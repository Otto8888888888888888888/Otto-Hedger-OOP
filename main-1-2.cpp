#include <iostream>
extern void modifyArray(double* array, int size, double value);

int main(){
    double array[] = {4,2,3,1};
    int size =  sizeof(array)/sizeof(array[0]);
    double value = 23;
    modifyArray(array, size, value);
    return 0;
}
