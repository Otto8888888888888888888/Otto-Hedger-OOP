 int min_element(int array[], int n){
    int smallest = array[0];
    if (n<1){ 
        return 0;
    }
    for (int i = 1; i<n; ++i) {
        if (array[i]<smallest){
            smallest = array[i];
        }
    }
    return smallest;
}