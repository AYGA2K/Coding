$(".button-minimize").on("click", function () {
  if (
    $("#left").css("display") == "none" ||
    $("#left").css("visibility") == "hidden"
  ) {
    $("iframe").css("margin-left", "1%");
    $("#left").show();
  } else {
    $("#mini-left").toggle("slide");
  }
});
for (let index = 0; index < 3; index++) {
  $("#details" + index).on("click", function () {
    $("#left").hide();
    $("iframe").show();
    $("#right").hide();
    $("#table").hide();
    $("iframe").css("height", "170vh");
    $("iframe").css("width", "100%");
    $("iframe").css("margin-left", "20%");
  });
}
$("#home").on("click", function () {
  $("#table").show();
  $("#left").show();
  $("iframe").hide();
});
for (let index = 1; index < 7; index++) {
  $("#menu" + index).on("click", function () {
    $("#table").hide();
    $("iframe").show();
    $("#left").show();
    $("iframe").css("height", "100%");
    $("iframe").css("width", "100%");
  });
}

// Table

$(document).ready(function () {
  $('[data-toggle="tooltip"]').tooltip();
  var actions = $("table td:last-child").html();
  // Append table with add row form on add new button click
  $(".add-new").click(function () {
    $(this).attr("disabled", "disabled");
    var index = $("table tbody tr:last-child").index();
    var row =
      "<tr>" +
      '<td><input type="text" class="form-control" name="name" id="name"></td>' +
      '<td><input type="text" class="form-control" name="department" id="department"></td>' +
      '<td><input type="text" class="form-control" name="phone" id="phone"></td>' +
      '<td><input type="text" class="form-control" name="phone" id="date"></td>' +
      "<td>" +
      actions +
      "</td>" +
      "</tr>";
    $("table").append(row);
    $("table tbody tr")
      .eq(index + 1)
      .find(".add, .edit")
      .toggle();
    $('[data-toggle="tooltip"]').tooltip();
  });
  // Add row on add button click
  $(document).on("click", ".add", function () {
    var empty = false;
    var input = $(this).parents("tr").find('input[type="text"]');
    input.each(function () {
      if (!$(this).val()) {
        $(this).addClass("error");
        empty = true;
      } else {
        $(this).removeClass("error");
      }
    });
    $(this).parents("tr").find(".error").first().focus();
    if (!empty) {
      input.each(function () {
        $(this).parent("td").html($(this).val());
      });
      $(this).parents("tr").find(".add, .edit").toggle();
      $(".add-new").removeAttr("disabled");
    }
  });
  // Edit row on edit button click
  $(document).on("click", ".edit", function () {
    $(this)
      .parents("tr")
      .find("td:not(:last-child)")
      .each(function () {
        $(this).html(
          '<input type="text" class="form-control" value="' +
            $(this).text() +
            '">'
        );
      });
    $(this).parents("tr").find(".add, .edit").toggle();
    $(".add-new").attr("disabled", "disabled");
  });
  // Delete row on delete button click
  $(document).on("click", ".delete", function () {
    $(this).parents("tr").remove();
    $(".add-new").removeAttr("disabled");
  });
});

$("#minfot").on("click", function () {
  $(".flex").toggle("slide");
});
