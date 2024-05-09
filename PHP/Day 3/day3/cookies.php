<?php 

$student_info = ["name" => "aya", "age" => 20, "address" => "cairo"];
// setcookie("info", $student_info["name"], $student_info["age"], $student_info["address"]);


foreach ($student_info as $key => $val){
    setcookie($key, "");
}

// $str = implode("" , $student_info);
// setcookie("data", $str);

// set data in cookies 
        // setcookie("course", "html", time()+30);
        // setcookie("position", "CEO");
        // setcookie("stuname", "noha");
// get cookies
    if($_COOKIE){
        echo "<h1>".$_COOKIE["stuname"].$_COOKIE["position"].$_COOKIE["course"]."<h1>";
    }else{
        echo "not set";
    }
    
 // delete cookies
    // setcookie("course", "");
    // setcookie("position", "");
    // setcookie("stuname", "");



        