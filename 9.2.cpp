#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    
    cin >> n;
    
    if (n == 0)
    {
        cout << "Север" << endl;
    }
    else if (n == 1)
    {
        cout << "Запад" << endl;
    }
    else if (n == -1)
    {
        cout << "Восток" << endl;
    }
    else
    {
        cout << "Неверное значение" << endl;
    }
    
    
    
    return 0;
}
