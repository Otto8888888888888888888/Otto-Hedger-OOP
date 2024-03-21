#include <iostream>
#include "Person.h"


int main(){
    int n = 5;
    PersonList list = createPersonList(n);

    for (int i=0; i < n; ++i){
        std::cout << "Person: " << list.people[i].name << " Age: " << list.people[i].age << std::endl;
    }
    delete[] list.people;
    return 0;

}
