jQuery(window).scroll(function() {
    if (jQuery(this).scrollTop() > 100) {
        jQuery('.hidden1').addClass('left');
    } 
    });

jQuery(window).scroll(function() {
    if (jQuery(this).scrollTop() > 100) {
            jQuery('.hidden2').addClass('right');
    } 
});