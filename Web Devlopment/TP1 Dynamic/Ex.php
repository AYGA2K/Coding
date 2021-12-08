<!DOCTYPE html>
<html lang="en">


<?php
$connect=mysqli_connect('localhost','debian-sys-maint','hFLwebGVCHrrI9OP','exelib');

if (isset($_POST['submit']))
{
  $titre = $_POST['titre'];
  $auteur = $_POST['auteur'];
  $date_creation = $_POST['date_creation'];
  $sqlinsert = "INSERT INTO exercice ('titre', 'auteur','date_creation') VALUES ('$titre','$autuer','$date_creation' )";

 

?>

<html>
   <head>
        <meta charset="UTF-8">
        <title>sample</title>
    </head>
<body>
        <form action="<?php echo $_SERVER['PHP_SELF'];?>" method="post"" method = "POST">

   First name:   
   &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
   Middle Name:
  &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
  Last Name:<br>
  <input name="titre" size="15" style="height: 19px;"  type="text" required>
      &nbsp; &nbsp; &nbsp; 
  <input name="auteur" size="15" style="height: 19px;"  type="text" required>
      &nbsp; &nbsp; &nbsp; 
  <input name="date_creation" size="15" style="height: 19px;"  type="date" required>

  <br><br>
 <br>
 <br>

  <button type ="submit" name="submit" value="send to database"> SEND TO DATABASE </button>
  </form>
    
  
</body>
</html>