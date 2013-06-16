/** A JUnit test class for the PR quadtree. */

import java.io.*;

public class PRquadTest
    extends junit.framework.TestCase
{

  /**
   * This method is automatically called once before each test case
   * method, so that all the variables are cleanly initialized for
   * each test.
   */
  public void setUp()
  {
  }

  /** Successful calls to fact */
  public void testBasic() {
      PRQuadtree<CityRec> theTree = new PRQuadtree<CityRec>(1024);
  }
}
