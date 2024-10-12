#include <iostream>
#include <cmath>

int program() {
    int n,number;
    double y,x;
    double sum;
    std::cout << "Введите количество членов ряда: \n";
    std::cin >> n;
    while (std::cin.fail()){
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::cout << "Введите значение повторно:";
  std::cin >> n;
}
    std::cout << "Введите количество чисел, от которых хотите посчитать значение функции\n";
    std::cin >> number;
    while (std::cin.fail()){
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::cout << "Введите значение повторно:";
  std::cin >> number;
}
int minValue = 0.1; 
    int maxValue = 1; 
    double array[number];
    std::cout << "Введите эти числа\n";
    for (int i = 0; i < number; i++) {
        std::cin >> array[i];
        while (std::cin.fail()){
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::cout << "Введите значение повторно:";
  std::cin >> array[i];
}
 while (array[i] < minValue || array[i] > maxValue) {
            std::cout << "Значение должно быть в интервале от " << minValue << " до " << maxValue << ". Попробуйте снова: \n";
            std::cin >> array[i];
        }
        
        x = array[i];

        

        for (int i = 0; i < number; i++) {
        y = (exp(x)-exp(-x))/2;

        //ряд
    double stepen;
    i = 0;
    double fakt = 1;
    double m = 1;
    double d = x;
    while (i < n) {
        sum = sum + (d/fakt);
        d = d * x * x;
        fakt = fakt * (m+1) * (m+2);
        m = m +2;
        i++;
    }
    }
        std::cout << "Значение по ряду от x " << x << ": " << sum << std::endl;
        std::cout << "Значение по cmath от x " << x << ": " << y << std::endl;
    }

    //ряд
    int stepen;
    int i = 0;
    int fakt = 1;
    int m = 1;
    double d = x;
    while (i < n) {
        sum = sum + (d/fakt);
        d = d * x * x;
        fakt = fakt * (m+1) * (m+2);
        m = m +2;
        i++;
    }
    std::cout << sum;
    return 0;
}

int menu() {
    std::cout << "Выберите интересующий пункт меню: \n";
    std::cout << "1. Кто выполнил задание\n";
    std::cout << "2. Результат программы\n";
    std::cout << "3. Суть задания\n";
    std::cout << "4. Выход из программы\n";
    std::cout << "5. Вариант\n";
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
                std::cout << "Вычислить значение функции по симэсу и ряду\n";
            }
            else if (number == 4) {
                std::cout << "Выход выполнен успешно!\n";
                return 0;
            }
            else if (number == 5) {
                std::cout << "Вариант: 6\n";
            }
            else  
            {
                std::cout << "Неверно ввели значение, попробуйте еще раз: \n";
                continue;
            }
            std::cout << ">>>\n";
    }
}