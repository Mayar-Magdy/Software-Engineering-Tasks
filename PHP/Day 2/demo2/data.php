<?php 
 $mybtn =  $_POST["btn"];
    if(isset($mybtn)){
        $my_name = $_POST["name"]; // value
        $my_email = $_POST["email"];
        $my_position = $_POST["pos"];
        $age = $_POST["age"];

        if(empty($my_name) || empty($my_email) || empty($my_position) ){
            echo "<h3 style='color: red'>Please insert Data </h3>";
        }else{
            if(is_numeric($my_name) || !is_numeric($age)){
                echo "<h3 style='color: red'>Please insert valid data </h3>";
            }else{
                echo "thank you";
                $datafile = fopen("formsData.txt", "a");

                $info = $my_name." ".$my_email." ".$my_position." ".$age."\n";

                fwrite($datafile, $info);

                fclose($datafile);

            }
        }
    }