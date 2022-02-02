<?php


$db = mysqli_connect('localhost', 'root', '', 'test');


$sql = 'CREATE TABLE IF NOT EXISTS `railway` (
    `ticket_id` int(11) NOT NULL PRIMARY KEY AUTO_INCREMENT,
    `full_name` varchar(20) NOT NULL,
    `address` varchar(50) NOT NULL,
    `train_no` varchar(10) NOT NULL,
    `train_name` varchar(15) NOT NULL,
    `date_of_journey` date NOT NULL,
    `boarding_time` time NOT NULL
  )';

$create_table = mysqli_query($db, $sql);

$err_msg = $succ_msg = '';



if (isset($_POST['book_ticket'])) {
    $fname = $_POST['fname'];
    $address = $_POST['address'];
    $tno = $_POST['tno'];
    $train_name = $_POST['train_name'];
    $date_of_journey = $_POST['date_of_journey'];
    $boarding_time = $_POST['boarding_time'];

        $insert_ticket = "INSERT INTO railway (full_name, address,train_no, train_name,date_of_journey,boarding_time) VALUES ('$fname','$address','$tno','$train_name','$date_of_journey','$boarding_time')";
        $insert_result = $db->query($insert_ticket);
}



$tickets_qry = 'SELECT * from railway';
$tickets_records = mysqli_query($db, $tickets_qry);



?>

<title>Railway ticket booking</title>

<body>
<h1>Railway ticket booking</h1>
            <table>
                <thead>
                    <tr>
                        <th>Name</th>
                        <th>Train No</th>
                        <th>Boarding time</th>
                    </tr>
                </thead>
                <tbody>
                    <?php
                    while ($tickets = $tickets_records->fetch_assoc()) {
                    ?>
                        <tr>
                            <td><?= $tickets['full_name'] ?></td>
                            <td><?= $tickets['train_no'] ?></td>
                            <td><?= $tickets['boarding_time'] ?></td>

                        </tr>
                    <?php } ?>
                </tbody>
            </table>

<br>
<br>

            <form method="post">
                <label for="fname">Full Name</label>
                <input type="text" id="fname" name="fname" placeholder="Your name.." required>


                <label >Train No</label>
                <input type="number" id="tno" name="tno" placeholder="Train no.."  required>


                <label for="lname">Train Name</label>
                <input type="text" id="train_name" name="train_name" placeholder="Train name.." required>


                <label>Address</label>
                <textarea name="address" id="address" cols="20" rows="5" required>
                </textarea>

                <label>Date of journey</label>
                <input type="date" id="date_of_journey" name="date_of_journey" placeholder="Date of journey.." required>


                <label>Time of boarding</label>
                <input type="time" id="boarding_time" name="boarding_time" placeholder="Time of boarding.." required>



                <input type="submit" name="book_ticket" value="Book ticket">
                <!-- <input type="submit" name="show_tickets" value="Show tickets"> -->
            </form>


</body>



<style>


tr {
  border: 1px solid #ddd;
  padding: 8px;
  background:#def;
}


th {
  padding-top: 12px;
  padding-bottom: 12px;
  background-color: #294d52;
  color: white;
}

    input[type=text],
    input[type=date],
    input[type=time],
    input[type=number],
    textarea,
    select {
        width:50%;
        padding: 12px 20px;
        margin: 8px 0;
        border-width:1px;
        border-radius: 4px;
        display: block;
    }


    input[type=submit] {
        padding: 14px 20px;
        margin: 8px 0;
        border-radius: 4px;
    }

</style>
</html>