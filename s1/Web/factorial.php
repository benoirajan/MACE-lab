
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
	function fact($n){
		$f = 1;
		for ($i=1; $i <= $n; $i++) { 
			$f*=$i;
		}
		echo $f;
	}
	if(isset($_GET['sum'] )){
		$n = (int)$_GET['n'];
		echo "Factorial of ".$n." is ";
		fact($n);
	}
	?>
</body>
</html>