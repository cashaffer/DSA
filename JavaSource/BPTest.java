/** A JUnit test class for the B+ tree-based dictionary. */

import java.io.*;

public class BPTest
    extends junit.framework.TestCase
{

  private Dictionary<Integer, Integer> D1;
  
  /**
   * This method is automatically called once before each test case
   * method, so that all the variables are cleanly initialized for
   * each test.
   */
  public void setUp()
  {
    D1 = new BPTree<Integer, Integer>();
  }

  public void testDict() {
  }
}
