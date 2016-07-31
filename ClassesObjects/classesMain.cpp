// time.cpp, Maggie Johnson
// Description: A simple time class.

#include <iostream>
using namespace std;
/*
class Time {
private:
    int hours_;
    int minutes_;
    int seconds_;
public:
    void set(int h, int m, int s) {hours_ = h; minutes_ = m; seconds_ = s; return;}
    void increment();
    void display();
};

void Time::increment() {
    seconds_++;
    minutes_ += seconds_/60;
    hours_ += minutes_/60;
    seconds_ %= 60;
    minutes_ %= 60;
    hours_ %= 24;
    return;
}

void Time::display() {
    cout << (hours_ % 12 ? hours_ % 12:12) << ':'
    << (minutes_ < 10 ? "0" :"") << minutes_ << ':'
    << (seconds_ < 10 ? "0" :"") << seconds_
    << (hours_ < 12 ? " AM" : " PM") << endl;
}

int main() {
    Time timer;
    timer.set(23,59,58);
    for (int i = 0; i < 5; i++) {
        timer.increment();
        timer.display();
        cout << endl;
    }
}
*/
//-------------------------------------------------------
class rect
{
    float a,b;
public:

    rect(float in_a,float in_b){
        a = in_a;
        b = in_b;
        cout<<"Constructed with [a,b]: ["<<a<<","<<b<<"]"<<endl;
    }
    rect(){
        a = 0;
        b = 0;
        cout<<"Constructed"<<endl;
    }
    ~rect(){
        
        cout<<"Destructed"<<endl;
    }
    
    
   float embvado(){
        float E  = a*b;
        return E;
    }
    void set_ab(float in_a, float in_b){
        a = in_a;
        b = in_b;
        
    }
};


int main(){
    float E1, E2;
    rect rec1,rec2(2,2);
    //rec1.set_ab(2,4);
    //rec2.set_ab(3,4);

    
    E1 = rec1.embvado();
    E2 = rec2.embvado();
    
    cout<< "E1: "<<E1<< " || E2: "<< E2<< endl;
}









