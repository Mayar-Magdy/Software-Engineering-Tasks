function Take_Email() {
  let email;
  do {
   email = prompt("Enter your email:");
  }
  while (!(isNaN(email)))
  return email;
}


function checkEmail(email) {
  var email=Take_Email()
  var Pos = email.indexOf("@");
  if (Pos > 0 && Pos <  email.length - 1) 
    alert( "true")
  else 
    alert( "false")
}

