(define list-length
  (lambda (lst)
    (if (null? lst)
	0
	(+ 1 (list-length (cdr lst))))))

(define list-of-numbers?
  (lambda (lst)
    (if (null? lst)

 	#t

	(and
	 (number? (car lst))
	 (list-of-numbers? (cdr lst))))))

