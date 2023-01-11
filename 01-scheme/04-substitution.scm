;;; (subst 'b 'a '((b c) (b () d)))  --> ((a c) (a () d))
;;; any arbitrary level of nesting

(define subst
  (lambda (old new input)
    (cond ((null? input) '())
	  ((list? input)

	   (cons
	    (subst old new (car input))
	    (subst old new (cdr input))))

	  ((equal? input old) new)
	  (else input))))


;;; (subsets '(1 2 3)) ---> ( () (1) (2) (3) (1 2) (1 2) (2 3) (1 2 3))

