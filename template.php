<?php

/**
 * @file
 * Process theme data
 */

$theme_path = drupal_get_path('theme', 'godmothership');

include $theme_path ."/includes/preprocess_html.inc";
include $theme_path ."/includes/preprocess_block.inc";
include $theme_path ."/includes/preprocess_page.inc";
include $theme_path ."/includes/preprocess_node.inc";
//include $theme_path ."/includes/preprocess_field.inc";
//include $theme_path ."/includes/preprocess_entity.inc";
include $theme_path ."/includes/preprocess_views.inc";
//include $theme_path ."/includes/preprocess_image.inc";
//include $theme_path ."/includes/preprocess_comment.inc";
include $theme_path ."/includes/preprocess_panels_pane.inc";

//include $theme_path ."/includes/form.inc";
//include $theme_path ."/includes/buttons.inc";
//include $theme_path ."/includes/breadcrumb.inc";
include $theme_path ."/includes/status_messages.inc";
include $theme_path ."/includes/item_list.inc";
include $theme_path ."/includes/pager.inc";
//include $theme_path ."/includes/views_tree.inc";

include $theme_path ."/includes/panels.inc";
include $theme_path ."/includes/meta.inc";
include $theme_path ."/includes/menu.inc";

//include $theme_path ."/includes/form_alter_pass.inc";
