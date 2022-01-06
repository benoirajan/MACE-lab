<?php

$servername = "localhost";
$username = "root";
$password = "";
$db = "hms";

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
    $sql = "CREATE TABLE user(
    id INT Primary key,
    name VARCHAR(20),
    dob DATE,
    address varchar(30),
    )";
    $conn->query($sql);
    echo "Database and Table creation successful";
}
?>