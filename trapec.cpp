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
      if (side1 < 0 || side2 < 0 || side3 < 0 || side4 < 0){
                cout << "side can't < 0" << endl;
                return 0; 
            }
      if ((side1 + side2 + side3) <= side4 || (side1 + side2 + side4) <= side3 || (side1 + side3 + side4) <= side2 || (side2 + side3 + side4) <= side1){
      cout << "Neverno, tak nelza" << endl; 
        return 1;
      } 
      double perimetr = side1 + side2 + side3 + side4;
      cout << perimetr << endl;
      break;
    
    }
    case 2: {
      double hieght, base1, base2;
      cout << "Введите высоту и основания трапеции:" << endl;
      cin >> hieght >> base1 >> base2;
      if (hieght < 0 || base1 < 0 || base2 < 0){
                cout << "side can't < 0" << endl;
                return 0; 
            }
      double area = (hieght * (base1 + base2)) / 2;
      cout << area << endl;
      break;
    }
    case 3: {
      double base1, base2;
      cout << "Введите основания трапеции:" << endl;
      cin >> base1 >> base2;
      if (base1 < 0 || base2 < 0){
                cout << "side can't < 0" << endl;
                return 0; 
            }
      double middle = (base1 + base2) / 2;
      cout << middle << endl;
      break;
    }
    default: return 0;
    }
    c = getchar();
  }
}
