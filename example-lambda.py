def evaluate(f, x, y):
    return f(x,y)

# (define evaluate
#     (lambda (f x y)
#        (f x y)))

def plus(a,b):
    return a+b

print(evaluate(plus, 3, 5))

print(evaluate(lambda x,y: x+y, 3, 5))

# (evaluate
#    (lambda (x y)
#      (+ x y))
#     3
#     5)

people = [("Dave", 3), ("Liz", 8),
          ("Rae", 1), ("Evan", 12)]
people.sort()
print(people)
