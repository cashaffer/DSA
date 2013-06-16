/** The City Record class */

class CityRec {
  private String name;
  private int[] coord = new int[2];

  CityRec() {
  }

  CityRec(String n, int x, int y) {
    name = n;
    coord[0] = x;
    coord[1] = y;
  }
}
