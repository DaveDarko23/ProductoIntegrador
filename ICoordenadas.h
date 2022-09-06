#include <iostream>
#include <windows.h>

class ICoordenadas
{
public:
  void setX(int n)
  {
    if (x + n == -1)
      return;

    if (x >= 0)
      x = x + n;
  }
  void setY(int n)
  {
    if (y + n == 1)
      return;

    if (y >= 2)
      y = y + n;
  }

protected:
  short x, y;
  short i, j;

  void coordenadas(short p, short z)
  {
    COORD pos = {p, z};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
  };
};