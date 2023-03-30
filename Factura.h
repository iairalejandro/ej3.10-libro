#include <string>

class Factura {

    public:
        Factura(std::string numParte, std::string descrip, int cantCompra, int precioXuni, double impuesto, double tasa){
            numParte = numParte;
            descrip = descrip;
            cantCompra = cantCompra;
            precioXuni = precioXuni;
            impuesto = impuesto;
            tasa = tasa;
        }

        void setNumParte(std::string _numParte){
            numParte = _numParte;
        }

        void setDescrip(std::string _descrip){
            descrip = _descrip;
        }

        void setCantCompra(int _cantCompra){
            cantCompra = _cantCompra;
        }

        void setPrecioXuni(int _precioXuni){
            precioXuni = _precioXuni;
        }





    private:

    std::string numParte, descrip;
    int cantCompra, precioXuni;
    double impuesto = 0.2;
    double tasa = 0.2;

};
