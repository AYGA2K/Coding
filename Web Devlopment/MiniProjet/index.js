$("a[data-toggle]").on("click", function (e) {
  e.preventDefault(); // prevent navigating
  var selector = $(this).data("toggle"); // get corresponding element
  $(".home-page").hide();
  $(selector).show();
  $("#div2").hide();
  $(selector).show();
  $("#div3").hide();
  $(selector).show();
  $("#div4").hide();
  $(selector).show();
  $("#div5").hide();
  $(selector).show();
});
