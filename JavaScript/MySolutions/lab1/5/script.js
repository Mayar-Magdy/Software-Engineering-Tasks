
//Use switch(). And why it’s better in that case?).avd repeated 
function temperature_status(Student_faculty ){
    flag=true
    switch (Student_faculty){
    case "FCI":
        alert("You're eligible to Programing tracks")
        flag=true
        break;
    case "Engineering":
        alert("You're eligible to Network and Embedded tracks")
        break;
    case "Commerce":
        alert("You're eligibleto to ERP and Social media tracks")
        break;
    default :
    alert("You're eligible to SW fundamentals track")
    break;
    }
               
}
var Student_faculty = prompt("Enter your faculty : ")
temperature_status(Student_faculty)
