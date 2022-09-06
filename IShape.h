class IShape
{
public:
  void setDimension(short n) { dimension = n; } // Métodos concretos
  virtual void draw() = 0;                      /* Método virtual puro o abstracto */

protected:
  short dimension;
};