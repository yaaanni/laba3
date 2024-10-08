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
}

double taskcos(double x){
    double sc = (1 - x*x/2)*cos(x)-x/2*sin(x);
    return sc;
}



int menu()
{
    int variant;
    std::cout << "Выберите вариант\n" << std::endl;
    std::cout << "1. Кто выполнил задание\n"
         << "2. Суть задания\n"
         << "3. Результат программы\n"
         << "4. Перезапуск\n"
         << "5. Выход\n" << std::endl;
    std::cout << ">>> ";
    std::cin >> variant;
    while (std::cin.fail()){
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::cout << "Введите значение повторно:";
  std::cin >> variant;
}
    return variant;
}

int main(int argc, char* argv[]){


bool trr = true;
int variant = menu();

while (trr) {
    switch (variant) {
        case 1:
            std::cout << "Попова Яна" << std::endl;
            variant = menu();
            break;
        case 2:
            std::cout << "Высчитать значение функции через ряд и через симэс" << std::endl;
            variant = menu();
            break;
            
        case 3:
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
            task(n,x);
            std::cout << "Значение суммы по ряду:" << s << std::endl;
            taskcos(x);
            std::cout << "Значение суммы по симэсу:" << s << std::endl;
            variant = menu();
            break;
            
        case 4:
            std::cout << "Перезапуск" << std::endl << " " << std::endl;
            variant = menu();
            break;

        case 5:
            trr = false;
           
           std::cout << "Выход совершен успешно" << std::endl << " " << std::endl; 
            break;   
            
        default:
            std::cerr << "Вы выбрали неверный вариант" << std::endl << " " << std::endl;;
            variant = menu();
    }}


return 0;
}