/*
#include <iostream>
#include "Person.h"


int main(){
    int n = 5;
    Person* array = createPersonArray(n);

    for (int i=0; i < n; ++i){
        std::cout << "Person: " << array[i].name << " Age: " << array[i].age << std::endl;
    }
    delete[] array;
    return 0;
}
*/

extern void printNumbers(int *numbers,int length);
extern int *readNumbers();
int main(){
    int* numbers = readNumbers();
    int length = 10;

    printNumbers(numbers, length);
    return 0;
}

