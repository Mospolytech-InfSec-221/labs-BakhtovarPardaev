#include <iostream>

#include "C:\Users\kolobok\Desktop\programming\Project1\Project1\Position.h"
#include "C:\Users\kolobok\Desktop\programming\Project1\Project1\Krug.h"
#include "C:\Users\kolobok\Desktop\programming\Project1\Project1\S.h"
#include "C:\Users\kolobok\Desktop\programming\Project1\Project1\S_kruga.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int choise;
    double x, y, side, rad;
    int a = 0;
    while (a == 0)
    {
        std::cout << "��� �� ������ ���������?" "\n" << "1. ���� �������" "\n" << "2. ���� ����� �������������" "\n" << "3. ���� ������� ����������" "\n" << "4. ���� �������� �������������" "\n" << "5. ���� ������� ��������" "\n" "6. ���� ���������� � �������� �� �������" "\n" "7. ���� ���������� � �������� �� ������� ��������" "\n" "8. �����" "\n";
        cin >> choise;
        if (choise == 1) {
            cout << "������� x � y "; cin >> x >> y;
            Position a(x, y);
            a.out();
        }
        if (choise == 2) {
            cout << "������� ���������� ������ � ������ "; cin >> x >> y >> rad;
            Krug a(x, y, rad);
            a.out();
        }
        if (choise == 3) {
            cout << "������� ������ "; cin >> rad;
            Krug a(rad);
            a.out();
        }
        if (choise == 4) {
            cout << "������� ���������� ������ � ������� "; cin >> x >> y >> side;
            S a(x, y, side);
            a.out();
        }
        if (choise == 5) {
            cout << "������� ������� "; cin >> side;
            S a(side);
            a.out();
        }
        if (choise == 6) {
            cout << "������� ���������� ������ � ������ "; cin >> x >> y >> rad;
            S_kruga a(x, y, rad);
            a.Krug::out();
            a.Krug::out();
        }
        if (choise == 7) {
            cout << "������� ������� "; cin >> side;
            S_kruga a(side);
            a.Krug::out();
            a.S::out();
        }
        if (choise == 8) {
            a++;
        }
    }
    return 0;
}