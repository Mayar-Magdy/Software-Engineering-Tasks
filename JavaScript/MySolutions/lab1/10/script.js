// var hoisting
//you can access them before they are declared, but they will have no value.
console.log(x); // undefined
var x = 199;
console.log(x); // 199

//-let - cinst
// will get a ReferenceError. They are in a “temporal dead zone” from the start of the block until they are declared.
// let hoisting
//block-scoped 
console.log(y); // ReferenceError: Cannot access 'y' before initialization
let y = 20;
console.log(y); // 20

// const hoisting
console.log(z); // SyntaxError: Missing initializer in const declaration
const z = 30;
console.log(z); // 30
