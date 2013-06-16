public interface List {            // List ADT
  public void clear();             // Remove all Objects
  public void insert(Object item); // Insert Object at curr
  public void append(Object item); // Insert Object at tail
  public Object remove();          // Remove/return Object
  public void setFirst();          // Set current to first pos
  public void next();              // Move current to next pos
  public void prev();              // Move current to prev pos
  public int length();             // Return current length
  public void setPos(int pos);     // Set current to pos
  public void setValue(Object val); // Set current Object
  public Object currValue();       // Return value of Object
  public boolean isEmpty();        // True if list is empty
  public boolean isInList();       // True if within list
  public void print();             // Print list elements
} // interface List
