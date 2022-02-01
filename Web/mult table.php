
<!DOCTYPE html>
<html>
<head>
	<title>Multiplication table</title>
</head>
<body>
	<form method="GET" name="f1">
		<label for="n">Enter number</label>
		<input type="number" name="n" required="required">
		<input type="submit" name="sum" value="Find">
	</form>
	<?php
	function fibo($n){
		for ($i=1; $i<11 ; $i++) { 
			echo $n." &#xd7; ".$i." = ".$n*$i."<br/>";
		}
	}
	if(isset($_GET['sum'] )){
		$n = (int)$_GET['n'];
		echo " table :<br/>";
		fibo($n);
	}
	?>
</body>
</html>