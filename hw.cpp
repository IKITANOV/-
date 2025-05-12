#include <iostream>
#include <windows.h>
#include <locale.h>

using namespace std;

//int main() {
//   setlocale(LC_ALL, "ukr");
// int x1, y1, x2, y2, x, y;
//   cout << "кординаты верхнего левого (x1, y1): ";
//   cin >> x1 >> y1;
//   cout << "кординаты нижнего правого (x2, y2): ";
//   cin >> x2 >> y2;
 //  cout << "кординаты точек (x, y): ";
   //cin >> x >> y;

   //if (x >= x1 && x <= x2 && y >= y2 && y <= y1) {
     //  cout << "точке пренадлежит прямо.. угол" << endl;
   //}
   //else {
    //   cout << "очка НЕ пренадлежит прямо.. угол!" << endl;
   //}

   //return 0;
//}
//using namespace std;
//2 
//int main() {
//    int ticket;
//    cout << "введіть шестизначний номер квитка: ";
//    cin >> ticket;
//
//    if (ticket < 100000 || ticket > 999999) {
//        cout << "номер має бути шестизначним!" << endl;
//        return 0;
//    }
//
//    int firstHalf = ticket / 1000;
//    int secondHalf = ticket % 1000;
//
//    int sum1 = (firstHalf / 100) + ((firstHalf / 10) % 10) + (firstHalf % 10);
//    int sum2 = (secondHalf / 100) + ((secondHalf / 10) % 10) + (secondHalf % 10);
//
//    if (sum1 == sum2) {
//        cout << "це щасливий квиток!" << endl;
//    }
//    else {
//        cout << "це не щасливий квиток!" << endl;
//    }
//
//    return 0;
//}
//3
//int main() {
//    double a, b;
//    char operation;
//    cout << "введіть два числа (a b): ";
//    cin >> a >> b;
//    cout << "виберіть операцію (+, -, *, /, %): ";
//    cin >> operation;
//
//    switch (operation) {
//    case '+':
//        cout << "результат: " << a + b << endl;
//        break;
//    case '-':
//        cout << "результат: " << a - b << endl;
//        break;
//    case '*':
//        cout << "результат: " << a * b << endl;
//        break;
//    case '/':
//        if (b == 0) {
//            cout << "помилка: ділення на 0!" << endl;
//        }
//        else {
//            cout << "результат: " << a / b << endl;
//        }
//        break;
//    case '%':
//        if (b == 0) {
//            cout << "помилка: ділення на 0!" << endl;
//        }
//        else {
//            cout << "результат: " << (int)a % (int)b << endl;
//        }
//        break;
//    default:
//        cout << "невірна операція!" << endl;
//    }
//
//    return 0;
//}
//4
//int main() {
//    int number;
//    cout << "введіть число: ";
//    cin >> number;
//
//    cout << (number >= 0 && number <= 100 ? "число в діапазоні 0–100!" : "число не в діапазоні 0–100!") << endl;
//
//    return 0;
//}
//5
//int main() {
//    double number;
//    cout << "введіть число: ";
//    cin >> number;
//
//    cout << (number != (int)number ? "число має дробову частину!" : "число не має дробової частини!") << endl;
//
//    return 0;
//}
//6
//int main() {
//    srand(time(0));
//    cout << "задай питання мольфару: ";
//    string question;
//    cin >> question;
//
//    int answer = rand() % 3;
//
//    if (answer == 0) {
//        cout << "так!" << endl;
//    }
//    else if (answer == 1) {
//        cout << "ні!" << endl;
//    }
//    else {
//        cout << "не знаю..." << endl;
//    }
//
//    return 0;
//}# -
