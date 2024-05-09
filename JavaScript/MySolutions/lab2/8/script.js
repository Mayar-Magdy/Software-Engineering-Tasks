
// The try statement lets you test a block of code to check for errors.
// The catch statement lets you handle the error if any are present.
// The throw statement lets you make your own errors.
// The finally statement lets you execute code after try and catch.  
// The finally block runs regardless of the result of the try-catch block.

try {
  let number1 = parseInt(prompt("try to divide , enter first number"));
  let number2 = parseInt(prompt("try to divide , enter second number"));
  if (number2 === 0) 
    throw new Error("❌cannot divide by zero❌");
  console.log(number1 / number2);
} catch (error) {
  console.log(error.message);
}
