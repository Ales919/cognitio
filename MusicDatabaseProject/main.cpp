//Alexandros Osana ®
//Database project, Google Cpp tutorials
//Music Database

#include <iostream>
#include <string>
#include "composer.h"
#include "database.h"

using namespace std;


int main(){
    
    composer Desplat;
    database DB;
    
    //int in_yob,ranking
    //string in_first_name
    
    cout<<endl<< "+++++++  PROGRAM START  +++++++" <<endl;
    
    Desplat.first_name();
    Desplat.composer_yob();
    Desplat.ranking();
    
    Desplat.display();
    
    DB.AddComposer("Howard", 1945, 95);
    DB.AddComposer("Alexandre", 1955,85);
    
    DB.displayAll();
    
    cout<<endl<< "+++++++  PROGRAM END  +++++++" <<endl;
    
    return 0;
}