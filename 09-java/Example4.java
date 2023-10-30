import java.util.function.*;

public class Example4 {
    public static int doit
        (IntBinaryOperator
         ttd, int x, int y) {
        return ttd.applyAsInt(x,y);
    }

    public static void main(String[] args) {

        IntBinaryOperator adder = (a,b) -> a + b;
        int y = doit(adder, 2, 5);

        IntBinaryOperator multer = (a,b) -> a * b;
        int z = doit(multer, 2, 5);

        System.out.println(y);
        System.out.println(z);
    }
}
