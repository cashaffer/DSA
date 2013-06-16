public class DElem {

  private int[] coord;

  public DElem(int x, int y)
  { coord = new int[2]; coord[0] = x; coord[1] = y; }
  public DElem(int x, int y, int z) {
    coord = new int[3];
    coord[0] = x; coord[1] = y;  coord[2] = z;
  }

  public int key(int dim) { return coord[dim]; }
  public int[] coord() { return coord; }

  public boolean equalKey(int[] that) {
	for (int i=0; i<coord.length; i++)
	  if (coord[i] != that[i])
	    return false;
	return true;
  }

  // Override Object.toString
  public String toString() {
	if (coord.length == 2)
      return "(" + Integer.toString(coord[0]) + ", " +
		         Integer.toString(coord[1]) + ")";
	else
      return "(" + Integer.toString(coord[0]) + ", " +
		         Integer.toString(coord[1]) + ", " +
				 Integer.toString(coord[2]) + ")";
  }

}


