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
<<<<<<< HEAD
    void MD3();
=======
    void MD4();
>>>>>>> ecebf570b289ba97d985a16e50b2c280cb29554b
};
 
void D::MD1()
{
  cout << "MD1";
}

void D::MD2()
{
  cout << "MD2";
}

<<<<<<< HEAD
void MD3(){
    cout << "MD3";
=======
void D::MD4()
{
  cout << "MD4";
>>>>>>> ecebf570b289ba97d985a16e50b2c280cb29554b
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
