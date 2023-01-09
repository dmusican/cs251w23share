;;; (remove-first 'a '(b a c d)) ---> (b c d)

;; this example I'm actually producing a list
(define remove-first
  (lambda (item lst)
    (cond [(null? lst) '()]
	  [(equal? item (car lst)) (cdr lst)]
	  [else
	   (cons (car lst)
		 (remove-first item (cdr lst)))])))

;; Two tasks
(define nth
  (lambda (lst n)   ---> returns nth item of list

	  ))

(define remove
  ;; just like remove-first, but get all of them
  )
