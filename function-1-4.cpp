int sum_two_arrays(int array[], int secondarray[], int n){
    int array3[n] = {};
    if (n<1){   
        return 0;
    }
    for (int i = 0; i < n; ++i) {
        array3[i] = array[i] + secondarray[i];
    }
    return array3;
}
