<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */

if (!empty($title)) {
    print "<h3>$title</h3>";
}

foreach ($rows as $id => $row)
{
    if ($no_wrapper_tag) {
        print $row;
    }
    else
    {
        print "<article";
        if ($classes_array[$id]) {
            print ' class="' . $classes_array[$id] . '"';
        }
        print ">";
        print $row;
        print "</article>";
    }
}
