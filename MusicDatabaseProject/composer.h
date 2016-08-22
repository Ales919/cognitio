//composer.h
//Alexandros Osana ®
//Database project, Google Cpp tutorials
//Music Database

const int kDefaultRanking = 10;

class composer{
    
public:
    composer();
    ~composer();

    //Getters and Setters (Accessors and Mutators)
    // Accessors and Mutators and Primary actions of the class
    void set_first_name(string in_first_name);
    string first_name(); // function to input first name
    void set_last_name(string in_last_name);
    string last_name();
    void set_composer_yob(int in_composer_yob);
    int composer_yob();
    void set_composer_genre(string in_composer_genre);
    string composer_genre();
    void set_ranking(int in_ranking);
    int ranking();
    void set_fact(string in_fact);
    string fact();
    
    // Methods
    void promote(int increment);
    void demote (int decrement);
    void display();

private:
    string first_name_;
    string last_name_;
    int composer_yob_; // year of birth
    string composer_genre_; // baroque, classical, romantic, etc.
    string fact_;
    int ranking_;
};
