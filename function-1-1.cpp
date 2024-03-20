#include <iostream>
/*
#include "Person.h"

Person* createPersonArray(int n)  {
    Person* array = new Person[n];
    for (int i = 0; i <n; ++i){
        array[i].name = "John Doe";
        array[i].age = 0;
    }
    return array;
}
*/

int *readNumbers(){
    int* array = new int[10];
    std::cout << "Enter 10 numbers: " << std::endl;
    for (int i=0; i<10; ++i){
        std::cin >> array[i];
    }
    return array;
}
void printNumbers(int *numbers,int length){
    for (int i = 0; i < length; ++i) {
        std::cout << i << " " << numbers[i] << std::endl;
    }
}


