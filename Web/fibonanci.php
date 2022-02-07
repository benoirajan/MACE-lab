
<!DOCTYPE html>
<html>
<head>
	<title>fibonanci series</title>
</head>
<body>
	<form method="GET" name="f1">
		<label for="n">Enter number of terms</label>
		<input type="number" name="n" required="required">
		<input type="submit" name="sum" value="Find">
	</form>
	<?php
	function fibo($n){
		$f=0;
		$s = 1;
		echo "0, ";
		$t = 0;
		for ($i=1; $i<$n ; $i++) { 
			echo ($t = $s+$f).", ";
			$s = $f;
			$f = $t;
		}
	}
	if(isset($_GET['sum'] )){
		$n = (int)$_GET['n'];
		echo $n." terms of fibonanci :<br/>";
		fibo($n);
	}
	?>
</body>
</html>