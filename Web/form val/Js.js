function valdt(){
	form = document.forms['f1']
	is =  isNull(form['name'])
	return false
}

function isNull(ob){
	a = ob.value == ''
	ob.setCustomValidity("Please fill this")
	return a
}