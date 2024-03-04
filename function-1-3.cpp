#include <iostream>
void count_digits(int array[4][4]){
    int onesCount = 0;
    int twosCount = 0;
    int threesCount = 0;
    int foursCount = 0;
    int fivesCount = 0;
    int sixsCount = 0;
    int sevensCount = 0;
    int eightsCount = 0;
    int ninesCount = 0;
    int zerosCount = 0;

    for (int i = 0; i<4; ++i) {
        for (int j = 0; j<4; ++j) {
            switch (array[i][j]){
            case 1:
                onesCount += 1;
                break;
            case 2:
                twosCount += 1;
                break;
            case 3:
                threesCount += 1;
                break;    
            case 4:
                foursCount += 1;
                break;
            case 5:
                fivesCount += 1;
                break;
            case 6:
                sixsCount += 1;
                break;
            case 7:
                sevensCount += 1;
                break;
            case 8:
                eightsCount += 1;
                break;
            case 9:
                ninesCount += 1;
                break;
            case 0:
                zerosCount += 1;
                break;
            default:
                break;
            }
        }
    }
    std::cout <<"0:"<< zerosCount << ";1:" << onesCount << ";2:" << twosCount << ";3:" << threesCount << ";4:" << foursCount<<  ";5:"  << fivesCount << ";6:" << sixsCount << ";7:" << sevensCount << ";8:" << eightsCount <<";9:" << ninesCount << ";" <<std::endl;
}