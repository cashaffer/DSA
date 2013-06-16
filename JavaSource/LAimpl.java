class AList implements List {   // Array-based list
  private static final int defaultSize = 10;
  private int msize;            // Maximum size of list
  private int numInList;        // Actual number in list
  private int curr;             // Position of current Object
  private Object[] listArray;   // Array holding list Objects

  AList() { setup(defaultSize); } // Constructor: fixed size

  AList(int sz) { setup(sz); }    // Constructor: default size

  private void setup(int sz) {    // Do actual initializations
    msize = sz;
    numInList = curr = 0;
    listArray = new Object[sz];   // Create listArray
  }

  public void clear()             // Remove Objects from list
  { numInList = curr = 0; }       //   Reinitialize values

  public void insert(Object it) { // Insert Object
    Assert.notFalse(numInList < msize, "List is full");
    Assert.notFalse((curr >=0) && (curr <= numInList),
                    "Bad value for curr");
    for (int i=numInList; i>curr; i--) // Shift Objects
      listArray[i] = listArray[i-1];
    listArray[curr] = it;
    numInList++;                  // Increment current size
  }

  public Object currValue() {     // Return current value
    Assert.notFalse(isInList(), "No current element");
    return listArray[curr];
  }

  public void print() {           // Print all list's Objects
    if (isEmpty()) System.out.println("()");
    else {
      System.out.print("( ");
      for (setFirst(); isInList(); next())
        System.out.print(currValue() + " ");
      System.out.println(")");
    }
  }
} // class Alist
