<?php

    $server_name = "localhost";
    $username = "root";
    $password = "";
    $database_name = "day_4_swf";

    $connection = new mysqli($server_name, $username, $password, $database_name );

    if($connection) {
        echo "connected";
    }else{
        echo "ERROR!";
    }




?>