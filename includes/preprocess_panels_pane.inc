<?php

/**
 *  @file
 *  Preprocess : panels_pane
 */


/**
 *  Implement theme_preprocess_panels_pane()
 */
function godmothership_preprocess_panels_pane(&$vars)
{
    $pane = $vars['pane'];
    $node = @$vars['display']->context['argument_entity_id:node_1']->data;
    
    //      debug
    //drupal_set_message(kdevel_print_object($pane->type));
    //drupal_set_message(kdevel_print_object($vars['theme_hook_suggestions']));
    //drupal_set_message(kdevel_print_object($node));
    
    
    //      Example :
    //      Panes custom CSS classes = "hooks" boilerplate
    /*
    if (!empty($pane->css['css_class']))
    {
        $classes_arr = explode(" ", $pane->css['css_class']);
        foreach($classes_arr as $css_class)
        {
            $css_class = trim($css_class);
            
            //      Collapsible Panes
            if ($css_class == 'collapsible')
            {
                //      Unique ID
                $collapsible_group_id = "collapsible-container-" . $pane->pid;
                
                $vars['title'] = '<a href="#' . $collapsible_group_id . '" id="' . $collapsible_group_id . '-control"'
                    . 'class="is-off" aria-expanded="false" aria-haspopup="true" aria-controls="' . $collapsible_group_id . '">'
                        . '<span class="label">'
                            . $vars['title']
                        . '</span>'
                        . '<span class="icon-arrow-up"></span>'
                        . '<span class="icon-arrow-down"></span>'
                    . '</a>';
                
                $vars['content'] = '<div class="is-off collapsible-container" id="' . $collapsible_group_id . '"'
                    . 'aria-hidden="true" aria-labelledby="' . $collapsible_group_id . '-control">'
                        . $vars['content']
                    . '</div>';
            }
        }
    }
    */
}


