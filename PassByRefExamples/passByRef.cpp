#include <iostream>
using namespace std;

void DoIt(int &foo, int goo);
void plot(int a, int b){
    cout << a <<"  "<< b<< endl<<endl;
}

int main() {
    int *foo, *goo;
    foo = new int;
    goo = new int;
    
    *foo = 1;
    *goo = 3;
    cout<< endl << "a: ";
    plot(*foo,*goo);
    
    
    *foo = *goo + 3;
    cout<< "b: ";
    plot(*foo,*goo);

    foo = goo;
    cout<< "c: ";
    plot(*foo,*goo);

    *goo = 5;
    cout<< "d: ";
    plot(*foo,*goo);

    *foo = *goo + *foo;
    cout<< "e: ";
    plot(*foo,*goo);

    DoIt(*foo, *goo);
    cout<<"-----------------------------"<<endl<< "DoIt returns: ";
    plot(*foo,*goo);

    //cout << (*foo) << endl;
}

void DoIt(int &foo, int goo) {
    
    cout<< "What happens in DoIt(*foo, *goo):"<<endl<<"-----------------------------"<<endl<<endl;
    
    cout<< "f: ";
    plot(foo,goo);
    
    foo = goo + 3;
    cout<< "g: ";
    plot(foo,goo);
    
    goo = foo + 4;
    cout<< "h: ";
    plot(foo,goo);
    
    foo = goo + 3;
    cout<< "i: ";
    plot(foo,goo);
    
    goo = foo;
    cout<< "j: ";
    plot(foo,goo);
}