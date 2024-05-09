// 8-	Show prompt that ask user to enter his birth date and tell user to enter the date in the following format (DD – MM – YYYY) ex. 22–01–1999,
// and then create function that take user input as a parameter and ensure that the string is entered in this format (that user entered string is 10 characters and contains (-) after the second character and after fifth character).[Don't use RegExp, use string functions].
// a.	If the user input was correct: make the function create new date object, and initialize it with Day, Month, year values (using date constructor: Date(y,m,d)) and then show alert to the user with the date in date string format. 
// b.	If user input wasn't correct, show alert saying "Wong Date Format". 
// c.	Create button “show date” that calls the function. 

// 8-	Show prompt that ask user to enter his birth date and tell user to enter the date in the following format (DD – MM – YYYY) ex. 22–01–1999,
let userInput = prompt("Enter your birth date in the following format (DD-MM-YYYY) ex. 22-01-1999");

// and then create function that take user input as a parameter and ensure that the string is entered in this format (that user entered string is 10 characters and contains (-) after the second character and after fifth character).[Don't use RegExp, use string functions].
// a.	If the user input was correct: make the function create new date object, and initialize it with Day, Month, year values (using date constructor: Date(y,m,d)) and then show alert to the user with the date in date string format. 
// b.	If user input wasn't correct, show alert saying "Wong Date Format". 

function checkDateFormat(userInput) {
  if (userInput.length === 10 && userInput[2] === "-" && userInput[5] === "-") {
    //slice(beg,end)
    //slice(include,exclude)
    let day = parseInt(userInput.slice(0, 2)); //0 1
    let month = parseInt(userInput.slice(3, 5)) - 1; // -1 becase it's zero based 0-11
    let year = parseInt(userInput.slice(6, 10));
    let date = new Date(year, month, day);
    alert("Your birth date is " + date.toDateString());
  } else
    alert("Wrong Date Format");
}

// c.	Create button “show date” that calls the function. 
var button = document.createElement("button");
button.textContent = "Show Date 👀🎂";
button.onclick =checkDateFormat(userInput);
document.body.appendChild(button);
