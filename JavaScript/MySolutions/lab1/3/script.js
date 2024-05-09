function temperature_status(today_temperature){
return (today_temperature>=30?"Hot":"Cold")
}
var today_temperature = parseInt(prompt("Temperature : "))
document.write(temperature_status(today_temperature))
