/*
 * Proyecto A01709113
 * Sandoval Vargas Diego Ernesto
 * A01709113
 * 18/11/2021
 */


/*Clase Piano
* Contiene las variables que diferencian esta subclase de las demas, al combinar estas con las varriables de la clase padre (instrumento)
 * se obtiene un objeto de tipo Piano
*/
#include "instrumento.h"
using namespace std;

class Piano : public Instrumento{

private:

    string sintetizador;
    int num_teclas;

public:

    //Constructor default
    Piano():Instrumento(){
        sintetizador = "";
        num_teclas = 0;
    }

    //Constructor
    Piano(string mar, string mod, float pre,string sin, int num, int uni, int ven):Instrumento(mar, mod, pre,
                                                                                                     uni, ven) {
        sintetizador = sin;
        num_teclas = num;
    }


    //Metodos

    //getters
    string get_sintetizador();
    int get_num_teclas();


    //setters

    void set_sintetizador(string);
    void set_num_teclas(int);


};


//Getters

string Piano::get_sintetizador() {
    return sintetizador;
}

int Piano::get_num_teclas() {
    return num_teclas;
}


//Setters



void Piano::set_sintetizador(string cuer) {
    sintetizador = cuer;
}

void Piano::set_num_teclas(int num) {
    num_teclas = num;
}

