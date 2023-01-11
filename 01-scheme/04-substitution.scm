;;; (subst 'b 'a '((b c) (b () d)))  --> ((a c) (a () d))
;;; any arbitrary level of nesting

(define subst
  (lambda (old new input)
    (cond ((null? input) ____________)
	  ((list? input) ____________)
	  ((equal? input old) ______________)
	  (else _____________________))))


;;; (subsets '(1 2 3)) ---> ( () (1) (2) (3) (1 2) (1 2) (2 3) (1 2 3))

