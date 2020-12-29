//claasses example 
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
    cReactangle rect;
    rect.set_values (3, 4);
    cout << " area: "<<rect.area();
    return 0;
}