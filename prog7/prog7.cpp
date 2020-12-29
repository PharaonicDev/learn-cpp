// example class constructor 
#include <iostream>
using namespace std;

class cRectangle 
{
    int width , height;
    public:
    cRectangle (int , int );
    int area(){return (width*height);}
};
cRectangle::cRectangle (int a , int b){
    width  = a;
    height = b;
}

int main() {
    cRectangle rect(3, 4);
    cRectangle rectb(5, 6);
    cout << "rect area"  << rect.area() << endl;
    cout << "rectb area "<< rectb.area() << endl;
}