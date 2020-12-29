//overloading class cpnstructors
#include <iostream>
using namespace std;

class cReactangle {
    int width , height;
    public:
     cReactangle();
     cReactangle( int , int);
     int area (void) { return(width*height);}
};

cReactangle:: cReactangle() {
    width = 5;
    height= 5;

} 
cReactangle::cReactangle (int a, int b){
    width = a;
    height = b;
}

int main() {
    cReactangle react(3, 4);
    cReactangle reactb;
    cout << "react area:" << react.area() << endl;
    cout << "rect area:" << reactb.area() << endl;
    return 0;
}