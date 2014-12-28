<?php

/**
 *  @file
 *  HTML Head / Meta tags related stuff
 */


/**
 *  Implement theme_html_head_alter()
 *  @see https://drupal.org/node/982034
 */
function godmothership_html_head_alter(&$head_elements)
{
    //      Basic security : remove generator tag
    if (!empty($head_elements['system_meta_generator'])) {
        unset($head_elements['system_meta_generator']);
    }
    
    //      Further basic security notes
    //      @todo implement the following
    /*
    
    You can also do it through your Apache configuration. Just put this directive in your .htaccess file (or httpd.conf):

    <IfModule mod_headers.c>
         Header unset X-Generator
         Header unset X-Drupal-Cache
         Header unset X-Powered-By
    </IfModule>
    
    I also generally remove X-Drupal-Cache, to avoid further announcements that this is Drupal, and also X-Powered-By so that people don't look for PHP vulnerabilities. If you have access to your own php.ini file, you can do this globally by adding the setting:

    expose_php = Off

    If you want to get even fancier, you can hide a lot of apache information with these other options:

    ServerSignature Off
    ServerTokens Prod
    
    That will ensure that you don't broadcast your version of Apache. None of these make you super secure, but they do avoid scripts that go through headers looking for vulnerable versions of Apache, Drupal or whatever.
    
    */
}


