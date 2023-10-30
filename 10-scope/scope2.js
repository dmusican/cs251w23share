// https://github.com/getify/You-Dont-Know-JS/blob/master/this%20&%20object%20prototypes/ch1.md

function fun1() {
    return fun2.call(this);
}
function fun2() {
    return this.x;
}

var six = {x: 6};
var eight = {x: 8};

// First, just a demo of how "this" works
console.log(fun2.call(six));
console.log(fun2.call(eight));

console.log("---------------");

console.log(fun1.call(six));
console.log(fun1.call(eight));
