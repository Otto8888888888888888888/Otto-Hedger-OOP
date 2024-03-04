#include <iostream>

extern void count_digits(int array[4][4]);

int main(){
    int array[4][4] = {{1,2,3,4},{4,3,2,1},{1,2,3,4},{3,2,4,1}};
    count_digits(array);
    return 0;
}
    