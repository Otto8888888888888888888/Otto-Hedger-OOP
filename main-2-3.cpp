#include <iostream>

extern int sum_if_palindrome(int integers[], int length);
int main(){
    int array1[] = {1,2,3,3,2,1};
    int arraySize = sizeof(array1) / sizeof(array1[0]);
    int ans = sum_if_palindrome(array1,arraySize);
    if (ans == -2){
        std::cout<< "It is not a palindrome" << std::endl;
    }
    else if (ans == -1){
        std::cout<< "The array is too short" << std::endl;
    }
    else{
        std::cout<< "The sum of the palindrome array is "<< ans << std::endl;

    }
    
    return 0;
}