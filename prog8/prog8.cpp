//example on constructors and destructors 
#include <iostream>
using namespace std;

class cReactangle {
    int *width, *height;
    public:
     cReactangle (int , int );
     ~cReactangle();
     int area(){return (*width * *height);}
};

cReactangle::cReactangle (int a, int b){
    width = new int;
    height = new int;
    *width = a;
    *height = b;

}
cReactangle::~cReactangle () {
    delete width;
    delete height;
}

int main (){
    cReactangle rect (3, 4), rectb(5, 6);
    cout << "react area:" << rect.area() << endl;
    cout << "rectb area: " << rectb.area() << endl ;
    return 0 ;
}