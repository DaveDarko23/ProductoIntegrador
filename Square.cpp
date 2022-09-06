class Square : public IShape, public ICoordenadas
{
public:
  Square(short x = 0, short y = 0, short dimension = 0)
  {
    this->x = x;
    this->y = y;
    this->dimension = dimension;
  }

  void draw() override
  {
    /* Implementacion específica de la clase Triangulo */
    coordenadas(x, y);
    for (int i = 0; i < dimension; i++)
    {
      for (int j = 0; j < dimension; j++)
      {
        cout << "* ";
      }
      coordenadas(x, y + i + 1);
    }
    coordenadas(0, 1);
  }

  void drawEmpty()
  {
    /* Implementacion específica de la clase Triangulo */
    coordenadas(x, y);
    for (i = 0; i < dimension; i++)
    {
      for (j = 0; j < dimension; j++)
      {
        if (i == 0 || i == dimension - 1 || j == dimension - 1 || j == 0)
          cout << "* ";
        else
          cout << "  ";
      }
      coordenadas(x, y + i + 1);
    }
    coordenadas(0, 1);
  }
};