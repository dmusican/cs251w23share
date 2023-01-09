;;; (remove-first 'a '(b a c d)) ---> (b c d)

;; this example I'm actually producing a list
(define remove-first
  (lambda (item lst)
    (cond ((null? lst) '())
	  ((equal? item (car lst)) (cdr lst))
	  (else
	   (cons (car lst)
		 (remove-first item (cdr lst)))))))
