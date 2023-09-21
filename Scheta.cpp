#include <iostream>
#include <string>

using namespace std;

struct account {
    int account_Num= 123456789;
    string Name = "Andrey";
    float Money = 5000;
};

void change_account(account& A) {
    cout << endl << "введите новый баланс: ";
    cin >> A.Money;
}

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
    change_account(A);
    cout << endl << "Ваш счёт: ";
    cout << A.account_Num << ", " << A.Name << ", " << A.Money;
}