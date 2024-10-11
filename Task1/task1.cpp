#include <iostream>
#include <cmath>

int program() {
    int ai,bi,s,abi;
    s = 0;
    int i = 1;
    while (i<31) {
    if (i%2==0) {
    ai = i/2;
    } else {
        ai = i;
    }
    if (i%2 == 0) {
    bi = pow(i,3);
    } else {
        bi = pow(i,2);
    }
    abi = pow((ai-bi),2);
    s = s + abi;
    i++;
    }
    return s;
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
            int result = program();
            std::cout << "Результат программы: " << result << "\n"; 
            }
            else if (number == 3) {
                std::cout << "Найти сумму\n";
            }
            else if (number == 4) {
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