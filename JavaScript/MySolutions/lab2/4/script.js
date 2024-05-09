var fullNameRegex = /^[A-Za-z]{3,}(\s[A-Za-z]{3,})+$/;
// name@domain.com.eg
var emailRegex = /^[A-Za-z0-9_]+@([A-Za-z0-9_.-]+\.)+(com|net|edu|org)\.eg$/;

var fullName, email;

do {
  fullName = prompt("Enter your full name:");
  if (!fullNameRegex.test(fullName)) {
    alert(":( Invalid full name. Please enter only characters, separated by spaces, with at least 3 letters in each part.");
  }
} while (!fullNameRegex.test(fullName));

do {
  email = prompt("Enter your email:\nlike name@domain.com.eg");
  if (!emailRegex.test(email)) {
    alert(":( Invalid email. Please enter a valid email from Egypt (.eg domain) .");
  }
} while (!emailRegex.test(email));

alert("Your full name is: " + fullName + "\nYour email is: " + email);


