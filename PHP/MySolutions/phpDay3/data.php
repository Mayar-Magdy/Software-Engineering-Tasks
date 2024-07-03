<?php
    // Get User Data
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $name=$_POST['name'];
    $email = $_POST['email'];
    $password = $_POST['password'];
    $password_confirmed=$_POST['confirm_password'];
    $room = $_POST['room'];
    $ext = $_POST['ext'];
    $profile_picture = $_FILES['profile_picture']; //arr
    $file_tem_path = $profile_picture["tmp_name"];
    $file_name =  $profile_picture["name"];

    // Email validation - Method 1
    // if (!preg_match("/^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$/", $email)) {
    // header('Location: error.php?error=Invalid Email');
    // exit();
    // }

    // Email validation - Method 2
    if (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
        header('Location: error.php?error=Invalid Email');
        exit();
    }

    // Password validation
    if (strlen($password) != 8 || !preg_match('/^[a-z 0-9_]*$/', $password)) {
        header('Location: error.php?error=Invalid Password');
        exit();
    }
    // Password Confirmation
    if($password !== $password_confirmed)
    {
        header('Location: error.php?error=Not Same Password');
        exit();
    }

    //get the ext
    $my_array = explode(".", $file_name);
    $my_ext = end($my_array);

    // Profile picture validation
    $allowed_ext = ["png", "jpg", "jpeg","svg"];
    if (!in_array($my_ext,$allowed_ext )) {
        header('Location: error.php?error=Invalid Profile Picture');
        exit();
    }


  
    // Save form data to userInfo.txt
$user_info = [
        'Name' => $name,
        'Email' => $email,
        'Password' => $password,
        'Room No.' => $room,
        'Ext.' => $ext,
        'Profile Picture' => $profile_picture['name']
    ];
    file_put_contents('userInfo.txt', print_r($user_info, true), FILE_APPEND);
    // uplouding and save pic
     move_uploaded_file($file_tem_path, "img/".time().$file_name);

    // Redirect to display user info
    header('Location: display.php');
    exit();
}
?>