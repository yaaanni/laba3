#include <iostream>
#include <cmath>

int program() {
    int koef = 1;
    int s1;
    int an;
    std::cout << "Введите а0: \n";
    std::cin >> an;
    while (std::cin.fail()){
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::cout << "Введите значение повторно:";
  std::cin >> an;
}
    std::cout << "Введите n: \n";
    int n;
    std::cin >> n;
    while (std::cin.fail()){
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::cout << "Введите значение повторно:";
  std::cin >> n;
}

   for (int i=0;i<n;i++) {
    koef = koef*(-2);
    std::cout << koef << std::endl;
   }
    s1 = ((an*koef)+2)/6;

    if (((an*koef)+2)%6 == 0) {
    return s1;
    } 
    else 
    {
    std::cout << "Переполнение, попробуйте еще раз\n";
    program();
    return 0;
}

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