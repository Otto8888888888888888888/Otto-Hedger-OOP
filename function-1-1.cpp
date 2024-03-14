
double arrayMin(double* array, int size) {
    double minimum = array[0];
    for (int i=1; i<size; ++i){
        if (array[i]< minimum){
            minimum = array[i];
        }
    }
    return minimum;
}