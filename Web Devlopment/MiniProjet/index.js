$("a[data-toggle]").on("click", function (e) {
  e.preventDefault(); // prevent navigating
  var selector = $(this).data("toggle"); // get corresponding element
  $(".home-page").hide();
  $(".booking-form-box").addClass("BG");
  $("#div2").hide();
  $(selector).show();
  $("#div3").hide();
  $(selector).show();
  $("#div4").hide();
  $(selector).show();
  $("#div5").hide();
  $(selector).show();
  $("#div6").hide();
  $(selector).show();
  $("#div7").hide();
  $(selector).show();
});
$(".button-minimize").on("click", function () {
  $(".left").toggle();
});

$("#img1").on("click", function () {
  $(".home-page").show();
  $("#div1").append(
    '<iframe id="ifr" src="Morroco.html" frameborder="0"></iframe>'
  );
  $(".left").hide();
});
