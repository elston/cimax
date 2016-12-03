#include <iostream>
#include <string>


using namespace std;


int main(){
    // ..
    int age;
    string agestr = " год";
    // ..
    cout << "Введите возраст" << std::endl;
    cin >> age;        
    
    // ...
    if (age % 10 > 1) {
        agestr = " года";
    };

    // ...
    if (age % 10 > 4 || age % 10 < 1 || age % 100/10 == 1) {
        agestr = " лет";
    };

    std::cout << age << agestr << std::endl;
    // ...
    return 0;        
};
