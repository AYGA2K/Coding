<?php
$connect=mysqli_connect('localhost','debian-sys-maint','hFLwebGVCHrrI9OP','exelib');

if (isset($_POST['submitted'])) {

  

 
  $titre = $_POST['titre'];
  $auteur = $_POST['auteur'];
  $date_creation = $_POST['date_creation'];
  $sqlinsert = "INSERT INTO exercice ('titre', 'auteur','date_creation') VALUES ('$titre','$autuer','$date_creation' )";

 }

 $sql = "SELECT id, titre, auteur,'date_creation' FROM exercice";
$result = $connect->query($sql);

if ($result->num_rows > 0) {
  // output data of each row
  while($row = $result->fetch_assoc()) {
    echo "id: " . $row["id"]. " - Name: " . $row["titre"]. " " . $row["auteur"]. " ". $row["date_creation"]. "<br>";
  }
} else {
  echo "0 results"; 
}

?>