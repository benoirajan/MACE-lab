
<!DOCTYPE html>
<html>
<head>
	<title>Prime check</title>
</head>
<body>
	<form method="GET" name="f1">
		<label for="n">Enter a number</label>
		<input type="number" name="n" required="required">
		<input type="submit" name="sum" value="Sum">
	</form>
	<?php
	function prime($n){
		for ($i=2; $i <= $n/2; $i++) { 
			if($n%$i==0){
				echo " is not";
				return;
			}
		}
		echo " is a";
	}
	if(isset($_GET['sum'] )){
		$n = (int)$_GET['n'];
		echo $n;
		prime($n);
		echo " prime number";
	}
	?>
</body>
</html>