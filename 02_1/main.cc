
#include <algorithm> 
#include <iostream>


using namespace std;


class Calc{
    // ...
    int x,y,z,a,b, result;

public:

    // ..
    int is_kratno5(int v){
        if (v % 5 > 0){
            std::cout << "Введенное значение не кратно 5" << std::endl;
            exit(1);
        };
    };

    // ...
    int getdata(){
        cout << "Введите x" << std::endl;
        cin >> x;
        cout << "Введите y" << std::endl;
        cin >> y;
        cout << "Введите z" << std::endl;
        cin >> z;

        // ...
        cout << "Введите a (значение должно быть кратно 5)" << std::endl;
        cin >> a;
        this->is_kratno5(a);


        // ...
        cout << "Введите b (значение должно быть кратно 5)" << std::endl;
        cin >> b;
        this->is_kratno5(b  );

        // ...
        return 0;
    };

    // ...
    void printdata(){
        std::cout << "Результат вычеслений:" << std::endl;            
        std::cout << result << std::endl;
    };

    // ...
    int min(){
        return std::min(std::min(x,y),z);         
    };

    // ...
    void  calculate(){
        result  = (a * this->min()) - b;
    };

};

int main(){
    Calc calc;
    if (calc.getdata() < 0){
        return 0;
    };
    calc.calculate();
    calc.printdata();

    // ...
    return 0;        
};
