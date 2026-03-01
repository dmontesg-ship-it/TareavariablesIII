#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    string nombreCliente;
    double precio;
    int cantidad;
    double subtotal, iva, total;
    
    cout << "Ingrese el nombre completo del cliente: ";
    getline(cin, nombreCliente);

    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    cout << "Ingrese la cantidad comprada: ";
    cin >> cantidad;


    subtotal = precio * cantidad;
    iva = subtotal * 0.12;
    total = subtotal + iva;


    cout << fixed << setprecision(2);

    cout << "\n========== Doc.tributario ==========" << endl;
    cout << "Cliente: " << nombreCliente << endl;
    cout << "Subtotal: Q" << subtotal << endl;
    cout << "IVA (12%): Q" << iva << endl;
    cout << "Total a pagar: Q" << total << endl;


    cout << "\nDavid Jefte Montes" << endl;

    return 0;
}
