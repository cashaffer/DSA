class CityRec {
private:
  char* myname;
  int mypop;
  int mypos[2];
  
public:
  // Constructor
  CityRec(char* name, int pop, int x, int y) {
    myname = name;
    mypop = pop;
    mypos[0] = x;
    mypos[1] = y;
  }

  ~CityRec() {
    delete myname;
  }

  // Access methods. Note that once created, the data never change.
  char* name() { return myname; }
  int pop() { return mypop; }
  int x() { return mypos[0]; }
  int y() { return mypos[1]; }
};

// Overload << operator to print City records
ostream& operator << (ostream& s, CityRec* p) {
//  return s << p->name() << ", " <<  p->pop() << ", "
//           << p->x() << ", " << p->y();
  return s << p->name() << ", " <<  p->pop();
}

// getKey function for population
class getCityPop {
 public:
  static int key(CityRec* x) { return x->pop(); }
};
