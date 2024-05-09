<?php 

        // set session
            session_start();
            $_SESSION["firstname"] = "ahmed";
            // $_SESSION["lastname"] = "hady";

        // get session 
            echo "hi ".$_SESSION["firstname"]." ".$_SESSION["lastname"];

        // delete session

        unset($_SESSION["firstname"]);
