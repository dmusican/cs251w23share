// (define evaluate
//     (lambda (f x y)
       // (f x y)))

interface Function {
    public int f(int a, int b);
}

class ExampleLambda4 {

    public static void evaluate(
            Function dobj, int x, int y) {
        System.out.println(dobj.f(x,y));
    }

    public static void main(String[] args) {
        evaluate((a,b,c) -> a + b, 3, 5);

        evaluate((a,b) -> a - b, 3, 5);
    }

}
