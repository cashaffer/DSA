/** A PR Quadtree leafnode. Subclass of QuadNode. */
class QuadLeaf<E> implements QuadNode<E> {
  E theRec;

  QuadLeaf() {}
  QuadLeaf(E r) { theRec = r; }

  public boolean isLeaf() { return true; }
}
