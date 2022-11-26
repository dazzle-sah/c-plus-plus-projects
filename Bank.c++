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
};