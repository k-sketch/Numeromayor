#include <iostream>

using namespace std;

int main()
{
    float a;
    float b;
    float c;

    cout << "Primer numero: " << endl;
    cin >> a;

    cout << "Segundo numero: " << endl;
    cin >> b;

    cout << "Tercer numero" << endl;
    cin >> c;

    if(a>b)
        if(a>c)
            cout << a << " Es el mayor " << endl;

    if(b>a)
        if(b>c)
            cout << b << " Es el mayor " << endl;

    if(c>a)
        if(c>b)
            cout << c << " Es el mayor " << endl;

    return 0;
}
