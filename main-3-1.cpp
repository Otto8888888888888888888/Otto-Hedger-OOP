#include <iostream>
extern int *readNumbers();
extern bool equalsArray(int *numbers1,int *numbers2,int length);
int main(){
    int* numbers1 = readNumbers();
    int* numbers2 = readNumbers();
    int length = 10;
    if (equalsArray(numbers1,numbers2,length)== true){
        std::cout << " these arrays are the same" << std::endl;
    }
    else{
        std::cout << "These arrays are  not the same" << std::endl;
    }
    return 0;
}