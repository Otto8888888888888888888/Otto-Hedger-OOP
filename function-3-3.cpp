#include <iostream>
double weighted_average(int array[], int n){
    int largest = array[0];
    int smallest = array[0];
    int count = 0;
    double weightAvg = 0;
    if (n<1){ 
        return 0;
    }
    for (int i = 1; i<n; ++i) {
        if (array[i]>largest){
            largest = array[i];
        }
        else if (array[i]<smallest){
            smallest = array[i];
        }
    }
    for (int i = smallest; i<largest+1; i++){
        for (int j=0; j<n; j++){
            if (array[j] == i){
                count += 1;
            }
        }
        
        
        //std::cout <<" count" <<count << std::endl; 
        //std::cout <<" i " <<i << std::endl;
        weightAvg = weightAvg + ((double (count)*i)/(n));
        //std::cout << weightAvg << std::endl;
        // Questions states answer should be 3 I believe the answer should be two.
        count = 0;
        
    }
    return (weightAvg);
}
    
