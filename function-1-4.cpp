#include <iostream>
#include "Person.h"

PersonList createPersonList(int n){
    PersonList list;    
    list.people = new Person[n];
    list.numPeople = n;
    for (int i = 0; i <n; ++i){
        list.people[i].name = "Jane Doe";
        list.people[i].age = 1;
    }
    return list;
}
PersonList shallowCopyPersonList(PersonList pl){
    PersonList list3;
    list3.numPeople = pl.numPeople;
    list3.people = pl.people;
    return list3;
}
