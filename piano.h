/*
 * Proyecto A01709113
 * Sandoval Vargas Diego Ernesto
 * A01709113
 * 18/11/2021
 */


/*Clase Piano
 * Contiene los metodos genericos (setters y getters) para el manejo de del objeto en este caso
 * del Piano. Tambien contienen un metodo que permite saber el porcentaje de ventas de dicho objeto
*/

#include<string>

using namespace std;

class Piano {

private:
    string marca;
    string modelo;
    string sonido; //tipo de sonido
    string sintetizador; //Si es que cuenta con sintetizador y cual
    int num_teclas;


public:
    int unidades; //Cantidad de producto que se tiene para vender
    int ventas;  //La cantidad que se vendio de dicho producto

    //Constructor vacio
    Piano() : marca(""), modelo(""), sonido(""),sintetizador(""),num_teclas(0), unidades(0), ventas(0) {};

    //Constructor
    Piano(string mar,string mod,string son, string sint,int num, int un, int ven) : marca(mar),modelo(mod),sonido(son), sintetizador(sint),
                                                                     num_teclas(num),unidades(un), ventas(ven) {};


    //Metodos

    //getters
    string get_marca();
    string get_modelo();
    string get_sonido();
    string get_sintetizador();
    int get_num_teclas();
    int get_unidades();
    int get_ventas();

    //setters
    void set_marca(string);
    void set_modelo(string);
    void set_sonido(string);
    void set_sintetizador(string);
    void set_num_teclas(int);
    void set_unidades(int);
    void set_ventas(int);

    //Otros metodos
    string porcentaje_ventas();
};

//Getters

string Piano::get_marca() {
    return marca;
}

string Piano::get_modelo() {
    return modelo;
}

string Piano::get_sonido() {
    return sonido;
}

string Piano::get_sintetizador() {
    return sintetizador;
}

int Piano::get_num_teclas() {
    return num_teclas;
}

int Piano::get_unidades() {
    return unidades;
}

int Piano::get_ventas() {
    return ventas;
}

//Setters

void Piano::set_marca(string mar) {
    marca = mar;
}

void Piano::set_modelo(string mod) {
    marca = mod;
}

void Piano::set_sonido(string son) {
    sonido = son;
}

void Piano::set_sintetizador(string sint) {
    sintetizador = sint;
}

void Piano::set_num_teclas(int num) {
    num_teclas=num;
}

void Piano::set_unidades(int un) {
    unidades = un;
}

void Piano::set_ventas(int ven) {
    ventas = ven;
}

string Piano::porcentaje_ventas(){

    //Se calcula el porcentaje convirtiendo los valores int de ventas y unidades a float,
    float p;
    p = (float) ventas / (float) unidades * 100; // se multiplica * 100 para que se vea mejor el numero

    if(unidades>ventas) {
        return "El porcentaje de ventas es: " + to_string(p) + "%";
    }else if(unidades==ventas){
        return "Se han vendido todas las unidades";
    }
    else{
        return "Posible error en unidades y ventas";
    }
}
