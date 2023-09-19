#include <iostream>
#include <string>

using namespace std;

struct account{
    int account_Num;
    string Name;
    float Money;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    account A;
    cout << "введите номер счета: ";
    cin >> A.account_Num;
    cout << endl << "введите имя владельца: ";
    cin >> A.Name;
    cout << endl << "введите баланс: ";
    cin >> A.Money;
    cout << endl << "введите новый баланс: ";
    cin >> A.Money;
    cout << endl << "Ваш счёт: ";
    cout << A.account_Num << ", " << A.Name << ", " << A.Money;
}