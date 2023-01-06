;; lambda creates functions
;; (lambda (parameters)
;;     function body))

;;(lambda (x y)
;;  (+ x y)
	
;;(   (lambda (x y) (+ x y))  7  9)

(define my-plus
  (lambda (x y)
    (+ x y)))

(my-plus 9 12)

;; shorthand don't do this
(define my-other-plus x y
  (+ x y))

