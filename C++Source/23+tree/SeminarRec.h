class SeminarRec {
 private:
  char* mytitle;
  char* mydate;
  char* mydescrip;
  int mylength;
  int mycost;
  int mypos[2];
  List* mykeywords;
  
 public:
  // Constructor
  SeminarRec(char* title, char* date, char* descrip, int length, int cost,
             int x, int y, List* keywords) {
    mytitle = title;
    mydate = date;
    mydescrip = descrip
    mylength = length
    mycost = cost;
    mypos[0] = x;
    mypos[1] = y;
    mykeywords = keywords
  }

  ~SeminarRec() {
    delete mytitle;
    delete mydate;
    delete mydescrip;
    delete mykeywords;
  }

  // Access methods. Note that once created, the data never change.
  char* title() { return mytitle; }
  char* date() { return mydate; }
  char* descrip() { return mydescrip; }
  int length() { return mylength; }
  int cost() { return mycost; }
  int x() { return mypos[0]; }
  int y() { return mypos[1]; }
  List* keywords() { return mykeywords; }
};

// Overload << operator to print Seminar records
ostream& operator << (ostream& s, SeminarRec* p) {
  return s << p->title() << endl <<  p->date() << ", " << p->length()
           << endl << p->descrip() << endl << p->cost() << ", "
           << p->x() << ", " << p->y() << endl
           << p->keywords();
}

NEED TO DO << OVERLOAD FOR KEYWORDS LIST
