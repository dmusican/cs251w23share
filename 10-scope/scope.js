var x = 8;

function fun1() {
    var x = 6;
    fun2();
}

function fun2() {
    console.log( x );
}

fun2();
fun1();
