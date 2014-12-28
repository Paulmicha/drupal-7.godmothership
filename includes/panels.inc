<?php

/**
 *  @file
 *  Panels-related alterations
 */

/**
 *  Kills off the <div class="panel-seperator"> annoyance
 *  @see Mothership base theme
 */
function godmothership_panels_default_style_render_region(&$vars) {
    return implode('', $vars['panes']);
}

