public class GTNode implements GTNodeInf {

private MyGTNode rent;
private MyGTNode leftchild;
private MyGTNode rightsib;
private Object element;

public MyGTNode(Object value) {
  rent = leftchild = rightsib = null;
  element = value;
}

public MyGTNode(Object value, GTNode par, GTNode leftc, GTNode rights) {
  element = value;
  rent = par; leftchild = leftc; rightsib = rights;
}  

public Object value() { return element; }

public boolean isLeaf() { return leftchild == null; }

public GTNode parent() { return rent; }

public GTNode leftmost_child() { return leftchild; }

public GTNode right_sibling() { return rightsib; }

public void setValue(Object value) { element = value; }

public void setParent(GTNode par) {rent = par; }

public void insert_first(GTNode n) {
  n.rightsib = leftchild;
  n.rent = this;
  leftchild = n;
}

public void insert_next(GTNode n) {
  n.rightsib = rightsib;
  n.rent = rent;
  rightsib = n;
}

public void remove_first() {
  if (leftchild == null) return;
  leftchild = leftchild.rightsib;
}

public void remove_next() {
  if (rightsib == null) return;
  rightsib = rightsib->rightsib;
}

}
