class Link {                // A singly linked list node
  private Object element;   // Object for this node
  private Link next;        // Pointer to next node in list
  Link(Object it, Link nextval)          // Constructor 1
    { element = it;  next = nextval; }   //  Given Object
  Link(Link nextval) { next = nextval; } // Constructor 2
  Link next() { return next; }
  Link setNext(Link nextval) { return next = nextval; }
  Object element() { return element; }
  Object setElement(Object it) { return element = it; }
} // class Link

//////////////////////////////////////////////////////////////

public class LList implements List { // Linked list class
  private Link head;            // Pointer to list header
  private Link tail;            // Pointer to last Object
  protected Link curr;          // Position of current Object

  LList(int sz) { setup(); }    // Constructor -- Ignore sz
  LList() { setup(); }          // Constructor

  private void setup()
  { tail = head = curr = new Link(null); } // Create header

  public void clear() {         // Remove all Objects
    head.setNext(null);
    curr = tail = head;         // Reinitialize
  }

  // Insert Object at current position
  public void insert(Object it) {
    Assert.notNull(curr, "No current element");
    curr.setNext(new Link(it, curr.next()));  
    if (tail == curr)           // Appended new Object
      tail = curr.next();
  }

  public Object remove() {      // Remove and return Object
    if (!isInList()) return null;
    Object it = curr.next().element();    // Remember value
    if (tail == curr.next()) tail = curr; // Set tail
    curr.setNext(curr.next().next());     // Remove from list
    return it;                            // Return value
  }
} // class LList
