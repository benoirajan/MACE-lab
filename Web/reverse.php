
<!DOCTYPE html>
<html>
<head>
	<title>fact check</title>
</head>
<body>
	<form method="GET" name="f1">
		<label for="n">Enter a number</label>
		<input type="number" name="n" required="required">
		<input type="submit" name="sum" value="Find">
	</form>
	<?php
	function reverse($n){
		$chars = str_split($n);
		$s = "";
		for ($i=strlen($n)-1; $i >= 0; $i--) { 
			$s=$s.$chars[$i];
		}
		echo $s;
	}
	if(isset($_GET['sum'] )){
		$n = $_GET['n'];
		echo "Reverse of ".$n." is ";
		reverse($n);
	}
	?>
</body>
</html>