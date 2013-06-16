public class GenTree {

private GTNode rt;

public GenTree() { rt = null; }

public void clear() { rt = null; }

public GTNode root() { return rt; }

public void newroot(Object value, GTNode first, GTNode sib) {
  clear();
  rt = new GTNode(value, null, first, sib);
  first.setParent(rt);
  sib.setParent(rt);
}

}
