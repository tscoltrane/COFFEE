#include <iostream>
#include <iomanip>
using namespace std;

int brewTemp = 93;
int get_brewTemp();
int set_brewTemp();
int get_brewTime();
int set_brewTime();

//int fun(int  x) // Pass by value
int fun(int& x)   // Pass by reference
{
    x = x + 2;
    cout << "\nIn fun()\t" << x ;    // prints 5 
}

int incr_brewTemp(int& brewTemp) {
  brewTemp++; 
}

int get_brewTemp() {
  return brewTemp++; 
}

int main()
{
    int menuSelection;
    int foo;

    cout << "\nCoffee Menu System v1.0 for C++";
    cout << "\n===============================\n";
    do {
        cout << "\n" ;
        cout << "\n\t1 - increment BrewTemp" ;
        cout << "\n\t2 - foo" ;
        cout << "\n\t3 - bar" ;
        cout << "\n\t4 - snafu" ;
        cout << "\n\t5 - Exit" ;
        cout << "\n\nPlease enter a selection (number): ";
	cin >> menuSelection;

	switch (menuSelection) {
	    case 1:
	       cout << "\n\nYou selected BrewTemp (" << brewTemp << ")\n";
               incr_brewTemp(brewTemp);
               incr_brewTemp(brewTemp);
	       foo = get_brewTemp();
	       cout << "\n\nIncremented BrewTemp (" << foo << ")\n";
	       menuSelection=0;
	       return menuSelection;
	    case 2:
	       cout << "\n\nYou selected 2\n";
	       break;
	    case 3:
	       cout << "\n\nYou selected 3\n";
	       break;
	    case 4:
	       cout << "\n\nYou selected 4\n";
	       break;
	    case 5:
	       cout << "\n\nExiting upon user request...\n";
	       break;
	    default:
	       cout << "\n\nWatchu talkin' 'bout, Wilis?\n";
	       break;
	       
	}

    } while (menuSelection < 5);

    cout << "\n";

    return 0;

    
}
    
//int main() {
//   int x = 1;
//   if (x==1) 
//      std::cout << "Hello World\n"; 
//}
