//
//  main.cpp
//  googleTutorial
//
//  Created by Osana Alexandros on 12/7/16.
//  Copyright © 2016 AlexOsna. All rights reserved.
//


#include <iostream>
#include <fstream>
//#include <string>
using namespace std;



/*
float salary1 (int sales)
{
    float s1 = 600 * 4;
    return s1;
}

float salary2(int sales)
{
    float s2 = 40 * 4 * 7 + (0.1 * (sales *225));
    return s2;
}

float salary3(int sales)
{
    float s3 = (0.1 * (sales *225)) + 20 * sales;
    return s3;
}
*/

/*
float input_grade(char *msg)
{
    float value;
    //cout<< "Entered the function"<< endl;
    cout << msg;
    if (!(cin >>value))
    {
        cout << "wrong input";
        exit(0);
    }
    cout<< endl;
    return value;
}*/
/*
void StartUp(){
    const char* intro_msg;
    intro_msg = "\nWelcome to Artillery.\nYou are in the middle of a war and being charged by thousands of enemies.\nYou have one cannon, which you can shoot at any angle.\nYou only have 10 cannonballs for this target...\nLet's begin...\n";
    cout << intro_msg<<endl;
}

int Fire(){
    
}
*/

int main() {
   //=========================================================================
    /*
    int input_var = 0;
    	do {
        cout << "Enter a number (-1 = quit): ";
        // The following line accepts input from the keyboard into
        // variable input_var.
        // cin returns false if an input operation fails, that is, if
        // something other than an int (the type of input_var) is entered.
        if (!(cin >> input_var)) {
            cout << "You entered a non-numeric. " << endl<< endl;
            cin.clear();
            cin.ignore(1000,'\n');
        }
        else if (input_var == -1) {
            cout << "You entered  the exit option: " << input_var << endl << endl;
        }
        else{
             cout << "You entered: " << input_var << endl<< endl;
        }
            
            
    } while (input_var != -1);
    cout << "All done." << endl;
     */
    //-----------------------------------------------------
    /*
    cout << "   1\t2\t3\t4\t5\t6\t7\t8\t9" << endl << "   -\t-\t-\t-\t-\t-\t-\t-\t-\t" << endl;
    for (int c = 1; c < 10; c++) {
        cout << c << "| ";
        for (int i = 1; i < 10; i++) {
            cout << i * c << '\t';
        }
        cout << endl;
    }
    */
    //-----------------------------------------------------
    /*
    int guess;
    
    srand (time(NULL));
    int secret_num = rand() % 11;
    bool terminationFlag = 0;
    cout<< "Let us play! Guess a number between 0 and 10"<< endl <<"-> ";
    do{
    cin >> guess;
    
    if ((!(guess)) || (guess >10) || (guess < 0)) {
        cout << "You entered a wrong element. Guess again from 0-10 " << endl<< endl;
        cin.clear();
        cin.ignore(100,'\n');
    }
    else{
        if (guess > secret_num) {
            cout<< " Guess lower"<<endl;
        }
        else if (guess == secret_num){
            cout<< "You got it...GG !!"<< endl<< endl;
            terminationFlag = 1;
        }
        else{cout<< " Guess higher"<<endl;
        }
    }
    }while (terminationFlag == 0);
    
    */
    
    //-----------------------------------------------------
    /*
    string str1 = "To be or not to be, that is the question";
    string str2 = "only ";
    string str3 = str1.substr(6, 12);
    str1.insert(32, str2);
    str1.replace(str1.find("to be", 0), 5, "to jump");
    str1.erase(9, 4);
    cout << str1 << endl;
    for (int i = 0; i < str3.length(); i++)
        cout << str3[i]; cout << endl;
    */
    //-----------------------------------------------------
    //int sales = 100;
    /*
    for (int sales=0; sales < 101; sales = sales +15){
    
        cout<< "Choice 1: For "<< sales<<" ----> "<< salary1(sales)<<" $ per month"<< endl;
        cout<< "Choice 2: For "<< sales<<" ----> "<< salary2(sales)<<" $ per month"<< endl;
        cout<< "Choice 3: For "<< sales<<" ----> "<< salary3(sales)<<" $ per month"<< endl<<endl;

    }
     */
    //-----------------------------------------------------
    /*
    char first_name[30], last_name[30]; int age;
    char file_name[20];
    // Collect the data.
    cout << "Enter First Name: "; cin >> first_name;
    cout << "Enter Last Name: "; cin >> last_name;
    cout << "Enter Age: "; cin >> age;
    cout << endl << "Enter the name of the file: "; cin >> file_name;
    
    // Create an ofstream called People, open the stream for output.
    ofstream People(file_name, ios::out);
    // Write the output to the stream.
    People << first_name << endl << last_name << endl << age << endl;
    */
    //-----------------------------------------------------

    /*
    float Final = 0, assignements = 0, midermEx = 0, finalEx = 0, participation = 0;
    
    char assign_msg[] = "Assigments grade (1-100): ", midermEx_msg[] = "Midterm grade (1-100): ",finalEx_msg[] = "Final Exam grade (1-100): ", part_msg[] = "Participation grade (0-100) ",DEBUG_IN;
    
    cout << endl;
    assignements =  input_grade(assign_msg);
	midermEx = input_grade(midermEx_msg);
    finalEx = input_grade(finalEx_msg);
    participation = input_grade(part_msg);
    
    Final = 0.4*assignements + 0.15*midermEx + 0.35*finalEx + 0.1*participation;
    cout<< "The final grade is: " << Final<< endl;
    
    if (finalEx < 50.0){
        cout<< "We will try again, together"<<endl;
    }else if (finalEx<70){
        cout<< "Good job!"<<endl;
    }else{
        cout<< "Great job. GG!!!"<<endl;
    }
    */
    
    
    //-----------------------------------------------------
    /*
    StartUp();
    int killed = 0;
    
    do {
        killed = Fire(); // Fire() contains the main loop of each round.
        cout << "I see another one, care to shoot again? (Y/N) " << endl;
        cin >> done;
    } while (done != 'n');
    cout << "You killed " << killed << " of the enemy." << endl;
    */
    
    //-----------------------------------------------------
    
    //=========================================================================
    
    return 0;
}






