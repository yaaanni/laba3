#include <iostream>
#include <cmath>

double task(double n){
    int i;
    double q = 2;
    double f;
double a = 0;
const double d = 1;
double dn;
double x = 1;

double eps = 0.001;

while (x > eps) {
     f= pow((q++),n);
    dn =  (d/f);
       x = dn;
    a = a + dn;
    i++;
}
std::cout << "Значение суммы: " << a << std::endl << " " << std::endl;
return a;
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
            std::cout << "Найти сумму ряда с точностью 0.001, общий член которого dn = 1/2^n + 1/3^n" << std::endl;
            variant = menu();
            break;
            
        case 3:
            double n;
            std::cout << "Введите n: ";
            std::cin >> n;
            while (std::cin.fail()){
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::cout << "Введите значение повторно:";
  std::cin >> n;
}
            task(n);
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