/**
 * <h2>Output at:</h2>
 * @link https://github.com/benoirajan/MACE-lab/tree/main/exam
 */
<?php
$conn = mysqli_connect("localhost", "root", '', "test");
// Check connection
if (!$conn) {
    echo "Connection failed";
    exit(0);
}
$s="create table IF NOT EXISTS grocery(
pid int primary key auto_increment,
pname varchar(40),
brand varchar(40),
category varchar(40),
price float
)";
$conn->query($s);
$msg='';
$id = $name = $brand = $cat = $price = '';
if (isset($_POST["sub"])) {
    $id = htmlentities($_POST['pid']);
    $na = htmlentities($_POST['pname']);
    $br = htmlentities($_POST['br']);
    $ca = htmlentities($_POST['cat']);
    $pr = htmlentities($_POST['price']);
    $msg="Error";
    $s = "INSERT INTO `grocery` VALUES ( '$id', '$na', '$br', '$ca', '$pr')";
    if($conn->query($s))
        $msg = "Success";
}
?>

<html>

<head>
    <title>Store</title>
    <script>
        function clear(){
            a=document.forms[0]
            for(i=0;i<5;i++)
                a[i].setCustomValidity('');
            console.log("clear")
        }
       function validate(a){
           b = 0
           
           if(a[0].value==''){
                a[0].setCustomValidity("This field is empty")
                a[0].reportValidity()
                b=1
           }
           if(a[1].value==''){
                a[1].setCustomValidity("This field is empty")
                a[1].reportValidity()
                b=2
           }
           if(a[2].value==''){
                a[2].setCustomValidity("This field is empty")
                a[2].reportValidity()
                b=3
           }
           if(a[3].value==''){
                a[3].setCustomValidity("This field is empty")
                a[3].reportValidity()
                b=4
           }
           if(a[4].value==''){
                a[4].setCustomValidity("This field is empty")
                a[4].reportValidity()
                b=5
           }
           console.log(b)
           return b==0
       } 
    </script>
</head>

<body>
    <h1>Product details</h1>
    <table cellpadding="2">
        <tr>
            <th>#</th>
            <th>Name</th>
            <th>Brand</th>
            <th>Category</th>
            <th>Price</th>
        </tr>
        <?php 
            $s="select * from grocery ";
            $r = $conn->query($s);
            while($a = $r->fetch_assoc()){
            echo "<tr>
            <td>".$a['pid']."</td>
            <td>".$a['pname']."</td>
            <td>".$a['brand']."</td>
            <td>".$a['category']."</td>
            <td>".$a['price']."</td>
            </tr>";
            }
            ?>
    </table>
    <div>
        <h1>Insert Product</h1>
        <div>
            <?php echo $msg;?>
        </div>
        <form name="frm" method="post"  onsubmit="return validate(this)">
            <input type="number" name="pid" placeholder="Product id" /><br />
            <input type="text" name="pname" placeholder="Product name" /><br />
            <input type="text" name="br" placeholder="brand" /><br />
            <input type="text" name="cat" placeholder="Category" /><br />
            <input type="number" name="price" placeholder="price" /><br />
            <input type="submit"  name="sub" value="Submit" />
        </form>
    </div>
    
</body>
<style>
    tr {
        border: 1px solid #ddd;
        padding: 8px;
        background: #def;
    }


    th {
        background-color: #294d52;
        color: white;
    }

    th,
    td {
        padding: 8px 10px;
    }

    table {
        border-radius: 9px;
    }

    input[type=text],
    input[type=number],
    select {
        width: 50%;
        padding: 12px 20px;
        margin: 8px 0;
        border-width: 1px;
        border-radius: 9px;
        display: block;
    }


    input[type=submit] {
        padding: 8px 10px;
        margin: 8px 0;
        border-radius: 8px;
    }

    div{
        padding: 10px ;
        margin-bottom: 0px 10px;
        background-color: #d9f0f3;
    }
</style>

</html>
