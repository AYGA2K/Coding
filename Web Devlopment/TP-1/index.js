document.addEventListener("keyup", function (event) {
  if (event.keyCode === 13) {
    Ajouter();
  }
});
//un bouton pour afficher l'une des formations et un alert si l'utilisateur laisse l'input vide
function Ajouter() {
  var input = document.getElementById("todo").value;
  if (input == "" || input == null) {
    alert("Saisir une formation");
  } else if (input != "" || input != null) {
    document.getElementById("Deust_Button").value = input;
    document.getElementById("Deust").style.visibility = "visible";
  }
}
//masquer et afficher la section des détails en cliquant sur le bouton et ajouter « toggle-on » au lieu de « toggle-off » si la section des détails est affichée
var a = 1;
function show_hide() {
  var btn1 = document.getElementById("Deust_Button");
  var toggle = document.getElementById("Toggle_button");

  if (a == 1) {
    document.getElementById("Details").style.visibility = "visible";
    document.getElementById("Toggle_Button").classList.add("toggle-on");
    document.getElementById("Toggle_Button").classList.remove("toggle-off");
    return (a = 0);
  } else if (a == 0) {
    document.getElementById("Details").style.visibility = "hidden";
    document.getElementById("Toggle_Button").classList.remove("toggle-on");
    document.getElementById("Toggle_Button").classList.add("toggle-off");
    return (a = 1);
  }
}
//fondamentalement, cette fonction fait la même chose que la fonction précédente,
// mais la seule différence est que celle-ci se concentre sur la première input
function show_focus() {
  var btn1 = document.getElementById("Deust_Button");
  var toggle = document.getElementById("Toggle_button");

  document.getElementById("Details").style.visibility = "visible";
  document.getElementById("inp1").focus();
  document.getElementById("Toggle_Button").classList.add("toggle-on");
  document.getElementById("Toggle_Button").classList.remove("toggle-off");
}
// fonction qui supprime formation deust
function delete_function() {
  var a = null;
  a = document.getElementById("Deust").remove();
  document.getElementById("Deust").remove();
  return a;
}

//c'est une fonction simple qui ajoute une icône "check" si l'utilisateur essaie de modifier quelque chose

//lorsque l'utilisateur clique sur " valider les modifications " nous remplaçons le texte par défaut par la nouvelle input

document.getElementById("submitbutton").addEventListener("click", function () {
  for (let index = 1; index < 4; index++) {
    var inp = document.getElementById("inp" + index).value;
    var label = document.getElementById("label" + index);
    if (inp != "") {
      label.innerHTML = inp;
      document.getElementById("inp" + index).value = "";
      document.getElementById("checkbox" + index).classList.add("check");
    }
  }
});
// lorsque l'utilisateur coche "checkbox" on demande si il veut ajouter une formation
function check_function() {
  var checkBox = document.getElementById("labelcheckbox");

  if (checkBox.checked == true) {
    confirm("Do you want to add another info!");
    let name = prompt("Please enter a name:");
    if (name != null || name != "") {
      document.getElementById("License_Button").value = name;
      document.getElementById("License").style.visibility = "visible";
    }
  }
}
// le reste du code n'est que des fonctions répétées pour "licence" et "master"

// List 2

var b = 1;
function show_hide1() {
  var btn1 = document.getElementById("License_Button");
  var toggle = document.getElementById("Toggle_button1");

  if (b == 1) {
    document.getElementById("Details1").style.visibility = "visible";
    document.getElementById("Toggle_Button1").classList.add("toggle-on");
    document.getElementById("Toggle_Button1").classList.remove("toggle-off");
    return (b = 0);
  } else if (b == 0) {
    document.getElementById("Details1").style.visibility = "hidden";
    document.getElementById("Toggle_Button1").classList.remove("toggle-on");
    document.getElementById("Toggle_Button1").classList.add("toggle-off");
    return (b = 1);
  }
}
function show_focus1() {
  var btn1 = document.getElementById("License_Button");
  var toggle = document.getElementById("Toggle_button1");
  document.getElementById("Details1").style.visibility = "visible";
  document.getElementById("inp11").focus();
  document.getElementById("Toggle_Button1").classList.add("toggle-on");
  document.getElementById("Toggle_Button1").classList.remove("toggle-off");
}
function delete_function1() {
  document.getElementById("License").remove();
}

document.getElementById("submitbutton1").addEventListener("click", function () {
  for (let index = 1; index < 4; index++) {
    var inp = document.getElementById("inp1" + index).value;
    var label = document.getElementById("label1" + index);
    if (inp != "") {
      label.innerHTML = inp;
      document.getElementById("inp1" + index).value = "";
      document.getElementById("checkbox1" + index).classList.add("check");
    }
  }
});
function check_function1() {
  var checkBox = document.getElementById("labelcheckbox1");

  if (checkBox.checked == true) {
    confirm("Do you want to add another info!");
    let name = prompt("Please enter a name:");
    if (name != null || name != "") {
      document.getElementById("Master_Button").value = name;
      document.getElementById("Master").style.visibility = "visible";
    }
  }
}

// List 3

var c = 1;
function show_hide2() {
  var btn1 = document.getElementById("Master_Button");
  var toggle = document.getElementById("Toggle_button2");

  if (c == 1) {
    document.getElementById("Details2").style.visibility = "visible";
    document.getElementById("Toggle_Button2").classList.add("toggle-on");
    document.getElementById("Toggle_Button2").classList.remove("toggle-off");
    return (c = 0);
  } else if (c == 0) {
    document.getElementById("Details2").style.visibility = "hidden";
    document.getElementById("Toggle_Button2").classList.remove("toggle-on");
    document.getElementById("Toggle_Button2").classList.add("toggle-off");
    return (c = 1);
  }
}
function show_focus2() {
  var btn1 = document.getElementById("Deust_Button2");
  var toggle = document.getElementById("Toggle_button2");
  document.getElementById("Details2").style.visibility = "visible";
  document.getElementById("inp11").focus();
  document.getElementById("Toggle_Button2").classList.add("toggle-on");
  document.getElementById("Toggle_Button2").classList.remove("toggle-off");
}
function delete_function2() {
  document.getElementById("Master").remove();
}

document.getElementById("submitbutton2").addEventListener("click", function () {
  for (let index = 1; index < 4; index++) {
    var inp = document.getElementById("inp2" + index).value;
    var label = document.getElementById("label2" + index);
    if (inp != "") {
      label.innerHTML = inp;

      document.getElementById("inp2" + index).value = "";
      document.getElementById("checkbox2" + index).classList.add("check");
    }
  }
});
