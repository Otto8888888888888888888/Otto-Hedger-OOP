#include <iostream>
#include "Person.h"
using namespace std;
int main(){
    int n=5;
    PersonList pl = createPersonList(n);
    PersonList list2 = shallowCopyPersonList(pl);
    return 0;
}