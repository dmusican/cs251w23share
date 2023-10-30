interface ThingToDo {
    int f(int x, int y);
}

class Adder implements ThingToDo {
    public int f(int x, int y) {
        return x + y;
    }
}

class Multiplier implements ThingToDo {
    public int f(int x, int y) {
        return x * y;
    }
}

public class Example1 {
    public static int doit(ThingToDo ttd,
                           int x, int y) {
        return ttd.f(x,y);
    }

    public static void main(String[] args) {
        int y = doit(new Adder(), 2, 5);
        int z = doit(new Multiplier(), 2, 5);
        System.out.println(y);
        System.out.println(z);
    }
}
