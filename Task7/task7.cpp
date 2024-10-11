#include <iostream>
#include <cmath>

int  program(){
    double max;
    int sum = 0, count = 0,temp;
    std::cout << "Введите число: " << std::endl;
    std::cin>>max;
for (int i = 1; i < max; i++)
{
    temp = i;
    while(temp != 0) {
        temp = temp / 10; ++count;
    }
    temp = i;
    while(temp)
    {
        sum+= pow(temp % 10, count);
        temp = temp / 10;
    }
    if(sum == i) std::cout << i << std::endl;  
sum = 0; count = 0;
}
int i;
return i;
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
                std::cout << "Найти числа Армстронга\n";
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
