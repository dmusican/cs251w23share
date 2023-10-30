x = 3

def fun1():
    x = 4
    global x
    fun2()

def fun2():
    print(x)

fun1()
