#include <iostream>
#include <iomanip>
#include "coffee-menu.h"

using namespace std;

Foo::Foo(int const & brewTemp, int const & brewTime){
  m_brewTemp=brewTemp; 
  m_brewTime=brewTime; 
}

int Foo::incr_brewTemp() {
  m_brewTemp++; 
}

int Foo::decr_brewTemp() {
  m_brewTemp--; 
}

int Foo::get_brewTemp() {
  return m_brewTemp; 
}

// int Foo::set_brewTemp(int& brewTemp) {
//   return this->brewTemp = brewTemp; 
// }
