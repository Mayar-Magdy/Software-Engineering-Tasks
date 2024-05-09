/*Can you use ternary conditional operator in previous example? Why? "no, 3 cases"
Can you use switch case in previous example? Why?*/ // "no, take 2 val"
function temperature_status(today_temperature,Actual_feel){
    if ((today_temperature>=25&&today_temperature<30) && (Actual_feel>25&&Actual_feel<30))
     return "normal"
    else if (today_temperature<25&&Actual_feel<25)
    return "Cold"
    else if (today_temperature>30&&Actual_feel>30)
    return "Hot"
    else return "Ambiguous, can't detect"
}
var today_temperature = parseInt(prompt("Temperature : "))
var Actual_feel = parseInt(prompt("Actual feel : "))
document.write(temperature_status(today_temperature,Actual_feel))