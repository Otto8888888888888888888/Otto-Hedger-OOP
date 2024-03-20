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

bool equalsArray(int *numbers1,int *numbers2,int length){
    for (int i=0;i<length; ++i){
        if (numbers1[i] != numbers2[i]){
            return false;
        }
        else{
            return true;
        }
    }
    return true;
}