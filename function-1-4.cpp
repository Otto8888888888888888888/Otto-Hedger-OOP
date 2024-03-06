#include <iostream>

void print_scaled(int array[3][3], int scalar){
    int new_array[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j){
            new_array[i][j] = (array[i][j]*scalar);
        }
    }
    for (int i = 0; i < 3; ++i) {
        std::cout << new_array[i][0] << ' ' << new_array[i][1] << ' ' << new_array[i][2] << ' ' << std::endl;
    }
}
