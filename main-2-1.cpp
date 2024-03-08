#include <iostream>
#include <string>

extern void print_binary_str(std::string decimal_number);

int main(){
    std::string number;
    std::cout << "Enter a number to convert to binary" << std::endl;
    std::getline(std::cin, number);
    print_binary_str(number);
    return 0;
}