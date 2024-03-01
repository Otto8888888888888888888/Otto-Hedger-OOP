bool is_fanarray(int array[], int n){
    int temp = array[0];
    if (n<1){ 
        return false;
    }
    for (int i = 0; i<(n/2); ++i) {
        if (array[i]==array[n-i-1] && array[i]>= temp){
            temp = array[i];
        }
        else{
            return false;
        }
    }
    return true;
}