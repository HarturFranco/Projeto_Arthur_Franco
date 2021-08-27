#include <iostream>
using namespace std;

class B{
  private:
    int B1;
    float B2;
  public:
    int getB1();
    float getB2();
    void setB1(int value);
    void setB2(float value);
    void MB1();
    void MB2();
};

void B::MB1()
{
  cout << "MB1";
}

void B::MB2()
{
  cout << "MB2";
}

int B::getB1()
{
  return this->B1;
}

float B::getB2()
{
  return this->B2;
}

void B::setB1(int value)
{
  this->B1 = value;
}

void B::setB2(float value)
{
  this->B2 = value;
}
