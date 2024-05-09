
function take_name(){
do{ user_name=prompt("Enter your name :")}
while(!(isNaN(user_name)))
return user_name
}

function take_birth_year(){
    do{ birth_year=prompt("Enter your birth year: ")}
    while(isNaN(birth_year) || birth_year>=2010 )
    return birth_year
}
function calc_age(birth_year){
    return 2024-birth_year
}

function core(){
    document.write("Name : "+take_name()+ "<br>")
    let birth_year=take_birth_year()
    document.write("birth year :" +birth_year+"<br>")
    document.write("Age : "+calc_age(birth_year)+"<br>")
}