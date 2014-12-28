<?php

/**
 *  @file
 *  Preprocess : views-related
 */


/**
 *  Implement template_preprocess_views_view()
 *  -> remove unused classes
 */
function godmothership_preprocess_views_view(&$vars)
{
    $vars['wrapper_tag'] = 'section';
    
    //      Only keep classes .view-NAME and .view-display-id-DISP
    $vars['classes_array'] = array(
        'view-' . $vars['name'],
        'view-display-id-' . $vars['display_id'],
    );
    
    //      Example :
    //      Reapeated overrides
    //$raw_candidates = array(
    //    'foobar_view' => array('block'),
    //    'foobar2_view' => array('block', 'block_1', 'block_2'),
    //);
    //foreach ($raw_candidates as $candidate_view_name => $disp)
    //{
    //    if ($candidate_view_name == $vars['name'] && in_array($vars['display_id'], $disp)) {
    //        $vars['theme_hook_suggestions'][] = 'views_view__raw';
    //    }
    //}
}


/**
 *  Implement template_preprocess_views_view_unformatted()
 *  -> remove ALL classes (except manual views settings)
 */
function godmothership_preprocess_views_view_unformatted(&$vars)
{
    $view = $vars['view'];
    $rows = $vars['rows'];
    $vars['classes'] = array();
    $vars['classes_array'] = array();
    $vars['no_wrapper_tag'] = false;
    
    //      Rows classes (default)
    foreach ($rows as $id => $row)
    {
        $vars['classes'][$id] = '';
        $vars['classes_array'][$id] = '';
        
        if (!empty($vars['options']['row_class'])) {
            $vars['classes_array'][$id] = $vars['options']['row_class'];
        }
    }
}


/**
 *  Implement template_preprocess_views_view_list()
 */
function godmothership_preprocess_views_view_list(&$vars)
{
    //      Reuse handling of classes from "unformatted" formatter
    godmothership_preprocess_views_view_unformatted($vars);
    
    //      Example :
    //      Handle list with multiple columns
    //      @evol create view display plugin with proper configuration options
    /*
    $view = $vars['view'];
    if ($view->name == 'foobar' && $view->current_display == 'block')
    {
        //      For 2 columns, new_column_every = displayed results / 2
        $nb_rows = count($vars['rows']);
        $vars['new_column_every'] = round($nb_rows / 2);
    }
    */
}


