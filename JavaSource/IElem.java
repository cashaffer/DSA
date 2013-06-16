// Source code example for "A Practical Introduction
// to Data Structures and Algorithm Analysis, 3rd Edition (Java)"
// by Clifford A. Shaffer, Prentice Hall, 2008.
// Copyright 2008 by Clifford A. Shaffer

public class IElem implements Elem {

  private int value;

  public IElem(int v) { value = v; }
  public IElem() {value = 0;}

  public int key() { return value; }
  public void setkey(int v) { value = v; }

  // Override Object.toString
  public String toString() {
    return Integer.toString(value);
  }

}


