<?php

/**
 * @file panels-pane.tpl.php
 * Main panel pane template
 *
 * Variables available:
 * - $pane->type: the content type inside this pane
 * - $pane->subtype: The subtype, if applicable. If a view it will be the
 *   view name; if a node it will be the nid, etc.
 * - $title: The title of the content
 * - $content: The actual content
 * - $links: Any links associated with the content
 * - $more: An optional 'more' link (destination only)
 * - $admin_links: Administrative links associated with the content
 * - $feeds: Any feed icons or associated with the content
 * - $display: The complete panels display object containing all kinds of
 *   data including the contexts and all of the other panes being displayed.
 */

//      Won't keep extra <div> if no special attributes are needed
if (!empty($pane->css['css_class'])) {
  $css_class = 'class="' . $pane->css['css_class'] . '"';
}
else {
  $css_class = "";
}
if (!empty($pane->css['css_id'])) {
  $css_id = 'id="' . $pane->css['css_id'] . '"';
}
else {
  $css_id = "";
}

?>
<?php if ($pane_prefix): ?>
  <?php print $pane_prefix; ?>
<?php endif; ?>

<?php if (!empty($css_class) OR !empty($css_id)) { ?>
<div class="<?php print $classes; ?>" <?php print $id; ?> <?php print $attributes; ?>>
<?php } ?>

  <?php if ($admin_links): ?>
    <?php print $admin_links; ?>
  <?php endif; ?>

  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($feeds): ?>
    <div class="feed">
      <?php print $feeds; ?>
    </div>
  <?php endif; ?>

  <?php print render($content); ?>

  <?php if ($links): ?>
    <div class="links">
      <?php print $links; ?>
    </div>
  <?php endif; ?>

  <?php if ($more): ?>
    <div class="more-link">
      <?php print $more; ?>
    </div>
  <?php endif; ?>

<?php if (!empty($css_class) OR !empty($css_id)) { ?>
</div>
<?php } ?>

<?php if ($pane_suffix): ?>
  <?php print $pane_suffix; ?>
<?php endif; ?>
