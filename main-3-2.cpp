#include <iostream>

extern int *readNumbers();
extern int *reverseArray(int *numbers1,int length);
int main(){
    int* numbers1 = readNumbers();
    int length = 10;
 ;
    for(int i=0;i<length;++i){
        std::cout << i << " " << reverseArray(numbers1, length)[i] << std::endl;
    }
}