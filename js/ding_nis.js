(function ($) {
  Drupal.behaviors.ding_nis = {
    attach: function (context) {
      for (var i in Drupal.settings.field_slideshow) {
        if (i !== undefined) {
          $('#' + i + '-wrapper').hover(
            function () {
              $('#' + i + '-controls').fadeIn();
            },
            function () {
              $('#' + i + '-controls').fadeOut();
            }
          );
        }
      }
    }
  };
})(jQuery);
