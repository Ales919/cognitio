//composer.cpp
//Alexandros Osana ®
//Database project, Google Cpp tutorials
//Music Database

#include "composer.h"

// Costructor Destructor

database::database(){
  
    cout<< " ~~~~~~~ NEW ARTIST DATABASE INITIATED ~~~~~~~ "<<endl;
    int next_slot_ = 0;
    
};

database::~database(){
    cout<< " ~~~~~~~  DATABASE DELETED ~~~~~~~ ";
};

// Modulators

composer& database::AddComposer(string in_first_name, int in_yob, int ranking){
    
    first_name_ = in_first_name;
    composer_yob_ = in_yob;
    ranking_ = ranking;
    
};

//Methods
void database::displayAll(){
    for (int i = 0;i<next_slot_;i++){
        composer.display(Composers_[i]); // START FROM HERE
    }
};