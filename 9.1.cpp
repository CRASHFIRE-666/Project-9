#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    setlocale(LC_ALL, "Russian");
    int d, m;
    string l;
    
    cin >> d >> m;
    
    if (d >= 1 && d <= 31 && m >= 1 && m <= 12)
    {
        switch (m)
        {
            case 1:
                l = "Январь";
                break;
            case 2:
                l = "Февраль";
                break;
            case 3:
                l = "Март";
                break;
            case 4:
                l = "Апрель";
                break;
            case 5:
                l = "Май";
                break;
            case 6:
                l = "Июнь";
                break;
            case 7:
                l = "Июль";
                break;
            case 8:
                l = "Авугст";
                break;
            case 9:
                l = "Сентябрь";
                break;
            case 10:
                l = "Октябрь";
                break;
            case 11:
                l = "Ноябрь";
                break;
            case 12:
                l = "Декабрь";
                break;
    }
        cout << d << " " << l << endl;
    }
    else
    {
        cout << "НЕВЕРНОЕ ЗНАЧЕНИЕ" << endl;
    }
    
    
    
    return 0;
}
