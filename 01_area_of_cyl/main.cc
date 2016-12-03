#define _USE_MATH_DEFINES

#include <math.h>
#include <iostream>

using namespace std;


class Calculate{
    // ...
    int r,h;
    float a;

    // ...
    public:
        void getdata(){
            cout << "Введите радиус" << std::endl;
            cin >> r;
            cout << "Введите высоту" << std::endl;
            cin >> h;        
        };

        // ...
        void printdata(){
            std::cout << "Площадь цилиндра:" << std::endl;            
            std::cout << a << std::endl;
        };

        // ...
        void  surfacearea(){
            a = (( 2 * M_PI * r * r ) + ( 2 * M_PI * r * h ));
        };
};

int main(){
    Calculate g;
    g.getdata();
    g.surfacearea();
    g.printdata();

    // ...
    return 0;        
};
