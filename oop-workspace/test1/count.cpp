int count(int array[], int n){
    int counteven = 0;
    for (int i=0;i<n;i++){
        if (array[i]%2==0){ 
            counteven++;
            
        }
    }
    return counteven;
}