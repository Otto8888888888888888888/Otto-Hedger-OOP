
int max_element(int array[], int n){
    int largest = array[0];
    if (n<1){ 
        return 0;
    }
    for (int i = 1; i<n; ++i) {
        if (array[i]>largest){
            largest = array[i];
        }
    }
    return largest; 
}