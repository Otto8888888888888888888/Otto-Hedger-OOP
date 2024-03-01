#include <iostream>

extern bool is_ascending(int array[], int n);
int main(){
    int array1[] = {3,2,29};
    int arraySize = sizeof(array1) / sizeof(array1[0]);
    if (is_ascending(array1, arraySize)  == 1){
        std::cout << "The array is in ascending order" << std::endl;
    }
    else{
        std::cout << "The array is not in ascending order" << std::endl;
    }
    return 0;
}