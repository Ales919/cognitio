//database.h
//Alexandros Osana ®
//Database project, Google Cpp tutorials
//Music Database

#include "composer.h"
const int kMaxComposers = 100;

class database{
    
public:
    
    database();
    ~database();
    
    //Getters and Setters (Accessors and Mutators)
    
    // Add a new composer using operations in the Composer class.
    // For convenience, we return a reference (pointer) to the new record.
    composer& AddComposer(string in_first_name, int in_yob, int ranking);
    // Search for a composer based on last name. Return a reference to the
    // found record.
    
    //TODO!!!//composer& GetComposer(string in_last_name);
    
    // Display all composers in the database.
    void displayAll();
    
    // Sort database records by rank and then display all.
    //void DisplayByRank();
    
private:
    // Store the individual records in an array.
    composer Composers_[kMaxComposers];
    // Track the next slot in the array to place a new record.
    int next_slot_;
    
};




