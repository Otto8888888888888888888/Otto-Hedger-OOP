#include <iostream>

extern int count_evens(int number);

int main(){
    int number = 100;

    std::cout << "The number of the even numbers is " << count_evens(number) << std::endl;
    
    return 0;
}