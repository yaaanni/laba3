#include <iostream>

using namespace std;


double sin(double x) {
    int sign = 1;
    long long int f = 1;
    int m = 1;
    double d = x;
    double sinx1 = 0;
    double sinx2 = 1;
    double eps = 0.000001;

    while (abs(sinx1-sinx2)>eps) {
        sinx2 = sinx1;
        sinx1 = sinx1 + sign*(d/f);
        d = d*x*x;
        f = f*(m+1)*(m+2);
        m = m + 2;
        sign = - sign;
    }
    std::cout << "sin: " << sinx1 << std::endl;
    return sinx1;
}

double cos(double x) {
    double d1 = 1;
    double cosx1 = 0;
    double cosx2 = 1;
    int sign1 = 1;
    long long int f1 = 1;
    int m1 = 0;
    double eps = 0.000001;

    while (abs(cosx1-cosx2)>eps) {
        cosx2 = cosx1;
        cosx1 = cosx1 + sign1*(d1/f1);
        d1 = d1*x*x;
        f1 = f1*(m1+1)*(m1+2);
        m1 = m1 + 2;
        sign1 = - sign1;
    }
    std::cout << "cos: " << cosx1 << std::endl;
    return cosx1;
}

int main() {
    double x;
    std::cout << "vvedite x: ";
    std::cin >> x;

if (x>180 & x < 360) {
    x = x - 360;
}
else if (x > 360) {
  double  a = x / 360;
  int b = x / 360;
  double c = a - b; x = c * 360;
  while (x > 360) {
    x = x - 360;
  } if (x>180 & x < 360) {
    x = x - 360;
  }
  }
    x = x*3.141592/180;
    sin(x);
    cos(x);
    return 0;
}