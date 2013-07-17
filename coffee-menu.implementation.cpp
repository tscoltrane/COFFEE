#include <iostream>
#include <iomanip>
#include "coffee-menu.h"

using namespace std;

int main()
{
    char menuSelection;
    int l_temp = 93;
    int l_time = 22;
    Foo bar(l_temp,l_time);
    // int brewTemp = 93;
    // bar.set_brewTemp(brewTemp);

    cout << "\nCoffee Menu System v1.0 for C++";
    cout << "\n===============================\n";
    do {
        cout << "\n" ;
        cout << "\n\t1 - raise BrewTemp (" << bar.get_brewTemp() << ")" ;
        cout << "\n\t2 - lower BrewTemp (" << bar.get_brewTemp() << ")" ;
        cout << "\n\t3 - display BrewTemp" ;
        cout << "\n\t3 - bar" ;
        cout << "\n\t4 - snafu" ;
        cout << "\n\t5 - Exit" ;
        cout << "\n\nPlease enter a selection (number): ";
	cin >> menuSelection;

	switch (menuSelection) {
	    case '1':
               bar.incr_brewTemp();
	       cout << "\n\nYou selected BrewTemp (" << bar.get_brewTemp() << ")\n";
	       break;
	    case '2':
               bar.decr_brewTemp();
	       break;
	    case '3':
	       cout << "\n\nCurrent BrewTemp:\t" << bar.get_brewTemp() << "\n";
	       break;
	    case '4':
	       cout << "\n\nYou selected 4\n";
	       break;
	    case '5':
	       cout << "\n\nExiting upon user request...\n";
	       return 0;
	    default:
	       cout << "\n\nWatchu talkin' 'bout, Wilis?\n";
	       return 1;
	       
	}

    } while (menuSelection != 'x');

    cout << "\n";

    return 0;

    
}
    
//int main() {
//   int x = 1;
//   if (x==1) 
//      std::cout << "Hello World\n"; 
//}
