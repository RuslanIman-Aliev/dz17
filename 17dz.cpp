// 17dz.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include"Book.h"
#include"Library.h"
#include"Magazine.h"
#include"Publication.h"
#include"PublicationException.h"
using namespace std;
int main()
{
    try {
        Book p("", "afh", 1990, "resume");
        p.show();
    }
    catch (PublicationException* m) {
        cout << "Message: " << m->showMessage() << endl;
    }
    try {
        Publication a("", "", 0);
    }
    catch (EditionYearException* m) {
        cout << "Message: " << m->showMessage() << endl;
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
