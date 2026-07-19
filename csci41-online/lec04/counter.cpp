#include "counter.h"
using namespace std;

// vector<int> v;
// vector<int> v(100, 42);

// int count = 0;
// int count(0);

Counter::Counter() : count(0), d(3.14) {
  cout << "Default constructor!" << endl;

  // because I don't mention the vector here, it gets default
  // constructed (so it's empty)
  
  // if I didn't have the cout line, the body of this constructor
  // could be empty!
}

Counter::Counter(int startingCount) : count(startingCount), v(100, 42), d(5.67) {
  cout << "Parameterized constructor!" << endl;
}

void Counter::inc() {
  count++;
}

void Counter::reset(int newCount) {
  count = newCount;
}

int Counter::getCount() const {
  return count;
}
 
Counter Counter::operator+(const Counter& other) const {
  // called when we're supposed to add our count with other.count
  Counter res;

  res.count = count + other.count;

  return res;
}

Counter operator*(const Counter& a, const Counter& b) {
  // option 1:
  Counter res;
  res.count = a.count * b.count;
  return res;

  // option 2:
  // Counter res(a.getCount() * b.getCount());
  // return res;
}

ostream& operator<<(ostream& os, const Counter& c) {
  // print to os however you want
  os << "Count: " << c.getCount();

  // remember to always return os at the end
  return os;
}
