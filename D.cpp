#include <iostream>
#include <string>
using namespace std;

class D{
  private:
    string D1;
    int D2;
  public:
    void MD1();
    void MD2();
  
    void MD4();
};
 
void D::MD1()
{
  cout << "MD1";
}

void D::MD2()
{
  cout << "MD2";
}


void D::MD4()
{
  cout << "MD4";
}

string D::getD1()
{
  return this->D1;
}

int D::getD2()
{
  return this->D2;
}

void D::setD1(string value)
{
  this->D1 = value;
}

void D::setD2(int value)
{
  this->D2 = value;
}
