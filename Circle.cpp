#include <math.h>
class Circle : public IShape, public ICoordenadas
{
private:
  short eje, cY, cX;
  float radio, hipotenusa;

  bool calculo(short i, short j)
  {
    (eje < i) ? (cY = eje - i) : (cY = i - eje);

    (eje < j) ? (cX = eje - j) : (cX = j - eje);

    hipotenusa = sqrt((pow(cY, 2)) + (pow(cX, 2)));

    return hipotenusa <= radio; // True o False
  }

public:
  Circle(short x = 0, short y = 0, short lados = 0)
  {
    this->x = x;
    this->y = y;
    calcularDatos(lados);
  }

  void calcularDatos(int lados)
  {
    dimension = lados;
    eje = (dimension / 2);
    radio = eje + 0.5;
  }

  void draw() override
  {

    /* Implementacion específica de la clase Triangulo */
    coordenadas(x, y);
    for (i = 0; i < dimension; i++)
    {
      for (j = 0; j < dimension; j++)
      {
        calculo(i, j) ? cout << "O " : cout << "  ";
      }
      coordenadas(x, y + i + 1);
    }
    coordenadas(0, 1);
  }
};