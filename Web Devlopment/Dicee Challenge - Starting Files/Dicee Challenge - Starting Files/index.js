//Player1:

var random_number1 = Math.floor(Math.random() * 6) + 1;

var random_Diceimage1 = "images/dice" + random_number1 + ".png";

var image1 = document.querySelectorAll("img")[0];

image1.setAttribute("src", random_Diceimage1);

//Player2:

var random_number2 = Math.floor(Math.random() * 6) + 1;

var random_Diceimage2 = "images/dice" + random_number2 + ".png";

var image2 = document.querySelectorAll("img")[1];

image2.setAttribute("src", random_Diceimage2);

//Winner:

if (random_number1 > random_number2) {
  document.querySelector("h1").innerHTML = " Player 1 wins ";
} else if (random_number1 < random_number2) {
  document.querySelector("h1").innerHTML = " Player 2 wins ";
} else {
  document.querySelector("h1").innerHTML = "Draw";
}
