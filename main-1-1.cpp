#include <iostream>

extern int sum_diagonal(int array[4][4]);

int main(){
    int array[4][4] = {{1,2,3,4},{4,3,2,1},{1,2,3,4},{3,2,4,1}};

    std::cout << "The sum of the elements of the diagonal of the matrix is " << sum_diagonal(array) << std::endl;
    
    return 0;
}