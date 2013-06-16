/** General tree node ADT */
interface GTNode<E> {
  public E value();                    // Return the value
  public boolean isLeaf();             // TRUE if this node is a leaf
  public GTNode<E> parent();           // Return the parent
  public GTNode<E> leftmostChild();    // Return the leftmost child
  public GTNode<E> rightSibling();     // Return the right sibling
  public void setValue(E value);       // Set the value
  public void setParent(GTNode<E> par);// Set the parent
  public void insertFirst(GTNode<E> n);// Add a new leftmost child
  public void insertNext(GTNode<E> n); // Insert a new right sibling
  public void removeFirst();           // Remove the leftmost child
  public void removeNext();            // Remove the right sibling
}
