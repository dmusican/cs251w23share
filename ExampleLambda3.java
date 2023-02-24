// (define evaluate
//     (lambda (f x y)
       // (f x y)))

interface Function {
    public int f(int a, int b);
}

class ExampleLambda3 {

    public static void evaluate(
            Function dobj, int x, int y) {
        System.out.println(dobj.f(x,y));
    }

    public static void main(String[] args) {
        Function plus = (a,b) -> x + y;
        evaluate(plus, 3, 5);

        Function minus = (a,b) -> x - y;
        evaluate(minus, 3, 5);
    }

}
