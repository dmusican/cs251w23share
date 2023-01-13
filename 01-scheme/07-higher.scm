(define add-one
  (lambda (x)
    (+ x 1)))

;; map takes two parameters
;; the second should be a list
;; the first should be a function of one parameter
;;
;; returns a new list that runs the function
;; on each item in that list
;; (map add-one '(8 2 1 9 3))

;;; reduce = fold-left, fold-right
