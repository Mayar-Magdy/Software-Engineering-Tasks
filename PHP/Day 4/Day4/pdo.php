<?php 
    // pdo ==> php data object
    $server_name = "localhost";
    $username = "root";
    $password = "";
    $database_name = "day_4_swf";


$connection = new PDO("mysql:host=$server_name;dbname=$database_name", $username, $password);

if($connection) {
    echo "connected";
}else{
    echo "ERROR!";
}
