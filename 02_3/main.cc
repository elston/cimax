#include <iostream>
#include <string>


using namespace std;


int main(){

    // ..
    int week;
    string weekstr[] = {
        "понедельник",
        "вторник",
        "среда",
        "четверг",
        "пятница",
        "суббота",
        "воскресенье"
    };

    // ..
    cout << "Введите порядковый номер дня недели (от 1 до 7)" << std::endl;
    cin >> week;        
    // ...  
    if (week < 1 || week > 7) {
        std::cout << "Некоректный номер дня недели" << std::endl;
        return 1;
    };

    // ...
    std::cout << weekstr[week - 1] << std::endl;
    return 0;        
};
