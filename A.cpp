#include <iostream>
using namespace std;

class A{
  private:
    int A1;
    float A2;
  public:
    int getA1();
    float getA2();
    void setA1(int value);
    void setA2(float value);
    void MA1();
    void MA2();
    void MA3();
};

void A::MA1()
{
  cout << "MA1"
}

void A::MA2()
{
  cout << "MA2"
}

void A::MA3()
{
  cout << "Alteração a classe A partir do clone"
}

int A::getA1()
{
  return this->A1;
}

float A::getA2()
{
  return this->A2;
}

void A::setA1(int value)
{
  this->A1 = value;
}

void A::setA2(float value)
{
  this->A2 = value;
}
