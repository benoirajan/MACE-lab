<?php
$id = $name = $brand = $cat = $price = '';
if (isset($_POST["sub"])) {
    $id = htmlentities($_POST['pid']);
    $na = htmlentities($_POST['pname']);
    $br = htmlentities($_POST['br']);
    $ca = htmlentities($_POST['cat']);
    $pr = htmlentities($_POST['price']);
    ?>
    <table border="1" cellpadding="2">
        <thead>
            <tr>
                <th>#</th>
                <th>Name</th>
                <th>Brand</th>
                <th>Category</th>
                <th>Price</th>
            </tr>
        </thead>
        <tbody>
            <tr>
                <?php
                echo "<td>$id</td><td>$na</td><td>$br</td><td>$ca</td><td>$pr</td>";
                ?>
            </tr>
        </tbody>
    </table>

    <?php
} else {
    ?>
    <html>
        <head>
            <title>Store</title>
        </head> 
        <body>
            <div>
                <form name="frm"  method="post">
                    <input type="number" name="pid" placeholder="Product id"/><br/>
                    <input type="text" name="pname" placeholder="Product name"/><br/>
                    <input type="text" name="br" placeholder="brand"/><br/>
                    <input type="text" name="cat" placeholder="Category"/><br/>
                    <input type="number" name="price" placeholder="price"/><br/>
                    <input type="submit" name="sub" value="Submit"/>
                </form>
            </div>
        </body>
    </html>
<?php } ?>