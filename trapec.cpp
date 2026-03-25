#include <iostream>
#include <locale.h>
using namespace std;

int main() {
  int choice; char c;
  setlocale(LC_ALL, "");
  while (1){
    cout << "Выберите, что вы хотите найти у трапеции:" << endl << "1.Периметр" << endl << "2.Площадь" << endl << "3.Длина средней линии" << endl;
    cin >> choice;

    switch (choice) {
    case 1: {
      double side1, side2, side3, side4;
      cout << "Введите длины четырёх сторон трапеции:" << endl;
      cin >> side1 >> side2 >> side3 >> side4;
      double perimetr = side1 + side2 + side3 + side4;
      cout << perimetr << endl;
      break;
    }
    case 2: {
      double hieght, base1, base2;
      cout << "Введите высоту и основания трапеции:" << endl;
      cin >> hieght >> base1 >> base2;
      double area = (hieght * (base1 + base2)) / 2;
      cout << area << endl;
      break;
    }
    case 3: {
      double base1, base2;
      cout << "Введите основания трапеции:" << endl;
      cin >> base1 >> base2;
      double middle = (base1 + base2) / 2;
      cout << middle << endl;
      break;
    }
    default: return 0;
    }
    c = getchar();
  }
}