<?php
$servername = "localhost";
$username = "root";
$password = "";
$db = "test";

// Create connection
$conn = mysqli_connect($servername, $username, $password, $db);
// Check connection
if (!$conn) {
    echo "Connection failed";
    exit(0);
}
$s="create table IF NOT EXISTS books(
    id int primary key auto_increment,
    title varchar(40),
    auther varchar(40),
    edition varchar(40),
    publisher varchar(40)
)";
$conn->query($s);
if (isset($_POST['titl'])) {
    $sql = "INSERT INTO `books` (`title`, `auther`, `edition`, `publisher`) VALUES ( '" . $_POST['titl'] . "', '" . $_POST['autr'] . "', '" . $_POST['edn'] . "', '" . $_POST['pub'] . "')";
    $conn->query($sql);
    echo 'Inserted successfully';
}
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Book Manage</title>
    <style>
        .rb{
            background: #f783ff;
        }
        th{
            background: #ff42d6;
        }
        input:invalid{
            border-color:red;
        }
    </style>
    <script>
        function validate(a){
            if(a.value == ''){
                alert("Fill form")
                a.focus()
            }
        }
    </script>
</head>
<body>
    
    <H1>Book Management</H1>
    <form action="">
        <input type="text" name="st">
        <button type="submit">Search</button>
    </form>
    
    <?php
    $a='';
    if(isset($_GET['st'])&& empty(!$_GET['st']))
        $a="where title like '%". $_GET['st']."%'";
    $s="select * from books ".$a." LIMIT 0, 10";
    $r = $conn->query($s);
    echo "<table><tr>
    <th>Access number</th>
    <th>Title</th>
    <th>Auther</th>
    <th>Edition</th>
    <th>Publisher</th>
    </tr>";
    while($a = $r->fetch_assoc()){
        echo "<tr class='rb'>
        <td>".$a['id']."</td>
        <td>".$a['title']."</td>
        <td>".$a['auther']."</td>
        <td>".$a['edition']."</td>
        <td>".$a['publisher']."</td>
        </tr>";
    }
    echo "<table>";
    ?>
    <form action="" method="post">
        <table>
            <tr>
                <td>Title</td>
                <td><input type="text" minlength="5" onchange="validate(this)" name="titl" id="" required></td>
            </tr>
            <tr>
                <td>Auther</td>
                <td><input type="text" minlength="5" name="autr" id="" required></td>
            </tr>
            <tr>
                <td>Edition</td>
                <td><input type="number" min="1" max="100" name="edn" id="" required></td>
            </tr>
            <tr>
                <td>Publisher</td>
                <td><input type="text" name="pub" id="" required></td>
            </tr>
            <tr>
                <td></td>
                <td><button type="submit">Add</button></td>
            </tr>
        </table>
    </form>
</body>
</html>
