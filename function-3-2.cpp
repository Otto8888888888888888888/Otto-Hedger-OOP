#include <iostream>
#include <string>

int *readNumbers(){
    int* array = new int[10];
    std::cout << "Enter 10 numbers: " << std::endl;
    for (int i=0; i<10; ++i){
        std::cin >> array[i];
    }
    return array;
}
int *reverseArray(int *numbers1,int length){
    int* numbers2 = new int[length];
    for (int i=0; i<length; ++i){
        numbers2[i] = numbers1[length-i-1];
    }
    return numbers2;
}