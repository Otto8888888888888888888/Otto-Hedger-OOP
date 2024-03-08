#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number){
    int num = std::stoi(decimal_number);
    std::string binary = "";
    while (num > 0){
        if (num% 2 == 0){
            binary = "0" + binary;
        } 
        else{
            binary = "1" + binary;
        }
        num/=2;
    } 
    std::cout << binary << std::endl;
}