<?php

/**
 *  @file
 *  Preprocess : page
 */


/**
 *  Implement theme_preprocess_page()
 */
function godmothership_preprocess_page(&$vars)
{
    //      Custom error page templates
    $headers = drupal_get_http_header();
    if (isset($headers['status']))
    {
        if ($headers['status'] == '404 Not Found') {
            $vars['theme_hook_suggestions'][] = 'page__404';
        }
    }
    
    //      Remove the block template wrapper from the main content block.
    if (!empty($vars['page']['content']['system_main'])
        && isset($vars['page']['content']['system_main']['#theme_wrappers'])
        && is_array($vars['page']['content']['system_main']['#theme_wrappers'])) {
        $vars['page']['content']['system_main']['#theme_wrappers'] = array_diff($vars['page']['content']['system_main']['#theme_wrappers'], array('block'));
    }
    
    //      User pages tabs
    switch (current_path())
    {
        case 'user':
            $vars['title'] = t('Login');
            unset($vars['tabs']);
            break;
        
        case 'user/register':
            $vars['title'] = t('New account');
            unset($vars['tabs']);
            break;
        
        case 'user/password':
            $vars['title'] = t('I forgot my password');
            unset($vars['tabs']);
            break;
      }
}

