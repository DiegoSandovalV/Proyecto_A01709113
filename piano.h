//Clase Piano

#include<string>

using namespace std;

class Piano {

    //Atributos
private:
    string sonido;
    string marca;
    string sintetizador; //Si es que cuenta con sintetizador y cual
    int unidades; //Cantidad de producto que se tiene para vender
    int ventas;

    //Constructores y metodos
public:

    //Constructor vacio
    Piano() : sonido(""), marca(""),sintetizador(""), unidades(0), ventas(0) {};

    //Constructor
    Piano(string son, string mar, string sint, int un, int ven) : sonido(son), marca(mar), sintetizador(sint),
                                                                     unidades(un), ventas(ven) {};


    //Metodos

    //getters
    string get_sonido();
    string get_marca();
    string get_sintetizador();
    int get_unidades();
    int get_ventas();

    //setters
    void set_sonido(string);
    void set_marca(string);
    void set_sintetizador(string);
    void set_unidades(int);
    void set_ventas(int);

    //Otros metodos
    string porcentaje_ventas();
};

//Getters

string Piano::get_sonido() {
    return sonido;
}

string Piano::get_marca() {
    return marca;
}

string Piano::get_sintetizador() {
    return sintetizador;
}

int Piano::get_unidades() {
    return unidades;
}

int Piano::get_ventas() {
    return ventas;
}

//Setters

void Piano::set_sonido(string son) {
    sonido = son;
}

void Piano::set_marca(string mar) {
    marca = mar;
}

void Piano::set_sintetizador(string sint) {
    sintetizador = sint;
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