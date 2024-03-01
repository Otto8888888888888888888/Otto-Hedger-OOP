#include <iostream>
int two_five_nine(int array[], int n){
    int twosCount = 0;
    int fivesCount = 0;
    int ninesCount = 0;
    if (n<1){ 
        return 0;
    }
    for (int i = 0; i<n; ++i) {
        switch (array[i]){
        case 2:
            twosCount += 1;
            break;
        case 5:
            fivesCount += 1;
            break;
        case 9:
            ninesCount += 1;
            break;
        default:
            break;
        }
    }
    std::cout << "2:" << twosCount << ";5:" << fivesCount <<";9:" << ninesCount << ";" <<std::endl;
    return 1; 
}