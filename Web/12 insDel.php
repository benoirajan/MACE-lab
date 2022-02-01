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
//    $conn = mysqli_connect($servername, $username, $password);
//    
//    $sql = "CREATE DATABASE " . $db;
//    $conn->query($sql);
//    $conn->query("USE " . $db);
//    $sql = "CREATE TABLE api(
//    id INT,
//    NAME VARCHAR(20),
//    dob DATE )";
//    $conn->query($sql);
}
if(isset($_GET['del'])){
    $sql = "delete from api where id=".$_GET['id'];
    $conn->query($sql);
    echo "deleted successfully";
}
?>
<html>
    <body>
        <h1>Table management</h1>
        <table border="1">
            <thead>
                <tr>
                    <th>#</th>
                    <th>Name</th>
                    <th>Date of birth</th>
                    <th>Delete</th>
                </tr>
            </thead>
            <tbody>



                <?php
                $sql = "select * from api";
                $r = $conn->query($sql);
                while ($a = $r->fetch_array()) {
                    echo "<tr>
                    <td>" . $a['id'] . "</td>
                        <td>" . $a['NAME'] . "</td>
                            <td>" . $a['dob'] . "</td>
                                <td><a href='?id=" . $a['id'] . "&del=tu'>Delete</a></td>
                </tr>";
                }
                ?> 
            </tbody>
        </table>
    </body>
</html>