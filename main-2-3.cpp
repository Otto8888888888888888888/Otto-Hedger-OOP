#include <iostream>

extern void two_five_nine(int array[], int n);
int main(){
    int array1[] = {4,5,8,2,8,-5,2,9};
    int arraySize = sizeof(array1) / sizeof(array1[0]);
    two_five_nine(array1,arraySize);
    return 0;
}