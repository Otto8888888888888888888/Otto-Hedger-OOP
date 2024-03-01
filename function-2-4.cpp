
bool is_ascending(int array[], int n){
    int temp = array[0];
    if (n<1){ 
        return 0;
    }
    for (int i = 1; i<n; ++i) {
        if (array[i]>=temp){
            temp = array[i];
        }
        else{
            return false;
        }
    }
    return true;
}