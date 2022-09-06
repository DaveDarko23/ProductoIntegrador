class Triangle : public IShape, public ICoordenadas
{
public:
  Triangle(short x = 0, short y = 0, short lados = 0)
  {
    this->x = x;
    this->y = y;
    dimension = lados;
  }

  void draw() override
  {

    coordenadas(x, y);
    for (i = 0; i < dimension; i++)
    {
      for (j = 0; j <= i; j++)
      {
        cout << "* ";
      }
      coordenadas(x, y + i + 1);
    }
    coordenadas(0, 1);
  }
};
