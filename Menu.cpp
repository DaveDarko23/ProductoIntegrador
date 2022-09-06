
#include <iostream>
#include "IShape.h"
#include "ICoordenadas.h"

using namespace std;

#include "Square.cpp"
#include "Triangle.cpp"
#include "Circle.cpp"

class Menu
{
public:
  void principal()
  {
    char tecla;
    do
    {
      short option;
      option = principalOption(option);
      initial();
      system("cls");
      principalController(option);
    } while (tecla != 'z');
  }

private:
  short x, y, tamanio;

  short principalOption(short option)
  {
    do
    {
      system("cls");
      if (option)
        cout << "\tIngrese un valor Valido\n"
             << endl;
      cout << "\tEliga una Figura" << endl;
      cout << "\t[ 1 ] Cuadrado" << endl;
      cout << "\t[ 2 ] Triagulo rectangulo" << endl;
      cout << "\t[ 3 ] Circulo" << endl;
      cout << "\n\tOpcion: ";
      cin >> option;
    } while (!(option >= 1 && option <= 3));

    return option;
  }

  void principalController(short option)
  {
    switch (option)
    {
    case 1:
      square();
      break;
    case 2:
      triangleController();
      break;
    case 3:
      circleController();
      break;
    }
  }

  void initial()
  {
    do
    {
      system("cls");
      if (x)
        cout << "\tIngrese una opcion Valida\n"
             << endl;
      cout << "\tEliga una Coordenada en X: ";
      cin >> x;
    } while (x < 0);

    do
    {
      system("cls");
      if (y)
        cout << "\tIngrese una opcion Valida\n"
             << endl;
      cout << "\tEliga una Coordenada en Y: ";
      cin >> y;
    } while (y < 0);

    do
    {
      system("cls");
      if (tamanio)
        cout << "\tIngrese una opcion Valida\n"
             << endl;
      cout << "\tIngrese la magintud de la figura: ";
      cin >> tamanio;
    } while (tamanio < 0);
  }

  void square()
  {
    int option = 0;
    do
    {
      system("cls");
      if (option)
        cout << "\tIngrese una opcion Valida\n"
             << endl;
      cout << "\tEliga una Figura" << endl;
      cout << "\t[ 1 ] Cuadrado Relleno" << endl;
      cout << "\t[ 2 ] Cuadrado Vacio" << endl;
      cout << "\n\tOpcion: ";
      cin >> option;
    } while (!(option >= 1 && option <= 2));

    squareController(option);
  }

  void squareController(int option)
  {
    Square cuadrado = Square(x, y, tamanio);
    char tecla;
    do
    {

      if (tecla == 'a')
        cuadrado.setX(-1);
      if (tecla == 'd')
        cuadrado.setX(1);
      if (tecla == 'w')
        cuadrado.setY(-1);
      if (tecla == 's')
        cuadrado.setY(1);

      system("cls");
      cout << " *************  Cuadrado ********************    Ingrese z para salir" << endl;
      (option == 1) ? cuadrado.draw() : cuadrado.drawEmpty();
      cout << "Ingrese un controlador wasd: ";
      cin >> tecla;

    } while (tecla != 'z');
  }

  void triangleController()
  {
    Triangle triangulo = Triangle(x, y, tamanio);
    char tecla;
    do
    {
      if (tecla == 'a')
        triangulo.setX(-1);
      if (tecla == 'd')
        triangulo.setX(1);
      if (tecla == 'w')
        triangulo.setY(-1);
      if (tecla == 's')
        triangulo.setY(1);

      system("cls");
      cout << " *************  TRIANGULO  ********************    Ingrese z para salir" << endl;
      triangulo.draw();
      cout << "Ingrese un controlador wasd: ";
      cin >> tecla;

    } while (tecla != 'z');
  }

  void circleController()
  {
    Circle circulo = Circle(x, y, tamanio);
    char tecla;
    do
    {
      if (tecla == 'a')
        circulo.setX(-1);
      if (tecla == 'd')
        circulo.setX(1);
      if (tecla == 'w')
        circulo.setY(-1);
      if (tecla == 's')
        circulo.setY(1);

      system("cls");
      cout << " *************  CIRCULO  ********************    Ingrese z para salir" << endl;
      circulo.draw();
      cout << "Ingrese un controlador wasd: ";
      cin >> tecla;
    } while (tecla != 'z');
  }
};