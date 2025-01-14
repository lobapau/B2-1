//Creado por Wilson Morales
#include <iostream>
using namespace std;
 
//Prototipo de la funcion
void calcularEdad( int anioAct , int mesAct, int fechAct, int anioNac, int mesNac, int fechNac);
 
int main ()
{
    int anioAct;  //A�o Actual
    int mesAct; //Mes actual
    int fechAct; //Fecha actual
 
    int anioNac; //A�o nacimiento
    int mesNac; //Mes nacimiento
    int fechNac; //Fecha nacimiento
 
    cout << "\n\tPrograma que calcula la Edad, Mes y Dia\n\n";
    cout << "Ingrese Ano Actual: ";   cin >> anioAct;
    cout << "Ingrese Mes Actual: ";   cin >> mesAct;
    cout << "Ingrese Fecha Actual: ";  cin >> fechAct;
 
    cout << "\nIngrese Ano Nacimiento: ";  cin >> anioNac;
    cout << "Ingrese Mes de Nacimiento: ";  cin >> mesNac;
    cout << "Ingrese Fecha de Nacimiento: ";  cin >> fechNac;
 
    calcularEdad( anioAct , mesAct, fechAct, anioNac, mesNac, fechNac);
 
    return 0;
}
 
//Definicion de la Funcion
void calcularEdad( int anioAct , int mesAct, int fechAct, int anioNac, int mesNac, int fechNac)
{
    int respFech , respMes;
 
    if ( fechAct < fechNac  )
    {   //En caso de ser menor la fecha actual que el nacimiento
        fechAct = fechAct + 30; // Se le suma los 30 d�as (1 mes) a la fecha actual
        mesAct = mesAct - 1; // Se le resta un mes (30 d�as) al mes actual
        respFech =  fechAct - fechNac; //Se le resta fecha nacimiento al actual
    }
    else //En caso de ser mayor la fecha actual que el nacimiento
        respFech =  fechAct - fechNac;  //Se le resta fecha nacimiento al actual
 
    if( mesAct < mesNac )
    {   //En caso de ser menor el mes actual que el nacimiento
        mesAct = mesAct + 12; // Se le suma los 12 meses (1 a�o) al mes actual
        anioAct = anioAct - 1 ; // Se le resta 1 a�o ( 12 meses) al a�o actual
        respMes = mesAct - mesNac; //Se le resta a�o nacimiento al actual
    }
    else //En caso de ser mayor el mes actual que el nacimiento
        respMes = mesAct - mesNac; //Se le resta a�o nacimiento al actual
 
    cout << "\nUd. tiene:\n";
    cout << " Edad: " <<anioAct - anioNac << endl; //Muestra edad
    cout << " Mes: " << respMes << endl; //Muestra mes
    cout << " Dia: " << respFech << endl; //Muestra dia
}
