<?php 
$id = $name = $brand =$cat=$price='';
if(isset($_POST["sub"])){
    if(is_null($_POST['pid']))
        $id = 'Field is required';
    elseif(is_nan(floatval ($_POST['pid'])))
        $id='It should be a number';
    if(is_null($_POST['pname']))
        $name = 'Field is required';
    if(is_null($_POST['br']))
        $brand = 'Field is required';
    if(is_null($_POST['cat']))
        $cat = 'Field is required';
    if(is_null($_POST['price']))
        $price = 'Field is required';
}
?>
<html>
    <head>
        <title>PHP validation</title>
    </head> 
    <body>
        <div>
            <form name="frm"  method="post">
                <?php echo $id; ?>
                <input type="number" name="pid" placeholder="Product id"/><br/>
                <?php echo $name; ?>
                <input type="text" name="pname" placeholder="Product name"/><br/>
                <?php echo $brand; ?>
                <input type="text" name="br" placeholder="brand"/><br/>
                <?php echo $cat; ?>
                <input type="text" name="cat" placeholder="Category"/><br/>
                <?php echo $price; ?>
                <input type="number" name="price" placeholder="price"/><br/>
                <input type="submit" name="sub" value="Submit"/>
            </form>
        </div>
    </body>
</html>


