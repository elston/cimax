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
    // ...
    int i=0;
    float result, val = 1;
    int bulet, stem;
    int val_bulet, val_stem;    

    // ...
    Calc calc;
    result = calc.rnd(sqrt(2)/2);
    // ...
    // bulet = std::modf(result, &stem);
    bulet = calc.bulet(result);
    stem = (int)result;
    std::cout << std::fixed << stem << "\t" << bulet << std::endl;
    std::cout << "===========================" << std::endl;    

    // ..
    do {
        i++;

        // ...
        val = val * (1 + (pow(-1,i)/(2*i+1)));

        // ...
        val_bulet = calc.bulet(val);
        val_stem = (int)val;
        std::cout << std::fixed 
            << i << "\t"         
            << val << "\t" 
            << val_stem << "\t" 
            << val_bulet 
        << std::endl;

    } while (val_bulet != bulet);
    // } while (i < 10);    

    // ...
    std::cout << "===========================" << std::endl;        
    std::cout << "Количество циклов: " << i << std::endl;
};