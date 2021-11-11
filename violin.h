//Clase Violin

#include<string>

using namespace std;

class Violin {

    //Atributos
private:
    string madera; //tipo de madera
    string marca;
    string cuerdas; //tipo de cuerdas
    int unidades; //Cantidad de producto que se tiene para vender
    int ventas;

    //Constructores y metodos
public:

    //Constructor vacio
    Violin() : madera(""), marca(""), cuerdas(""), unidades(0), ventas(0) {};

    //Constructor
    Violin(string mad, string mar, string cuer, int un, int ven) : madera(mad), marca(mar), cuerdas(cuer),
                                                                   unidades(un), ventas(ven) {};


    //Metodos

    //getters
    string get_madera();
    string get_marca();
    string get_cuerdas();
    int get_unidades();
    int get_ventas();

    //setters
    void set_madera(string);
    void set_marca(string);
    void set_cuerdas(string);
    void set_unidades(int);
    void set_ventas(int);

    //Otros metodos

    string porcentaje_ventas();
};


//Getters

string Violin::get_madera() {
    return madera;
}

string Violin::get_marca() {
    return marca;
}

string Violin::get_cuerdas() {
    return cuerdas;
}

int Violin::get_unidades() {
    return unidades;
}

int Violin::get_ventas() {
    return ventas;
}

//Setters

void Violin::set_madera(string mar) {
    madera = mar;
}

void Violin::set_marca(string mad) {
    marca = mad;
}

void Violin::set_cuerdas(string cuer) {
    cuerdas = cuer;
}

void Violin::set_unidades(int un) {
    unidades = un;
}

void Violin::set_ventas(int ven) {
    ventas = ven;
}

//otros metodos

string Violin::porcentaje_ventas(){

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