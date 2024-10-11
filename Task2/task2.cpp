#include <iostream>
#include <cmath>

double program(){
    int n=1;
    double e=0.001, dn, s=0, dn1;
    
    do {
       dn=1/pow(2, n)+1/pow(3, n);
       dn1=1/pow(2, n-1)+1/pow(3, n-1);
       s+=dn;
       n++;
    } while (fabs(dn-dn1)>e);
    
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
            double result = program();
            std::cout << "Результат программы: " << result << "\n"; 
            }
            else if (number == 3) {
                std::cout << "Найти сумму ряда\n";
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