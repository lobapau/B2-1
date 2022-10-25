//PROAÑO_JORKY
#ifdef _MSDOS_
    #include <iostream.h>
    #include <stdlib.h>
#else
    #include <iostream>
    #include <cstdlib>
    using namespace std;
#endif

int main (void)
{
    float JAP, altura_en_a, peso_en_kg;
    cout << "Ingresa el valor de altura en metros: ";
    cin >> altura_en_a;
    cin.get();
    //Calcular JAP
	cout << "Ingresa el valor de peso en kilogramo: ";
    cin >> peso_en_kg;
    cin.get();
    JAP=peso_en_kg/altura_en_a/altura_en_a;
    if(JAP<16)
        cout << "Peso debajo de lo normal." << endl;
    if(JAP>=16&&JAP<17)
        cout << "Peso semi-bajo." << endl;
    if(JAP>=17&&JAP<18)
        cout << "Bajo peso." << endl;
    if(JAP>=18&&JAP<25)
        cout << "Peso normal (saludable)." << endl;
    if(JAP>=5&&JAP<30)
        cout << "Sobrepeso (obesidad de grado I)." << endl;
    if(JAP>=30&&JAP<35)
        cout << "Sobrepeso (obesidad de grado II)." << endl;
    if(JAP>=35&&JAP<40)
        cout << "Obesidad (obesidad de grado III)." << endl;
    if(JAP>=40)
        cout << "Obesidad (obesidad de grado IV)." << endl;
    cout << "Valor de JAP: " << JAP << endl;
    cout << endl;
    system ("pause");
    return EXIT_SUCCESS;
}
