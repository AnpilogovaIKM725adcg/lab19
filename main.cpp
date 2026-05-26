#include <iostream>
using namespace std;

template <class T>
void SortThree(T &a, T &b, T &c)
{
    T temp;

    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }

    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
}

int main()
{
    int i1, i2, i3;

    cout << "Введіть цілі числа:" << endl;

    cout << "i1 = ";
    cin >> i1;

    cout << "i2 = ";
    cin >> i2;

    cout << "i3 = ";
    cin >> i3;

    SortThree(i1, i2, i3);

    cout << "Відсортовані цілі числа: ";
    cout << i1 << " " << i2 << " " << i3 << endl;

    float f1, f2, f3;

    cout << "\nВведіть дійсні числа:" << endl;

    cout << "f1 = ";
    cin >> f1;

    cout << "f2 = ";
    cin >> f2;

    cout << "f3 = ";
    cin >> f3;

    SortThree(f1, f2, f3);

    cout << "Відсортовані дійсні числа: ";
    cout << f1 << " " << f2 << " " << f3 << endl;

    char c1, c2, c3;

    cout << "\nВведіть символи:" << endl;

    cout << "c1 = ";
    cin >> c1;

    cout << "c2 = ";
    cin >> c2;

    cout << "c3 = ";
    cin >> c3;

    SortThree(c1, c2, c3);

    cout << "Відсортовані символи: ";
    cout << c1 << " " << c2 << " " << c3 << endl;

}