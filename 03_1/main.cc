#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

class Calc{
    // ...
private:
    int pw;

public:
    Calc(){
        pw = pow(10,6);
    };
    // ...
    float rnd(float v){
        return round( v * pw ) / pw;
    };

    // ...
    int bulet(float v){
        return (int)(v * pw) % pw;
    };

};


// ....
int main(){
    int a,b,x;
    float y;

    // ...
    std::cout << "Введите целочисленное значение 'a' (малый радиус) для элипса" << std::endl;
    std::cin >> a;
    std::cout << "Введите целочисленное значение 'b' (большой радиус) для элипса" << std::endl;
    std::cin >> b;

    // ..
    std::cout << "============ координаты точек элипса ===============" << std::endl;
    std::cout << "x" << "\t" << "верх y" << "\t" << "низ y " << "\t\t" << "целые координаты y принадлежащие элипсу" << std::endl;    
    std::cout << "===================================================" << std::endl;    
    for (int x = -b; x <= b; ++x){

        // ...
        y = sqrt((1-(pow(x,2)/pow(b,2)))*pow(a,2));
        // ....
        std::cout << x << "\t" << y << "\t" << "-" << y ;
        // ...
        std::cout << "\t\t";
        for (int i = -y; i <= y; ++i){
            std::cout << i << ", ";
        };
        // ...
        std::cout << std::endl;
    };
};