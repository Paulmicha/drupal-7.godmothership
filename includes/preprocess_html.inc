<?php

/**
 *  @file
 *  Preprocess : html
 */


/**
 *  Implement theme_preprocess_html()
 */
function godmothership_preprocess_html(&$vars)
{
    $theme_path = drupal_get_path('theme', 'godmothership');
    $real_theme_path = url($theme_path);
    
    //      Example Google font integration
    //      @see http://www.google.com/fonts
    //drupal_add_css('http://fonts.googleapis.com/css?family=Source+Sans+Pro:400,700', array('type' => 'external'));
    
    //      HTML5 Utils
    //      @see base theme Mothership
    $vars['html_att'] = drupal_attributes(array(
      'lang' => $vars['language']->language,
      'dir' => $vars['language']->dir,
    ));
    
    //      IE compatibility mode
    drupal_add_html_head(array(
      '#tag' => 'meta',
      '#attributes' => array(
        'http-equiv' => 'X-UA-Compatible',
        'content' => 'IE=Edge',
      ),
    ), 'xua_compat');
    
    //      Libs
    //      We dont wanna add modules just to put in a goddamn js file
    //      so were adding em here instead
    
    //--- modernizr love CDN style for the lazy ones
    //drupal_add_js('http://cdnjs.cloudflare.com/ajax/libs/modernizr/2.7.1/modernizr.min.js', 'external');
    
    //---- selectivizr
    $vars['selectivizr'] = '';
    $vars['selectivizr'] .= '<!--[if (gte IE 6)&(lte IE 8)]>' . "\n";
    $vars['selectivizr'] .= '<script type="text/javascript" src="http://cdnjs.cloudflare.com/ajax/libs/selectivizr/1.0.2/selectivizr-min.js"></script>' . "\n";
    $vars['selectivizr'] .= '<![endif]-->' . "\n";
    
    //---html5 fix
    $vars['html5iefix'] = '';
    $vars['html5iefix'] .= '<!--[if lt IE 9]>' . "\n";
    $vars['html5iefix'] .= '<script src="' . $real_theme_path . '/vendor/html5shiv-3.7.2/html5shiv.min.js"></script>' . "\n";
    $vars['html5iefix'] .= '<![endif]-->' . "\n";
}


