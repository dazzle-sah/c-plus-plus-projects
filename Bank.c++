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

void Bank::perData ()
{
  cout << "Enter data of person" << total + 1 << endl;
  cout << "Enter Name" << endl;
  cin >> person[total].name;
  cout << "Enter ID" << endl;
  cin >> person[total].ID;
  cout << "Enter Address" << endl;
  cin >> person[total].address;
  cout << "Enter Contact Number" << endl;
  cin >> person[total].contact;
  cout << "Total Cash" << endl;
  cin >> person[total].cash;
  total++;
}
void Bank::show ()
{
  for (int i = 0; i < total; i++)
    {
      cout << "Data of person" << i + 1 << endl;
      cout << "Name: " << person[i].name << endl;
      cout << "ID: " << person[i].ID << endl;
      cout << "Address: " << person[i].address << endl;
      cout << "Contact: " << person[i].contact << endl;
      cout << "Cash: " << person[i].cash << endl;
    }
}
