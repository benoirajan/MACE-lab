<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <form id="billDetailsform" name="QuickpayForm1" data-validate="parsley" class="contact_form" method="post">
        <h1>Outstanding Bill Details</h1>
        <input type="hidden" name="custConnectionId" id="custConnectionId" value="0">
        <h3>Consumer Name:</h3>
        <input type="text" id="focusedInput" name="cname">
        <input type="hidden" name="consumerNumber" value="1146003010651">
        <input type="hidden" name="billNo" value="4600160815677">
        <h3>Section Name:</h3>
        <input type="text" name='sname'>
        <h3>Bill Amount:</h3>
        <input type="number" id="payamt" name="pamt" data-regexp="^\d{0,10}(\.\d{1,2})?$" data-maxlength="13" maxlength="13"
            data-trigger="focusin focusout" data-error-message="Please enter only numbers upto 2 decimal places"
            placeholder="0.00" autofocus="" autocomplete="off" class="parsley-validated">
        <input type="hidden" id="payable" placeholder="0.00">

        <h3>Email Id:</h3>
        <input type="text" id="email" name="mail" placeholder="Provide Email" data-trigger="focusin focusout"
            maxlength="50" data-type="email" data-required="false"
            data-error-message="You must enter a valid email address" value="" autocomplete="off"
            class="parsley-validated">
        <h3>Mobile Number:</h3>

        <input type="tel" id="mobileNo" name="tele" placeholder="Provide Mobile number" value=""
            data-trigger="focusin focusout" data-regexp="^[0-9]{10}$" data-minlength="10" maxlength="10"
            data-required="false" data-error-message="You must enter a valid mobile number" autocomplete="off"
            class="parsley-validated">
        <h3> </h3>
        <div>
            <button name='bill' type="submit" onclick="checkfield('11','0','0')" id="pay-bill-due"
                class="btn btn-lg btn-primary registerBtn Q_btr">Proceed
                to payment</button>

            <button type="reset" class="">Reset</button>
        </div>
    </form>
    <?php
    if(isset($_POST['bill'])){
        $name =  $_POST['cname'];
        $sname =  $_POST['sname'];
        $pamt =  $_POST['pamt'];
        $mail =  $_POST['mail'];
        $tele =  $_POST['tele'];
        echo "<h2>Eletricity Bill</h2>".
        "<table style='border: 2px solid #b7b7b7;
        border-radius: 11px;
        padding: 10px;'>
        <tr>
        <td>Consumer Name</td>
        <td>:</td>
        <td>$name</td>
        </tr>
        <tr>
        <td>Section Name</td>   <td>:</td>  <td>$sname</td>
        </tr>
        <tr><td>Bill amount</td><td>:</td><td>$pamt</td></tr>
        <tr><td>Email</td><td>:</td><td>$mail</td></tr>
        <tr><td>Mobile</td><td>:</td><td>$tele</td></tr>
        </table>";
    }
    ?>
</body>

</html>