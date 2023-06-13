#include <QCoreApplication>
#include <iostream>
#include <windows.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int quantity;

    for (int i = 100; i <= 999; ++i)
    {
        int l = i % 10;        // (xyz) = z
        int m = i / 100;       // (xyz) = x
        int h = i % 100 / 10;   // (xyz) = y

        if (h == m || m == l || l == h)
        {
            quantity++;
        }

    }

    qDebug () << "Кількість чисел діапазону 100-999 з двома або трьома однаковими цифрами: " << quantity;

    return a.exec();
}
