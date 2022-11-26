#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
class Bank
{
private:
  int total;
  string id;
  struct person
  {
    string name, ID, address;
    int contact, cash;
  } person[100];
public:
    Bank ()
  {
    total = 0;
  }
    void choice ();
  void perData ();
  void show ();
  void update ();
  void search ();
  void transactions ();
  void del ();
};
int
main ()
{
  Bank b;
  b.choice ();

  return 0;
}
