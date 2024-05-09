var tips= new Array()
tips = [
    "Use === to compare values and types, not just values",
    "Use let and const to declare variables that can't be changed by mistake",
    "Avoid using eval if possible. It opens up too many possibilities for errors",
    "Always check the type of a variable before accessing its properties",
    "Use console.log() to print values to the console and debug your code",
    "Use debugger; to set a breakpoint and pause the execution of your code. You can then inspect the values of variables and step through your code using the browses developer tools",
    "Use let and const for block-scoped variables and constants",
    "Use { } and [ ] to get values from objects and arrays easily",
    "Use parameters and arguments to pass values to and from functions",
    "Use map, filter, and reduce to manipulate arrays with ease",
    "Use promises, async/await, or generators to handle asynchronous code",
    "Use try…catch to handle errors and exceptions gracefully. You can use the try block to run some code that might cause an error, and use the catch block to handle the error if it occurs."
  ];
  

  function showTip() {
    var idx = Math.floor(Math.random() *tips.length); // round
    var tip = tips[idx];
    alert("Tip of Js Today 👋\n" + tip)
  }
  
  





















  // 0.42 x 10 = 4.2