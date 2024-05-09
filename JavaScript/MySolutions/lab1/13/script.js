
function tableCreate(user_name, user_age) {
    var body = document.body;
    var table = document.createElement("table");
    table.style.width = "100%";
    table.setAttribute("border", "1");
    var tr1 = document.createElement("tr");
    var td1 = document.createElement("td");
    td1.innerHTML = "Name";
    var td2 = document.createElement("td");
    td2.innerHTML = user_name;
    tr1.appendChild(td1);
    tr1.appendChild(td2);

    var tr2 = document.createElement("tr");
    var td3 = document.createElement("td");
    td3.innerHTML = "birh year";
    var td4 = document.createElement("td");
    td4.innerHTML = user_birth_year;
    tr2.appendChild(td3);
    tr2.appendChild(td4);


    var tr3 = document.createElement("tr");
    var td5 = document.createElement("td");
    td5.innerHTML = "Age";
    var td6 = document.createElement("td");
    td6.innerHTML = user_age;
    tr3.appendChild(td5);
    tr3.appendChild(td6);

    table.appendChild(tr1);
    table.appendChild(tr2);
    table.appendChild(tr3);

    body.appendChild(table);
  }
  
  var user_name = take_name()
  var user_birth_year = take_birth_year()
  var user_age =calc_age(user_birth_year)

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

    tableCreate(user_name, user_age);
