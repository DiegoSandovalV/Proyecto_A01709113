//Clase Guitarra

#include<string>

using namespace std;

class Guitarra {

    //Atributos
private:
    string tipo;
    string modelo;
    string marca;
    string cuerdas; //tipo de cuerdas
    int unidades; //Cantidad de producto que se tiene para vender
    int ventas;

    //Constructores y metodos
public:

    //Constructor vacio
    Guitarra() : tipo(""), modelo(""),marca(""), cuerdas(""), unidades(0), ventas(0) {};

    //Constructor
    Guitarra(string tip, string mod,string mar, string cuer, int un, int ven) : tipo(tip), modelo(mod),marca(mar), cuerdas(cuer),
                                                                     unidades(un), ventas(ven) {};


    //Metodos

    //getters
    string get_tipo();
    string get_modelo();
    string get_marca();
    string get_cuerdas();
    int get_unidades();
    int get_ventas();

    //setters
    void set_tipo(string);
    void set_modelo(string);
    void set_marca(string);
    void set_cuerdas(string);
    void set_unidades(int);
    void set_ventas(int);

    //Otros metodos

    string porcentaje_ventas();
};

//Getters

string Guitarra::get_tipo() {
    return tipo;
}

string Guitarra::get_modelo() {
    return modelo;
}

string Guitarra::get_marca() {
    return marca;
}

string Guitarra::get_cuerdas() {
    return cuerdas;
}

int Guitarra::get_unidades() {
    return unidades;
}

int Guitarra::get_ventas() {
    return ventas;
}

//Setters

void Guitarra::set_tipo(string tip) {
    tipo = tip;
}

void Guitarra::set_modelo(string mod) {
    modelo = mod;
}

void Guitarra::set_marca(string mar) {
    marca = mar;
}

void Guitarra::set_cuerdas(string cuer) {
    cuerdas = cuer;
}

void Guitarra::set_unidades(int un) {
    unidades = un;
}

void Guitarra::set_ventas(int ven) {
    ventas = ven;
}

string Guitarra::porcentaje_ventas(){

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