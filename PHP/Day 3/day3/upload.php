<?php 

// name 
// valid image [png, jpg, svg, jpeg,]
// valid size 
// save 
// copy

        if($_POST["upload"]){

            $uploadingFile = $_FILES["myfile"]; // array 
            // print_r($uploadingFile);
            $file_name =  $uploadingFile["name"];
            $file_size = $uploadingFile["size"];
            $file_tem_path = $uploadingFile["tmp_name"];
           echo $file_size;
            // get the last part from the file name == extension 
            // string to array --> explode
            $my_array = explode(".", $file_name); // array 
            //  myimg.svg  ==> ["myimg", "svg"]
            // myimg.hello.png ==> ["myimg", "hello", "png"];
            $my_ext = end($my_array);
            // echo $my_ext; // $my_ext [png, jpg, jpeg, svg ]
            $my_ext = strtolower($my_ext);
            $valid_ext = ["png", "jpg", "jpeg","svg"];
            if(in_array($my_ext,$valid_ext )){
                if($file_size > 200000){
                    echo "<p style='color: red'>please upload other image, this size is invalid<p>";
                }else{
                    echo "thank you";
                    // save the name in file 
                    $myfile = fopen("usersimage.txt", "a");
                    $myphoto = time().$file_name."\n";
                    fwrite($myfile, $myphoto);
                    fclose($myfile);
                    // save file --> copy --> folder 
                move_uploaded_file($file_tem_path, "images/".time().$file_name);
                }
            }else{
                echo "<p style='color: red'> please upload valid image </p>";
            }
        }