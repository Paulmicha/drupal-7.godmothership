<?php

/**
 *  @file
 *  Node template (full)
 */

hide($content['comments']);
hide($content['links']);

if ($classes) {
  $classes = ' class="'. $classes . '" ';
}

?>
<!-- node.tpl.php -->
<article <?php print $classes . $attributes; ?> role="article">
  
  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>" rel="bookmark"><?php print $title; ?></a></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <div class="content">
    <?php print render($content);?>
  </div>
  
  <?php print render($content['links']); ?>
  <?php print render($content['comments']); ?>
  
</article>
<!-- /node.tpl.php -->
