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
    $sql = "CREATE TABLE usr(
        id INT PRIMARY KEY,
        name VARCHAR(20),
        dob DATE,
        gender VARCHAR(6),
        address VARCHAR(60)
    )";
    $conn->query($sql);
    echo "Database and Table creation successful";
}
if (isset($_GET['del'])) {
    $sql = "delete from usr where id=" . $_GET['id'];
    $conn->query($sql);
    echo "deleted successfully";
}
if (isset($_POST['insert'])) {
    $sql = "INSERT INTO `usr` ( `name`, `dob`, `gender`, `address`) VALUES ( '" . $_POST['name'] . "', '" . $_POST['dob'] . "', '" . $_POST['gender'] . "', '"
            . $_POST['address'] . ", " . $_POST['pin'] . "')";
    $conn->query($sql);
    echo 'Inserted successfully';
}
?>
<html>
    <body>
        <h1>Patient Details Form</h1>
        <form method="post">
            <div>
                Name
                <input type="text" name="name" value="" size="30" /> 
            </div>
            <div>
                Date of birth
                <input type="date" name="dob" value="" />
            </div>
            <div>
                Gender
                <select name="gender">
                    <option>Male</option>
                    <option>Female</option>
                    <option>Other</option>
                </select>
            </div>
            <div>
                Address
                <textarea name="address" rows="4" cols="20"></textarea>
            </div>
            <div>
                in code/Postal address
                <input type="number" name="pin" size="6" />
            </div>
            <button name="insert" value="on" type="submit"  class="kidu">
                Insert
            </button>
        </form>

        <h1>Saved details</h1>
        <table border="1">
            <tr>
                <th>#</th>
                <th>Name</th>
                <th>Date of birth</th>
                <th>Gender</th>
                <th>Address</th>
                <th>Delete</th>
                <th>Update</th>
            </tr>
            <?php
            $sql = "select * from usr";
            $r = $conn->query($sql);
            while ($a = $r->fetch_array()) {
                echo "<tr>
                    <td>" . $a['id'] . "</td>
                        <td>" . $a['name'] . "</td>
                            <td>" . $a['dob'] . "</td>
                            <td>" . $a['gender'] . "</td>  
                            <td>" . $a['address'] . "</td>
                                <td><a href='?id=" . $a['id'] . "&del=tu'>Delete</a></td>
                                    <td><a href='?id=" . $a['id'] . "&up=tu'>Update</a></td>
                </tr>";
            }
            ?> 
        </table>
    </body>
</html>
