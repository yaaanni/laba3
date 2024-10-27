#include <iostream>
#include <limits>
#include <vector>
using namespace std;
// Функция для вычисления натурального логарифма
double natural_log(double x1) {

    // Приведение x к значению в диапазоне (0, 2]
    int k = 0;
    while (x1 > 2.0) {
        x1 /= 2.0;
        k++;
    }
    while (x1 <= 1.0) {
        x1 *= 2.0;
        k--;
    }

    // Разложение в ряд Тейлора для ln((1+y)/(1-y))
    double y = (x1 - 1) / (x1 + 1);
    double y2 = y * y;
    double term = y;
    double result = 0.0;
    int n = 1;

    while (std::abs(term) > std::numeric_limits<double>::epsilon()) {
        result += term;
        term *= y2 * (2 * n - 1) / (2 * n + 1);
        n++;
    }

    result *= 2;
    result += k * 0.69314718056; // Добавление ln(2^k) = k * ln(2)

    return result;
}


int program() 
{
    int n;
    int i = 0;
    int sign = 1;
    int sign1 = 1;
    int sign2 = 1;
    long long int f = 1;
    long long int f1 = 1;
    long long int f2 = 1;
    int q = 0;
    int m = 1;
    double x, x1;
    int xm;
    std::cout << "Введите значение числа х (для синуса и косинуса - градусную меру угла) "<< std::endl; 
    std::cin >> x;
    while (std::cin.fail()){
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Введите значение повторно:";
    std::cin >> x;
}
    x1 = x;
    int k = 0;
    //Приведение угла от -360 до 360
    while (x > 360) {
        x /= 360;
        k++;
    }
    while (x <= -360) {
        x *= -360;
        k--;
    }

    int x2 = x;
    if (x >= 360){
        double xl = x;
        double a = xl / 360;
        int b = x / 360;
        double c = a - b; x = c * 360;
    }
    if (x < 0 && x >= -360){
        x = 360 + x;
    }
    if (x < -360){
        double  xl = x;
        double a = xl / 360;
        int b = x / 360;
        double c = a - b; 
        x = 360 + (c * 360);

}
    xm = x;
    if (x > 180)
        x = x - 180; 
    if(x1<0) 
        x1 = x1*(-1);
        x = x * 3.141592 / 180;
    double d = x;
    double sin1 = 0;
    double sin2 = 1;
    double eps = 0.000001;

while (abs(sin1-sin2) > eps) {
    sin2 = sin1;
    sin1 = sin1 + sign * (d/f);
    d = d*x*x;
    f = f*(m+1)*(m+2);
    m = m+2;
    sign = - sign;
    i++;
}
double d1 = 1;
double cos1 = 0;
double cos2 = 1;
while (abs(cos1-cos2) > eps) {
    cos2 = cos1;
    cos1 = cos1 + sign1 * (d1/f1);
    d1 = d1*x*x;
    f1 = f1*(q+1)*(q+2);
    q = q+2;
    sign1 = - sign1;
    i++;
}
double ln_x = natural_log(x1);
if (xm >= 0 & xm < 90){
    if (cos1 < 0)
        cos1 = cos1 * (-1);
    if (sin1 < 0)
        sin1 = sin1 * (-1);
}
else if (xm >= 90 & xm <= 180){
    if (cos1 > 0)
        cos1 = cos1 * (-1);
    if (sin1 < 0)
        sin1 = sin1 * (-1);
}
else if (xm > 180 & xm <= 270){
    if (cos1 > 0)
        cos1 = cos1 * (-1);
    if (sin1 > 0)
        sin1 = sin1 * (-1);
}
else if (xm > 270 & xm < 360){
if (cos1 < 0)
cos1 = cos1 * (-1);
if (sin1 > 0)
sin1 = sin1 * -(1);
}
std::cout << "Синус угла равен " << sin1 << std::endl;
std::cout<< "Косинус угла равен " << cos1 << std::endl;
std::cout << "Натуральный логарифм числа равен " << ln_x << std::endl;

if (sin1 < cos1 & sin1 < ln_x)
std::cout<<"Наименьшее значение из трех величин: sin(x), cos(x) и ln(x) - это значение sin(x), = "<<sin1<<std::endl;
if (cos1 < sin1 & cos1 < ln_x)
std::cout<<"Наименьшее значение из трех величин: sin(x), cos(x) и ln(x) - это значение cos(x), = "<<cos1<<std::endl;
if (ln_x < cos1 & ln_x < sin1)
std::cout<<"Наименьшее значение из трех величин: sin(x), cos(x) и ln(x) - это значение ln(x), = "<<ln_x<<std::endl;
return sin1;
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
                std::cout << "Сравнить синус,косинус,логарифм\n";
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
