#include <iostream>

extern void print_pass_fail(char grade);
int main(){
    char mark = 'A';
    print_pass_fail(mark);
    return 0;
}