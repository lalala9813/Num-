#include <iostream>

using namespace std;

int Num(int n)
{
    if(n==11){/*Le puse 11 para que llegue hasta 10 cuando imprima*/
            /*Mi funcion imprimira desde el el numero que definamos en la consola que sea menor que el limite*/
        return 0;
    }
    else{
        cout << n <<endl;
        Num(n+1);
    }
}

int main()
{
    int b;
    cout << "Ingrese el numero desde el que quiere empezar del 1 al 10 = ";
    cin >> b;/*Le pedimos al usuario un numero del 1 al 10*/
    Num(b);
    return 0;
}
