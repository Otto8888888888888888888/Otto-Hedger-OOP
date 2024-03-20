#include <iostream>
#include <string>

int *readNumbers(){
    int* array = new int[4];
    std::cout << "Enter 4 numbers: " << std::endl;
    for (int i=0; i<4; ++i){
        std::cin >> array[i];
    }
    return array;
}


int secondSmallestSum(int *numbers, int length) {
    int smallestSum;
    int secondSmallestSum;

    for (int i = 0; i < length; ++i) {
        int sum = 0;
        for (int j = i; j < length; ++j) {  
            sum += numbers[j];
            if (sum < smallestSum) {
                secondSmallestSum = smallestSum;
                smallestSum = sum;
            } else if (sum < secondSmallestSum && sum != smallestSum) {
                secondSmallestSum = sum;
            }
        }
    }
    return secondSmallestSum;
}
