//Excercise 1 from "Next Steps" Section
//Google Cpp tutorial
//Alex Osana

#include <iostream>
#include <math.h>
using namespace std;

bool testSubject(long int num);

int main(){
    
    long int subject = 0, sqred,allNums[10],max = 5000;
   // long int subject = 0, sqred,*allNums,max = 5000;
   //allNums = new long int;
    int count = 0;
    bool done = false;
    
    
    do{
        subject++;
        sqred = pow(subject,2);
        if (testSubject(sqred)){
            
            
            allNums[count] = sqred;
            cout<< sqred<<" with base "<<subject<< endl;
            count++;
        }
        
        
    }while ((subject < max) && (count<10));
    cout<<endl<< "count: "<<count<< " in a search up to "<<max<<endl<<endl;
    for (int j=0; j<count; j++){
    
        cout<< allNums[j]<<", ";
    }
    cout<<endl;
    return 0;
}


bool testSubject(long int num){
    
    int i = 0;
    long int sum = 0;
    
    do{
        i++;
        sum+=i;
    }while (sum < num);
    if (sum == num){return true;}
    else{return false;}
        
}


