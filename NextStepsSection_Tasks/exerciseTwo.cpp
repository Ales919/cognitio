//Alex Osana
//ExerciseTwo of Google Cpp Tutorials, section: Next Steps

//THIS IS AN UNFINISHED WORK

#include <iostream>
#include <string>
using namespace std;


//TODO : Better string managment for New, Used, Req and Opt variables. Maybe use the <string> lib.



int main(){
    int doneFlag = 1,code = 0, booksOnHand = 0, enroll=0;
    bool RequiredFlag = 1,NewFlag = 1;
    float copyPrice = 0;
    //const char *New,*Used,*Req,*Opt;
    string NewMsg, ReqMsg;
   
    ReqMsg = (RequiredFlag == 1 ? "Required":"Optional");
    NewMsg = (NewFlag == 1 ? "New":"Used");
    
    
    while (doneFlag == 1){
        cout<<endl<<endl<<"***************************************************"<<endl;
        cout<<"*********************START*********************"<<endl;
        cout<<"***************************************************"<<endl;

        // INPUT
        cout<<"Please enter the book code: "; cin>> code;
        cout<<"single copy price ($): ";cin>> copyPrice;
        cout<<"number on hand: ";cin>> booksOnHand;
        cout<<"prospective enrollment: ";cin>> enroll;
        cout<<"Required or Optional [1/0]: ";cin>> RequiredFlag;
        cout<<"New or Uses [1/0]: ";cin>> NewFlag;
        
        //PRINT INPUT
        cout<<"***************************************************"<<endl;

        cout<<"Book code: #"<<code<<endl;
        cout<<"Price: $"<< copyPrice <<endl;
        cout<<"Inventory: "<< booksOnHand <<endl;
        cout<<"Enrollement: "<< enroll <<endl;
        
        cout<<endl<< "The book is "<<ReqMsg<<" and "<<NewMsg<<endl;
        
        /*
        if (RequiredFlag == 1){
            if NewFlag == 1{
                //blabla
            }else{
                //lalal
            }
        }else{
            if NewFlag == 1{
                //blabla
            }else{
                //lalal
            }
        }
        */
        
        //NEXT BOOK CHECK
        cout<<"***************************************************"<<endl;
        cout<<"***************************************************"<<endl;
        cout<<"Enter 1 to do another book, 0 to stop: ";
        cin>>doneFlag;
        
    }
    cout<<"***************************************************"<<endl;
    cout<<"Total for all orders: $"<<4000<<endl;
    cout<<"Profit: $"<<1000<<endl;
    cout<<"***************************************************"<<endl;
    
    return 0;
}
