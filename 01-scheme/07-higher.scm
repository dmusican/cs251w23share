(define add-one
  (lambda (x)
    (+ x 1)))

;; map takes two parameters
;; the second should be a list
;; the first should be a function of one parameter
(map add-one '(8 2 1 9 3))
