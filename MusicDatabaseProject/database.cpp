//database.cpp
//Alexandros Osana ®
//Database project, Google Cpp tutorials
//Music Database

#include "composer.h"
#include "database.h"
#include <iostream>

using namespace std;

// Costructor Destructor

database::database(){
  
    cout<< " ~~~~~~~ NEW ARTIST DATABASE INITIATED ~~~~~~~ "<<endl;
    int next_slot_ = 0;
    
};

database::~database(){
    cout<< " ~~~~~~~  DATABASE DELETED ~~~~~~~ "<<endl;
};

// Modulators

composer& database::AddComposer(string in_first_name, int in_yob, int ranking){
    
    //FIX IT At this point I practically need to create a new 'composer' object and use its
    //modulators to set the values. Then store it in the DB (which is the Composers_[] array).
    Composers_[next_slot_].set_first_name(in_first_name);
    Composers_[next_slot_].set_composer_yob(in_yob);
    Composers_[next_slot_].set_ranking(ranking);
    next_slot_++;
    
    return Composers_[next_slot_];
    
};

//Methods
void database::displayAll(){
    
    if (next_slot_ > 0){
        for (int i = 0; i<next_slot_ ; i++){
        
            Composers_[i].display();
        };
    }else{
        cout<< "Selected Database is EMPTY"<<endl;
    };
};