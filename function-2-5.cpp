bool is_descending(int array[], int n){
    int temp = array[0];
    if (n<1){ 
        return false;
    }
    for (int i = 1; i<n; ++i) {
        if (array[i]<=temp){
            temp = array[i];
        }
        else{
            return false;
        }
    }
    return true;
}