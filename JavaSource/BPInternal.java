class BPInternal<Key,E> implements BPNode<Key,E> { // Leaf node
  private int numrecords;
  private Key theKeys[];
  private BPNode<Key,E> thePointers[];

  public boolean isLeaf() { return true; }
  public int numrecs() { return numrecords; }
  public Key[] keys() { return theKeys; }
  public BPInternal<Key,E> add(BPInternal<Key,E> ptr) { return null; }
  public boolean underflow(int which) { return false; }
  public BPNode<Key,E> pointers(int which) { return thePointers[which]; }
};
