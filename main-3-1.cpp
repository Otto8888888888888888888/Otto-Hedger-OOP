#include <iostream>

extern bool is_fanarray(int array[], int n);
int main(){
    int array1[] = {1,2,3,2,1};
    int arraySize = sizeof(array1) / sizeof(array1[0]);
    if (is_fanarray(array1, arraySize)  == 1){
        std::cout << "The array is a fan array" << std::endl;
    }
    else{
        std::cout << "The array is not a fan array" << std::endl;
    }
    return 0;
}