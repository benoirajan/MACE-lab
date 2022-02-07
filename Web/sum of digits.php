
<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>
	<form method="GET" name="f1">
		<h1>Sum of digits finder</h1>
		<label for="n">Enter a number</label>
		<input type="number" name="n" required="required">
		<input type="submit" name="sum" value="Sum">
	</form>
	<?php
	function sum($n){
		$s = 0;
		$chars = str_split($n);
 
		foreach ($chars as $char) 
			$s+=(int)$char;
		return $s;
	}
	if(isset($_GET['sum'] )){
		$n = $_GET['n'];
		echo "<p>Sum of digits of ".$n." is: </p>"
	?>
	<span>
	<?php
		echo sum($n);	
	}
	?>		
	</span>
</body>
</html>