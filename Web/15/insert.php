<?php
$servername = "localhost";
$username = "root";
$password = "";
$db = "test";

// Create connection
$conn = mysqli_connect($servername, $username, $password, $db);
//insert customer
if (isset($_POST['cust'])) {
    $sql = "INSERT INTO `customer` (`name`, `address`, `amount`) VALUES ( '" . $_POST['name'] . "', '" . $_POST['address'] . "', '" . $_POST['amt'] . "')";
    $conn->query($sql);
    echo 'Inserted successfully';
}

//insert art
else if (isset($_POST['art'])) {
    $sql = "INSERT INTO `art_wrk` (`name`, `date`, `style`, `type`) VALUES ( '" . $_POST['name'] . "', '" . $_POST['date'] . "', '" . $_POST['style'] . "', '"
            . $_POST['type'] . "')";
    $conn->query($sql);
    echo 'Inserted successfully';
}

//insert artist
else if (isset($_POST['artist'])) {
    $sql = "INSERT INTO `artist` ( `name`, `exp`, `category`) VALUES ( '" . $_POST['name'] . "', '" . $_POST['exp'] . "', '" . $_POST['catgry'] ."')";
    $conn->query($sql);
    echo 'Inserted successfully';
}
?>