#include <iostream>
#include <cmath>

double program() {

double a,b,y,x,A,B,H,M;
double pi = 3.14159265;
B = 90;
M = 20;
A = 0;
H = (90-A)/20;
for (int i = 0; A<=90; i++) {
    x = A + i*(B/M-A/M);
    a = sin(x*pi/180);
    b = cos(x*pi/180);
    y = a - b;
    A++;
    std::cout << "Результат: " << y << std::endl;
}
return y;
}

int menu() {
    std::cout << "Выберите интересующий пункт меню: \n";
    std::cout << "1. Кто выполнил задание\n";
    std::cout << "2. Результат программы\n";
    std::cout << "3. Суть задания\n";
    std::cout << "4. Выход из программы\n";
    std::cout << ">>>\n";

    int n;
    while (!(std::cin>> n) || (std::cin.peek() != '\n')) {
        std::cin.clear();
        while (std::cin.get() != '\n') {
        }
        return 0;
    }
    return n;
}

int main() {
    while (true) {
        int number = menu();

        if (number == 1) {
            std::cout << "Попова Яна\n";     
            }
            else if (number == 2) {
            double result = program();
            }
            else if (number == 3) {
                std::cout << "Вычислить значение функции\n";
            }
            else if (number ==4) {
                std::cout << "Выход выполнен успешно!\n";
                return 0;
            }
            else  
            {
                std::cout << "Неверно ввели значение, попробуйте еще раз: \n";
                continue;
            }
            std::cout << ">>>\n";
    }
}