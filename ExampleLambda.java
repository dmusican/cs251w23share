// (define evaluate
//     (lambda (f x y)
       // (f x y)))

interface DaveOperation {
    public int f(int a, int b);
}

class Plus implements DaveOperation
    public int f(int a, int b) {
        return a+b;
    }
}

class ExampleLambda {

    public static void evaluate(
            DaveOperation dobj, int x, int y) {
        System.out.println(dobj.f(x,y));
    }

    public static void main(String[] args) {
        evaluate(new DaveOperation(), 3, 5);
    }

}
