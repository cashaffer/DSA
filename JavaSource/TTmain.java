import java.io.*;

public class TTmain {

public static void main(String args[]) throws IOException {

  TTtree tree = new TTtree();
  IElem it;

  System.out.println("IsEmpty: " + tree.isEmpty());
  tree.insert(new IElem(10));
  tree.print();
  System.out.println("IsEmpty: " + tree.isEmpty());
  tree.remove(10);
  tree.print();
  System.out.println("IsEmpty: " + tree.isEmpty());
  tree.clear();
  System.out.println("IsEmpty: " + tree.isEmpty());
  tree.insert(new IElem(15));
  tree.print();
  System.out.println("IsEmpty: " + tree.isEmpty());
  it = (IElem)tree.find(20);
  if (it == null) System.out.println("Not found");
  else System.out.println("Found " + it);
  it = (IElem)tree.find(15);
  if (it == null) System.out.println("Not found");
  else System.out.println("Found " + it);
  tree.remove(20);
  tree.insert(new IElem(20));
  tree.print();
  tree.remove(20);
  tree.print();
  tree.insert(new IElem(35));
  tree.print();
  tree.insert(new IElem(30));
  tree.print();
  tree.insert(new IElem(17));
  tree.print();
  tree.insert(new IElem(19));
  tree.print();
  tree.insert(new IElem(100));
  tree.print();
  System.in.read();
  tree.insert(new IElem(90));
  tree.print();
  tree.insert(new IElem(95));
  tree.print();
  tree.insert(new IElem(1));
  tree.print();
  it = (IElem)tree.find(100);
  if (it == null) System.out.println("Not found");
  else System.out.println("Found " + it);
  it = (IElem)tree.find(99);
  if (it == null) System.out.println("Not found");
  else System.out.println("Found " + it);
  it = (IElem)tree.find(20);
  if (it == null) System.out.println("Not found");
  else System.out.println("Found " + it);
  System.in.read();
  System.out.println("Need to do some delete tests.");
  tree.remove(15);
  tree.print();
  tree.remove(15);
  tree.print();
  tree.remove(15);
  tree.remove(70);
  tree.print();
  tree.clear();
  tree.print();
  System.out.println("IsEmpty: " + tree.isEmpty());
  System.in.read();
}

}
