//Creado por Wilson Morales //Calcular el promedio mas alto
#include <iostream>

using namespace std;

char nom[20];
float prom, cal, may = 0, aux;
int alumnos, x, suma = 0;

int main()
{
    cout << "Cantidad de alumnos: ";
    cin >> alumnos;

    for(x = 0; x < alumnos; x++)
    {
        cout << "Nombre: ";
        cin >> nom;
        cout << "Calificacion: ";
        cin >> cal;     
        suma = suma + cal;        
        aux = cal;
        if (aux >= may)
        {
            may = aux;
        }                                         
    }
    prom = (float)suma / alumnos;
    cout <<"El promedio es: " << prom << "\n";
    cout << "La mayor calificacion es: " << may;

    return 0;
}
