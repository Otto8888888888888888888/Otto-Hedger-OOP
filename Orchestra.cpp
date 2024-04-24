#include "Orchestra.h"

Orchestra::Orchestra(){
    size = 5;
    current =0;
    orch1 = new Musician[size];
}

Orchestra::Orchestra(int size){
    this->size = size;
    current = 0;
    orch1 = new Musician[size];
}

int Orchestra::get_current_number_of_members(){
    return current;
}

bool Orchestra::has_instrument(std::string instrument){
    for(int i =0; i< current; ++i){
        if(orch1[i].get_instrument()==instrument){
            return true;
        }
        
    }
    return false;
}

Musician *Orchestra::get_members(){
    return orch1;
}

bool Orchestra::add_musician(Musician new_musician) {
    // Check if there is enough space in the orchestra
    if (current >= size) {
        // If not enough space, return false
        return false;
    }

    // Add the new musician to the next available slot in the array
    orch1[current] = new_musician;
    
    // Increment the count of current members
    current++;

    // Return true to indicate successful addition
    return true;
}

Orchestra::~Orchestra(){
    delete orch1;
}