<?php

$servername = "localhost";
$username = "root";
$password = "";
$db = "m21c";

// Create connection
$conn = mysqli_connect($servername, $username, $password, $db);
// Check connection
if (!$conn) {
    echo "Connection failed: refresh";
    $conn = mysqli_connect($servername, $username, $password);
    //Db creation
    $sql = "CREATE DATABASE " . $db;
    $conn->query($sql);
    $conn->query("USE " . $db);

    //table creation
    $sql = "CREATE TABLE api(
    id INT,
    NAME VARCHAR(20),
    dob DATE )";
    $conn->query($sql);
    echo "Database and Table creation successful";
}
?>