#ifndef COFFEE_MENU_H
#define COFFEE_MENU_H
class Foo {
private:
   int m_brewTemp;
   int m_brewTime;

public:
   Foo(int const & brewTemp, int const & brewTime);
   int get_brewTemp();
   // int set_brewTemp();
   int get_brewTime();
   int set_brewTime();
   int incr_brewTemp();
   int decr_brewTemp();
};

#endif
