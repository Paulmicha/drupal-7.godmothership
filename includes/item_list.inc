<?php

/**
 *  @file
 *  HTML for a list or nested list of items
 */


/**
 *  Implement theme_item_list()
 *  @see https://drupal.org/node/982034
 */
function godmothership_item_list($variables)
{
    $items = $variables['items'];
    $title = $variables['title'];
    $type = $variables['type'];
    $attributes = $variables['attributes'];
    
    // Only output the list container and title, if there are any list items.
    // Check to see whether the block title exists before adding a header.
    // Empty headers are not semantic and present accessibility challenges.
    
    $output = '';
    
    if (isset($title) && $title !== '') {
        $output .= '<h3>' . $title . '</h3>';
    }

    if (!empty($items))
    {
        $output .= "<$type" . drupal_attributes($attributes) . '>';
        $num_items = count($items);
        $i = 0;
        
        foreach ($items as $item)
        {
            $attributes = array();
            $children = array();
            $data = '';
            $i++;
            
            if (is_array($item))
            {
                foreach ($item as $key => $value)
                {
                    if ($key == 'data') {
                        $data = $value;
                    }
                    elseif ($key == 'children') {
                        $children = $value;
                    }
                    else {
                        $attributes[$key] = $value;
                    }
                }
            }
            else {
                $data = $item;
            }
            
            //  Render nested list.
            if (count($children) > 0) {
                $data .= theme_item_list(array('items' => $children, 'title' => NULL, 'type' => $type, 'attributes' => $attributes));
            }
            
            //  Custom additional attribute : attributes for <li>
            if (!empty($variables['li_attributes'])) {
                $output .= '<li' . drupal_attributes($variables['li_attributes']) . '>' . $data . "</li>\n";
            }
            else {
                $output .= '<li' . drupal_attributes($attributes) . '>' . $data . "</li>\n";
            }
        }
        
        $output .= "</$type>";
    }
    
    return $output;
}

