def evaluate(f, x, y):
    return f(x,y)

# (define evaluate
#     (lambda (f x y)
#        (f x y)))

def plus(a,b):
    return a+b

print(evaluate(plus, 3, 5))
