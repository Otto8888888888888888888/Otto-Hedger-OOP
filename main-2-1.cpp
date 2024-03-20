#include <iostream>
#include <string>

extern int *readNumbers();
extern void hexDigits(int *numbers,int length) ;

int main(){
    int* numbers = readNumbers();
    int length = 10;
    hexDigits(numbers, length);
    return 0;
}