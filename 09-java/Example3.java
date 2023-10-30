interface ThingToDo {
    int f(int x, int y);
}

public class Example3 {
    public static int doit(ThingToDo ttd,
                           int x, int y) {
        return ttd.f(x,y);
    }

    public static void main(String[] args) {

        ThingToDo adder = (x,y) -> x + y;
        int y = doit(adder, 2, 5);

        int z = doit(new ThingToDo() {
                public int f(int x, int y) {
                    return x * y;
                }
            }, 2, 5);

        System.out.println(y);
        System.out.println(z);
    }
}
