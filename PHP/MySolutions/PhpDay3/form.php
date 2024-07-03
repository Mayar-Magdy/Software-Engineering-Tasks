<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="stylesss.css">
</head>

<body>
    <nav>
        <ul>
            <li><a href="not_found.html">Home</a></li>
            <li><a href="not_found.html">Products</a></li>
            <li><a href="display.php">Users</a></li>
        </ul>
        <div class="admin">
            <a href="index.html"> <img src="resources/admin.jpg" alt="Admin"></a>
            <a href="index.html">Admin</a>
        </div>
    </nav>
    <h2>Add User</h2>
    <form action="data.php" method="post" enctype="multipart/form-data">
        Name<span>*</span> <input type="text" name="name" required><br>
        Email<span>*</span> <input type="email" name="email" required><br>
        Password<span>*</span> <input type="password" name="password" required><br>
        Confirm Password<span>*</span> <input type="password" name="confirm_password" required><br>
        Room No.<span>*</span> <select name="room">
            <option value="Application1">Application1</option>
            <option value="Application2">Application2</option>
            <option value="Cloud">Cloud</option>
        </select><br>
        Ext.<span>*</span> <input type="text" name="ext" required><br>
        Profile Picture <input type="file" name="profile_picture" accept="image/*" required><br>
        <button type="submit">Submit</button>
        <button type="reset">Reset</button>
    </form>
</body>

</html>
