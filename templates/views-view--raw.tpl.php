<?php

/**
 * @file
 * Raw custom view template.
 *
 * @see views-view.tpl.php
 */

?>

  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
  <?php print $title; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($header): ?>
  <header>
    <?php print $header; ?>
  </header>
  <?php endif; ?>

  <?php if ($exposed): ?>
  <aside class="view-filters">
    <?php print $exposed; ?>
  </aside>
  <?php endif; ?>

  <?php if ($attachment_before): ?>
  <aside class="attachment attachment-before">
    <?php print $attachment_before; ?>
  </aside>
  <?php endif; ?>

  <?php if ($rows): ?>
  <?php print $rows; ?>
  <?php elseif ($empty): ?>
    <?php print $empty; ?>
  <?php endif; ?>

  <?php if ($pager): ?>
    <?php print $pager; ?>
  <?php endif; ?>

  <?php if ($attachment_after): ?>
  <aside class="attachment attachment-after">
    <?php print $attachment_after; ?>
  </aside>
  <?php endif; ?>

  <?php if ($more): ?>
  <?php print $more; ?>
  <?php endif; ?>

  <?php if ($footer): ?>
  <div class="view-footer">
    <?php print $footer; ?>
  </div>
  <?php endif; ?>

  <?php if ($feed_icon): ?>
  <div class="feed-icon">
    <?php print $feed_icon; ?>
  </div>
  <?php endif; ?>


