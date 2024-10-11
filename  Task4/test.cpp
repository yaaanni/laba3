#include <iostream>
#include <cmath>   

double task(double n, double x){
    

    double r = 1, s = 1;
    for (int i = 1; i <= n; i++)
    {
        r *= -x * x / (2 * i) / (2 * i - 1);
        s += r * (2 * i * i + 1);
    }
    return s;
    std::cout << s;
}

double taskcos(double x){
    double sc = (1 - x*x/2)*cos(x)-x/2*sin(x);
    return sc;
}


double program() {
    double n;
            double x;
            std::cout << "Введите n: ";
            std::cin >> n;
            while (std::cin.fail()){
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::cout << "Введите значение повторно:";
  std::cin >> n;
            }
            std::cout << "Введите x: ";
            std::cin >> x;
            while (std::cin.fail()){
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::cout << "Введите значение повторно:" << std::endl;
  std::cin >> x;
}           double s;
            double sc;
            task(n,x);
            std::cout << "Значение суммы по ряду:" << s << std::endl;
            taskcos(x);
            std::cout << "Значение суммы по симэсу:" << s << std::endl;
            return s,sc;
}


int menu() {
    std::cout << "Выберите интересующий пункт меню: \n";
    std::cout << "1. Кто выполнил задание\n";
    std::cout << "2. Результат программы\n";
    std::cout << "3. Суть задания\n";
    std::cout << "4. Выход из программы\n";

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
    }
}