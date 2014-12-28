<?php

/**
 *  @file
 *  Theme : status messages
 *  
 *  @see https://api.drupal.org/api/drupal/includes%21theme.inc/function/theme_status_messages/7
 */


/**
 *  Implement theme_status_messages()
 */
function godmothership_status_messages($variables)
{
    $output = '';
    $display = $variables['display'];
    
    $status_heading = array(
        'status' => t('Status message'),
        'error' => t('Error message'),
        'warning' => t('Warning message'),
    );
    
    //      Custom correspondance type -> icon class
    $status_icon_class = array(
        'status' => 'icon-checkmark',
        'error' => 'icon-error',
        'warning' => 'icon-warning',
    );
    
    foreach (drupal_get_messages($display) as $type => $messages)
    {
        $output .= "<div class=\"messages $type\">";
        
        if (!empty($status_heading[$type])) {
            $output .= '<h2 class="element-invisible">' . $status_heading[$type] . "</h2>";
        }
        
        //      Custom icons
        $icon = '';
        if (!empty($status_icon_class[$type])) {
            $icon = '<i class="'. $status_icon_class[ $type ] .'"></i>';
        }
        
        if (count($messages) > 1)
        {
            $output .= "<ul>";
            foreach ($messages as $message) {
                $output .= '<li>'. $icon . $message ."</li>";
            }
            $output .= "</ul>";
        }
        else {
            $output .= $icon . $messages[ 0 ];
        }
        
        $output .= "</div>";
    }
    
    return $output;
}


