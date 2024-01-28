#include<iostream>
#include<conio.h>
using namespace std;

// Online Library System.

// Main Class
class Library
{
	public:
		void Select()
		{
			cout<< "1:English" <<endl;
			cout<< "2:Urdu" <<endl;
			cout<< "3:Farsi" <<endl;
			
		int choice;
		cout << "Select Your Choice:" <<endl;
		cin >> choice ;
		
		switch (choice)
		{
		 case 1:
		 {
            English_Literature englishSection; 
            break;
         }
         case 2:
         {
            Urdu_Literature urduSection;
            break;
         }
         case 3:
         {
            Farsi_Literature farsiSection;
            break;
         }
         default:
         cout << "Invalid choice" << endl;
         }

		}
		
		Library()
		{
			cout << "Online Library System" <<endl;
		}

};

// English Section
class English_Literature
{
	public:
		English_Literature()
		{
			cout << "English Section" <<endl;
		}
};

// Urdu Section
class Urdu_Literature
{
	public:
		Urdu_Literature()
		{
			cout << "Urdu Section" <<endl;
		}
};

// Farsi Section
class Farsi_Literature
{
	public:
		Farsi_Literature()
		{
			cout << "Farsi Section" <<endl;
		}
};
int main()
{
	Library L;
	English_Literature E;
	Urdu_Literature U;
	Farsi_Literature F;
	
	// Calling the Select Function.
	L.Select(); 
	
	return 0;
}
