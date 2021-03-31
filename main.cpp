

//  CALCULADORA DE UNA OPERACION EN LOOP
//  Camilo Navarro V.
//  Pensamiento Algorítmico
//  Pontifícia Universidad Javeriana

#include <iostream>
using namespace std;
int main()
{
    char c = 's';
    while (c != 'n')
    {
        float x, y, a;
        char o;
        cout << "Ingrese un numero, un operador y otro numero 'ej 5+5'" << endl;
        cin >> x >> o >> y;
        switch(o)
        {
            case '+':
                a=x+y;
                cout<<"Respuesta"<< " = "<<a<<endl;
                break;
            case '-':
                a=x-y;
                cout<< "Respuesta"<<" = "<<a<<endl;
                break;
            case '*':
                a=x*y;
                cout<< "Respuesta"<<" = "<<a<<endl;
                break;
            case '/':
            {
                if (y != 0)
                {
                    a=x/y;
                    cout<< "Respuesta"<<" = "<<a<<endl;
                }
                else
                    cout << "Error, n/0 = indefinido"<<endl;
            }
                break;
                
            default: cout << "Error, operacion no valida"<<endl;
        }
        cout <<"Teclee 's' para otra operacion, o 'n' para finalizar"<< endl;
        cin >> c;
    }
    
    
    cout <<"Fin del programa"<< endl;
    return 0;
}
