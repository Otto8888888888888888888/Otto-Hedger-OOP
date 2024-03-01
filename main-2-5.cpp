#include <iostream>

extern bool is_descending(int array[], int n);
int main(){
    int array1[] = {4,2,10};
    int arraySize = sizeof(array1) / sizeof(array1[0]);
    if (is_descending(array1, arraySize)  == 1){
        std::cout << "The array is in descending order" << std::endl;
    }
    else{
        std::cout << "The array is not in descending order" << std::endl;
    }
    return 0;
}