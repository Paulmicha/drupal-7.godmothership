<?php

/**
 * @file
 * Menus theming
 */


/**
 *  Implement theme_menu_link()
 *  @see https://api.drupal.org/api/drupal/includes%21menu.inc/function/theme_menu_link/7
 */
function godmothership_menu_link(array $variables)
{
    $sub_menu = '';
    $element = $variables['element'];
    
    //  Remove thee menu-mlid-[NUMBER]
    if (!empty($variables['element']['#attributes']['class'])) {
        $variables['element']['#attributes']['class'] = preg_grep('/^menu-mlid-/', $variables['element']['#attributes']['class'], PREG_GREP_INVERT);
    }
    
    //  Sub elements (deeper levels)
    if (!empty($element['#below'])) {
        $sub_menu = drupal_render($element['#below']);
    }
    
    $output = l($element['#title'], $element['#href'], $element['#localized_options']);
    return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}


/**
 *  Implement theme_menu_tree()
 *  @see https://api.drupal.org/api/drupal/includes%21menu.inc/function/theme_menu_tree/7
 */
function godmothership_menu_tree($variables) {
    return '<ul class="menu">' . $variables['tree'] . '</ul>';
}


