#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    setlocale(LC_ALL, "Russian");
    
    int n;
    string s,d,c;
    
    cin >> n;

    if (n >= 100 & n <= 999){
        
        if (n / 100 == 1){
            s = "сто";
        }
        else if (n / 100 == 2){
            s = "двести";
        }
        else if (n / 100 == 3){
            s = "триста";
        }
        else if (n / 100 == 4){
            s = "четыреста";
        }
        else if (n / 100 == 5){
            s = "пятьсот";
        }
        else if (n / 100 == 6){
            s = "шестьсот";
        }
        else if (n / 100 == 7){
            s = "семьсот";
        }
        else if (n / 100 == 8){
            s = "восемьсот";
        }
        else if (n / 100 == 9){
            s = "девятьсот";
        }
        
        
        if (n % 100 / 10 == 1){
            if (n % 10 == 0){
                d = "десять";
                c = "";
            }
            if (n % 10 == 1){
                d = "одиннадцать";
                c = "";
            }
            if (n % 10 == 2){
                d = "двенадцать";
                c = "";
            }
            if (n % 10 == 3){
                d = "тринадцать";
                c = "";
            }
            if (n % 10 == 4){
                d = "четырнадцать";
                c = "";
            }
            if (n % 10 == 5){
                d = "пятнадцать";
                c = "";
            }
            if (n % 10 == 6){
                d = "шестнадцать";
                c = "";
            }
            if (n % 10 == 7){
                d = "семнадцать";
                c = "";
            }
            if (n % 10 == 8){
                d = "восемнадцать";
                c = "";
            }
            if (n % 10 == 9){
                d = "девятнадцать";
                c = "";
            }
            
        }
        if (n % 100 / 10 == 2){
            d = "двадцать";
        }
        else if (n % 100 / 10 == 3){
            d = "тридцать";
        }
        else if (n % 100 / 10 == 4){
            d = "сорок";
        }
        else if (n % 100 / 10 == 5){
            d = "пятьдесят";
        }
        else if (n % 100 / 10 == 6){
            d = "шестьдесят";
        }
        else if (n % 100 / 10 == 7){
            d = "семьдесят";
        }
        else if (n % 100 / 10 == 8){
            d = "восемьдесят";
        }
        else if (n % 100 / 10 == 9){
            d = "девяносто";
        }
        else if (n % 100 / 10 == 0){
            d = " ";
        }
        
        if ((n % 10 == 0) && (n % 100 / 10 != 1)){
            c = "";
        }
        else if ((n % 10 == 1) && (n % 100 / 10 != 1)){
            c = "один";
        }
        else if ((n % 10 == 2) && (n % 100 / 10 != 1)){
            c = "два";
        }
        else if ((n % 10 == 3) && (n % 100 / 10 != 1)){
            c = "три";
        }
        else if ((n % 10 == 4) && (n % 100 / 10 != 1)){
            c = "четыре";
        }
        else if ((n % 10 == 5) && (n % 100 / 10 != 1)){
            c = "пять";
        }
        else if ((n % 10 == 6) && (n % 100 / 10 != 1)){
            c = "шесть";
        }
        else if ((n % 10 == 7) && (n % 100 / 10 != 1)){
            c = "семь";
        }
        else if ((n % 10 == 8) && (n % 100 / 10 != 1)){
            c = "восемь";
        }
        else if ((n % 10 == 9) && (n % 100 / 10 != 1)){
            c = "девять";
        }
    }
    else{
        cout << "НЕВЕРНОЕ ЗНАЧЕНИЕ" << endl;
    }
    
    cout << s  << " " << d << " " << c << endl;
    return 0;
}
