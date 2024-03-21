#include <iostream>
#include "Person.h"
using namespace std;
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
PersonList deepCopyPersonList(PersonList pl){
    PersonList list2;
    list2.numPeople = pl.numPeople;
    list2.people = new Person[list2.numPeople];
    for (int i = 0; i <pl.numPeople; ++i){
        list2.people[i].name = pl.people[i].name;
        list2.people[i].age = pl.people[i].age;
    }
    return list2;
}