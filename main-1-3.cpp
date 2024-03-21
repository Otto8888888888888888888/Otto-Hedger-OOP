#include <iostream>
#include "Person.h"
using namespace std;

int main(){
    int n=5;
    PersonList pl = createPersonList(n);
    PersonList list2 = deepCopyPersonList(pl);
    cout << "Person: " << list2.people[1].name << " Age: " << list2.people[1].age << endl;
    return 0;
}
    