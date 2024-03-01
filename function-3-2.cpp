#include <algorithm>
int median_array(int array[], int n){
    int medNum = (n/2);
    if (n<1 || n%2==0){ 
        return 0;
    }
    std::sort(array,array+n);
    return(array[medNum]);
}