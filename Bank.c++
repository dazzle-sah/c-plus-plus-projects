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
void Bank::choice ()
{
  char ch;
  while (1)
    {
      cout << "\n\nPRESS..!!" << endl;
      cout << "1. Create New Account" << endl;
      cout << "2. View Customers List" << endl;
      cout << "3. Update Information of existing account" << endl;
      cout << "4. Check the details of an existing account" << endl;
      cout << "5. For Transaction" << endl;
      cout << "6. Remove Existing Account" << endl;
      cout << "7. Exit" << endl;
      ch = getch ();
      system ("CLS");
      switch (ch)
	{
	case '1':
	  Bank::perData ();
	  break;
	case '2':
	  Bank::show ();
	  break;
	case '3':
	  Bank::update ();
	  break;
	case '4':
	  Bank::search ();
	  break;
	case '5':
	  Bank::transactions ();
	  break;
	}
    }
}

