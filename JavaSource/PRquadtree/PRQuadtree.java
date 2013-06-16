/** The PR Quadtree class */

class PRQuadtree<E> {
  private QuadNode<E> root;
  private QuadLeaf<E> flyweight;
  int width;

  /** Constructor */
  PRQuadtree(int w) {
    width = w;
    flyweight = new QuadLeaf<E>();
    root = flyweight;
  }

  public void insert(int k[], E rec) {
    root = inserthelp(root, k, rec, 0, 0, width);
  }

  private QuadNode<E> inserthelp(QuadNode<E>subroot, int k[], E rec,
                                 int x, int y, int w) {
    if (subroot == flyweight)
      return new QuadLeaf<E>(rec); // Replace flyweight with a real leaf node
    else
      System.out.println("You implement this");
    return subroot;
  }
}
