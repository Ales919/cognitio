//Alexandros Osana ®
//Database project, Google Cpp tutorials
//Music Database

#include <iostream>
#include <string>
#include "composer.h"
using namespace std;


int main(){
    composer Desplat, Shore;
    cout<<endl<<"+++++++ PROGRAM START  +++++++"<<endl;
    
    Desplat.first_name();
    Desplat.composer_yob();
    Desplat.ranking();
    
    Desplat.display();
    
    cout<<endl<<"+++++++  PROGRAM END  +++++++"<<endl;

    return 0;
}