 #include <QCoreApplication>
#include <iostream>
#include <string>

using namespace std;

int main()
{
     int num1, num2;
     int  resultado;
     int opcion =0;


     cout <<"ingrese el primer numero "<< endl;
     cin >> num1;

     cout <<"ingrese el segundo numero"<< endl;
     cin >> num2;

     cout <<"ingrese la opcion a realizar"<< endl;
            cout <<" 1 suma"<< endl;
            cout <<" 2 resta"<< endl;
            cout <<" 3 multiplicacion"<< endl;
            cout <<" 4 division"<< endl;
            cin >> opcion;




            switch (opcion) {
            case 1: resultado = num1 + num2;
                break;

               case 2:resultado = num1 - num2;
                break;
            case 3: resultado = num1 * num2;
                break;
            case 4: resultado = num1 / num2;
                break;
            default: if (opcion<1 || opcion>4)

        cout <<" opcion no valida"<< endl;

                break;
            }

         cout <<"el resultado es"<< resultado << endl;


    return 0;
}
