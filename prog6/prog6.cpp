//example one class , two objects

#include <iostream>
using namespace std;
// Declar name of class cReactangle
class cReactangle {
    int x, y;
    public:
    void set_values (int, int );
    int area () {return (x*y);}
};
//function name cReactange
void cReactangle::set_values (int a, int b)
{
    x = a;
    y = b;

}

int main () {
    cReactangle rect, rectb ;
    rect.set_values (3, 4);
    rectb.set_values(5,6);
    cout << " area1: "<< rect.area() ;
    cout << " area2: "<< rectb.area() ;
    return 0;
}