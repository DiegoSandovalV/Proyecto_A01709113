/*
 * Proyecto A01709113
 * Sandoval Vargas Diego Ernesto
 * A01709113
 * 18/11/2021
 */


/*Clase Guitarra
 * Contiene los metodos genericos (setters y getters) para el manejo de del objeto en este caso
 * de la Guitarra. Tambien contienen un metodo que permite saber el porcentaje de ventas de dicho objeto
*/

#include<string>

using namespace std;

class Guitarra {

private:
    string marca;
    string modelo;
    string sonido; //tipo de sonido
    string cuerdas; //tipo de cuerdas
    string trastes; //tipo de trastes

public:
    int unidades; //Cantidad de producto que se tiene para vender
    int ventas;   //La cantidad que se vendio de dicho producto


    //Constructor vacio
    Guitarra() : marca(""), modelo(""), sonido(""), cuerdas(""),trastes(""),unidades(0), ventas(0) {};

    //Constructor
    Guitarra(string mar,string mod,string son,string cuer, string tras,int un, int ven) : marca(mar),modelo(mod),sonido(son),cuerdas(cuer),
                                                                     trastes(tras),unidades(un), ventas(ven) {};


    //Metodos

    //getters
    string get_marca();
    string get_modelo();
    string get_sonido();
    string get_cuerdas();
    string get_trastes();
    int get_unidades();
    int get_ventas();

    //setters
    void set_marca(string);
    void set_modelo(string);
    void set_sonido(string);
    void set_cuerdas(string);
    void set_trastes(string);
    void set_unidades(int);
    void set_ventas(int);

    //Otros metodos

    string porcentaje_ventas();
};

//Getters

string Guitarra::get_marca() {
    return marca;
}

string Guitarra::get_modelo() {
    return modelo;
}

string Guitarra::get_sonido() {
    return sonido;
}

string Guitarra::get_cuerdas() {
    return cuerdas;
}

string Guitarra::get_trastes() {
    return trastes;
}

int Guitarra::get_unidades() {
    return unidades;
}

int Guitarra::get_ventas() {
    return ventas;
}

//Setters
void Guitarra::set_marca(string mar) {
    marca = mar;
}

void Guitarra::set_modelo(string mod) {
    modelo = mod;
}

void Guitarra::set_sonido(string son) {
    sonido = son;
}

void Guitarra::set_cuerdas(string cuer) {
    cuerdas = cuer;
}

void Guitarra::set_trastes(string tras) {
    trastes = tras;
}

void Guitarra::set_unidades(int un) {
    unidades = un;
}

void Guitarra::set_ventas(int ven) {
    ventas = ven;
}

//Metodo que revisa si la cantidad de unidades y ventas estan correctas y regresa el porcentaje de las ventas del objeto
string Guitarra::porcentaje_ventas(){

    //Se calcula el porcentaje convirtiendo los valores int de ventas y unidades a float
    float p;
    p = (float) ventas / (float) unidades * 100; // se multiplica * 100 para que se vea mejor el numero

    if(unidades>ventas) {
        return "El porcentaje de ventas es: " + to_string(p) + "%";
    }else if(unidades==ventas){
        return "El porcentaje de ventas es: " + to_string(p) + "% \nSe han vendido todas las unidades";
    }
    else{
        return "Posible error en unidades y ventas";
    }
}

