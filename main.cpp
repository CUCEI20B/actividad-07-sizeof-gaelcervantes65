#include <iostream>

using namespace std;

int main() {
    string cadena;

    cin >> cadena;

    if(cadena == "char"){
        cout << sizeof(char);
    }

    else if(cadena == "int"){
        cout << sizeof(int);
    }

    else if(cadena == "short"){
        cout << sizeof(short);
    }

    else if(cadena == "float"){
        cout << sizeof(float);
    }

    else if(cadena == "double"){
        cout << sizeof(double);
    }

    else if(cadena == "long"){
        cout << sizeof(long);
    }

    return 0;
}