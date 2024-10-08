#include <iostream>
#include <cmath>

int main() {
    double x = 1,pogr,y, e = 2.7182818284;
    int n;
    std::cout << "На сколько частей разделить область поиска корня?";
    std::cin >> n;
    int i=0;
    double arr[n];
    pogr = (3-x)/n;
    do {
    y = fabs(acos(pow(e,-x))-2*sin(x)); 
    std::cout << y << std::endl;
    x += pogr;
    arr[i]=y;
    i++;
    }
    while (x<3);
   

    double min = arr[0];
    for (int i = 0;i<n;i++){
         if(arr[i] < min)
    {
        min = arr[i];
    }

    }
    std::cout << min;
    
    return 0;
}