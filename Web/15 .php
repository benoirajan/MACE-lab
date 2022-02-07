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
// if (isset($_GET['del'])) {
//     $sql = "delete from usr where id=" . $_GET['id'];
//     $conn->query($sql);
//     echo "deleted successfully";
// }
$artist=$arts=$cust=0;
$r = $conn->query("select * from artist");
if($r)
    $artist=$r->num_rows;

$r = $conn->query("select * from customer");
if($r)
    $cust=$r->num_rows;

$r = $conn->query("select * from art_wrk");
if($r)
    $arts=$r->num_rows;
?>
<html>
    <body>
        <h1>Art gallery</h1>
        

        <h2>About art gallery</h2>
        <dl>
            <dt>Insert</dt>
            <dd><a href="15/art.htm"><h3>Arts</h3></a></dd>
            <dd><a href="15/artist.htm"><h3>Artist</h3></a></dd>
            <dd><a href="15/cust.htm"><h3>Customer</h3></a></dd>
        </dl>
        
        
        
        <p>We have: </p>
        <table>
            <tr>
                <td><?php echo $arts;?></td>
                <td>Art works</td>
            </tr>
            <tr>
                <td><?php echo $cust;?></td>
                <td>Customers</td>
            </tr>
            <tr>
                <td><?php echo $artist;?></td>
                <td>Artists</td>
            </tr>
        </table>
    </body>
</html>
