<?php

/**
 * @file
 * Theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 */

//      debug
//kpr(get_defined_vars());
//kpr($theme_hook_suggestions);
//template naming
//page--[CONTENT TYPE].tpl.php

?>
<!-- .page#container -->
<div class="page" id="container">
    
    <header class="group" role="banner">
        
        <div class="siteinfo">
            <?php if ($logo): ?>
            <figure class="u-cell">
                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
                    <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
                </a>
            </figure>
            <?php endif; ?>
        </div>
        <?php
        
        //      Region : header
        print render($page['header']);
        
        //      Breacrumb
        if ($breadcrumb) {
            print $breadcrumb;
        }
        
        ?>
    </header>
    
    <!-- main -->
    <div role="main" id="main-content">
        
        <?php if ($page['highlighted'] OR $messages) { ?>
        <div class="drupal-messages">
            <?php print render($page['highlighted']); ?>
            <?php print $messages; ?>
        </div>
        <?php } ?>
        
        <?php print render($title_prefix); ?>
        <?php if ($title): ?>
        <h1><?php print $title; ?></h1>
        <?php endif; ?>
        <?php print render($title_suffix); ?>
        
        <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>
        
        <?php if (isset($tabs['#primary'][0]) || isset($tabs['#secondary'][0])): ?>
        <nav class="tabs-wrap group"><?php print render($tabs); ?></nav>
        <?php endif; ?>
        
        <?php print render($page['content_pre']); ?>
        <?php print render($page['content']); ?>
        <?php print render($page['content_post']); ?>
        
        <?php if ($page['sidebar_first']): ?>
        <aside class="sidebar-first">
            <?php print render($page['sidebar_first']); ?>
        </aside>
        <?php endif; ?>
        
        <?php if ($page['sidebar_second']): ?>
        <aside class="sidebar-second">
            <?php print render($page['sidebar_second']); ?>
        </aside>
        <?php endif; ?>
        
    </div>
    <!-- /main -->
    
    <?php if ($page['footer']): ?>
    <!-- contentinfo (footer) -->
    <footer class="group" role="contentinfo">
        <?php print render($page['footer']); ?>
    </footer>
    <!-- /contentinfo (footer) -->
    <?php endif; ?>
    
    <?php print render($page['after_footer']); ?>
    
</div>
<!-- /.page#container -->

