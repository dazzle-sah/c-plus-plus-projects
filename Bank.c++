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
void Bank::update ()
{
  cout << "Enter Id of Customer" << endl;
  cin >> id;
  for (int i = 0; i < total; i++)
    {
      if (id == person[i].ID)
	{
	  cout << "Previous data" << endl;
	  cout << "Data of person" << i + 1 << endl;
	  cout << "Name: " << person[i].name << endl;
	  cout << "ID: " << person[i].ID << endl;
	  cout << "Address: " << person[i].address << endl;
	  cout << "Contact: " << person[i].contact << endl;
	  cout << "Cash: " << person[i].cash << endl;
	  cout << "Enter New Data : " << endl;
	  cout << "Enter Name" << endl;
	  cin >> person[i].name;
	  cout << "Enter ID" << endl;
	  cin >> person[i].ID;
	  cout << "Enter Address" << endl;
	  cin >> person[i].address;
	  cout << "Enter Contact Number" << endl;
	  cin >> person[i].contact;
	  cout << "Total Cash" << endl;
	  cin >> person[i].cash;
	  break;
	}
      if (i == total - 1)
	{
	  cout << "No such record found" << endl;
	}
    }
}

void Bank::search ()
{
  cout << "Enter Id of Customer" << endl;
  cin >> id;
  for (int i = 0; i < total; i++)
    {
      if (id == person[i].ID)
	{
	  cout << "Name: " << person[i].name << endl;
	  cout << "ID: " << person[i].ID << endl;
	  cout << "Address: " << person[i].address << endl;
	  cout << "Contact: " << person[i].contact << endl;
	  cout << "Cash: " << person[i].cash << endl;
	  break;
	}
      if (i == total - 1)
	{
	  cout << "No such record found" << endl;
	}
    }
}
void Bank::transactions ()
{
  int cash;
  char ch;
  cout << "Enter Id of Customer" << endl;
  cin >> id;
  for (int i = 0; i < total; i++)
    {
      if (id == person[i].ID)
	{
	  cout << "Name: " << person[i].name << endl;
	  cout << "Address: " << person[i].address << endl;
	  cout << "Contact: " << person[i].contact << endl;
	  cout << "\nExisting Cash " << person[i].cash << endl;
	  cout << "Press 1 to deposit" << endl;
	  cout << "Press 2 to witdraw" << endl;
	  ch = getch ();

	  switch (ch)
	    {
	    case '1':
	      cout << "How much cash you want to deposit>" << endl;
	      cin >> cash;
	      person[i].cash = +cash;
	      cout << "Your new cash is" << person[i].cash << endl;
	      break;
	    case '2':
	      cout << "How much cash you want to withdraw>" << endl;
	      cin >> cash;
	      if (cash > person[i].cash)
		{
		  cout << "Your existing cash is just" << person[i].cash <<
		    endl;
		  sleep (3000);
		  goto back;
		}
	      person[i].cash -= cash;
	      cout << "Your new cash is" << person[i].cash << endl;
	      break;
	    default:
	      cout << "Invalid Input" << endl;
	      break;
	    }
	  break;
	}
      if (i == total - 1)
	{
	  cout << "No such record found" << endl;
	}
    }
}
