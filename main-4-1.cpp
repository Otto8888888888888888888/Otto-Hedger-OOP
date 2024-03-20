#include <iostream>
extern int *readNumbers();
extern int secondSmallestSum(int *numbers,int length);
int main(){
    int* numbers = readNumbers();
    int length = 4;
    int smallest2 = secondSmallestSum(numbers, length);
    std::cout << "Second smallest sum: " << smallest2 << std::endl;
    delete[] numbers;
    return 0;
}