// (define evaluate
//     (lambda (f x y)
       // (f x y)))

interface Function {
    public int f(int a, int b);
}

class ExampleLambda2 {

    public static void evaluate(
            Function dobj, int x, int y) {
        System.out.println(dobj.f(x,y));
    }

    public static void main(String[] args) {
        evaluate(new DaveOperation() {
                public int f(int a, int b) {
                    return a+b;
                }}, 3, 5);
        evaluate(new DaveOperation() {
                public int f(int a, int b) {
                    return a-b;
                }}, 3, 5);
    }

}
