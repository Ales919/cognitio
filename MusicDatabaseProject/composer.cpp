//composer.cpp
//Alexandros Osana ®
//Database project, Google Cpp tutorials
//Music Database

#include "composer.h"
#include <iostream>
using namespace std;

//Constructor & Destructor where
composer::composer(){
    first_name_ = "EMPTY_Registry";
    composer_yob_ = 0;
    ranking_ = kDefaultRanking;
};
composer::~composer(){
    //cout<< "Object " << first_name_<< " destructed"<<endl;//muted for output reasons
};

//Modulators
void composer::set_first_name(string in_first_name){
    first_name_ = in_first_name;
};

void composer::set_composer_yob(int in_composer_yob){
    composer_yob_ = in_composer_yob;
};

void composer::set_ranking(int in_ranking){
    ranking_ =in_ranking;
};

//Methods
void composer::display(){
    
    cout<<endl<< "========= "<< first_name_<<" ========="<<endl;
    cout<< "YEAR OF BIRTH: "<<composer_yob_<<endl;
    cout<< "RANKING: "<<ranking_<<endl;
};

// Interface Actions
string composer::first_name(){
    string input_str;
    cout<< "Input First name: ";cin >> input_str;
    set_first_name(input_str);
    return input_str;
};

int composer::composer_yob(){
    int input;
    cout<< "Input the birth year of "<< first_name_<<": "; cin >> input;
    set_composer_yob(input);
    return input;
};

int composer::ranking(){
    int input;
    cout<< "Input ranking for "<< first_name_<<": "; cin >> input;
    set_ranking(input);
    return input;
};
