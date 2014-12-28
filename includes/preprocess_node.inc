<?php

/**
 *  @file
 *  Preprocess : node
 */


/**
 *  Implement theme_preprocess_node()
 */
function godmothership_preprocess_node(&$vars)
{
    //      debug
    //drupal_set_message(kdevel_print_object($vars));
    
    //      Adding a template suggestion for custom node "entity_view_mode"s :
    //          entity-type__view-mode
    //      (because the module only provides entity-type__bundle__view-mode by default)
    if (module_exists('entity_view_mode') || !empty($vars['view_mode'])) {
        array_unshift($vars['theme_hook_suggestions'], 'node__' . $vars['view_mode']);
    }
}

