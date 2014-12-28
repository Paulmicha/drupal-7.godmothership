<?php

/**
 *  @file field--raw.tpl.php
 *  Helper template : render only field content, without any wrapper tags
 *  @see field.tpl.php
 */

foreach ($items as $item) {
    print render($item);
}
