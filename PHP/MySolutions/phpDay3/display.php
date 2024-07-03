<?php
if(file_exists('userInfo.txt')) {
    echo nl2br(file_get_contents('userInfo.txt'));
}
?>
