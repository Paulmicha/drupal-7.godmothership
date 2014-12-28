<?php

/**
 *  @file
 *  Preprocess : block
 */


/**
 *  Implement theme_preprocess_block()
 */
function godmothership_preprocess_block(&$vars)
{
    $vars['title_attributes_array']['class'][] = 'title';
    $vars['content_attributes_array']['class'][] = 'block-content';
    $vars['id_block'] = ' id="' . $vars['block_html_id'] . '"';
    
    //      debug
    //dsm('block : '. $vars['elements']['#block']->module .' / '. $vars['elements']['#block']->delta);
    
    //      Add a theme suggestion to block--menu.tpl
    //      so we dont have to create a ton of blocks with <nav>
    //      @see Mothership base theme
    if (
        ($vars['elements']['#block']->module == "system" AND $vars['elements']['#block']->delta == "navigation")
        OR ($vars['elements']['#block']->module == "system" AND $vars['elements']['#block']->delta == "main-menu")
        OR ($vars['elements']['#block']->module == "system" AND $vars['elements']['#block']->delta == "user-menu")
        OR ($vars['elements']['#block']->module == "admin" AND $vars['elements']['#block']->delta == "menu")
        OR $vars['elements']['#block']->module == "menu_block"
        
        //      Note Paul 2014/10/07 19:25:42 - for all blocks from core module "menu"
        OR $vars['elements']['#block']->module == "menu"
    ) {
        $vars['theme_hook_suggestions'][] = 'block__menu';
    }
}

