<?php

/**
 * @file
 * Template to display a rows in a grid.
 *
 * - $rows contains a nested array of rows. Each row contains an array of
 *   columns.
 *
 * @ingroup views_templates
 */

if (!empty($title)) {
    print "<h3>$title</h3>";
}

print '<div class="grid ' . $class . '"' . $attributes . '>';

foreach ($rows as $row_number => $columns)
{
    foreach ($columns as $column_number => $item)
    {
        print '<div class="grid__item">';
        print $item;
        print '</div>';
    }
}

print '</div>';


/*
?>
<?php if (!empty($title)) : ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<table class="<?php print $class; ?>"<?php print $attributes; ?>>
  <?php if (!empty($caption)) : ?>
    <caption><?php print $caption; ?></caption>
  <?php endif; ?>

  <tbody>
    <?php foreach ($rows as $row_number => $columns): ?>
      <tr <?php if ($row_classes[$row_number]) { print 'class="' . $row_classes[$row_number] .'"';  } ?>>
        <?php foreach ($columns as $column_number => $item): ?>
          <td <?php if ($column_classes[$row_number][$column_number]) { print 'class="' . $column_classes[$row_number][$column_number] .'"';  } ?>>
            <?php print $item; ?>
          </td>
        <?php endforeach; ?>
      </tr>
    <?php endforeach; ?>
  </tbody>
</table>
*/
