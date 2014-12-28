<?php

/**
 * @file
 * BNF Essentiels - theme implementation to navigate books.
 *
 * Presented under nodes that are a part of book outlines.
 *
 * Available variables:
 * - $tree: The immediate children of the current node rendered as an unordered
 *   list.
 * - $current_depth: Depth of the current node within the book outline. Provided
 *   for context.
 * - $prev_url: URL to the previous node.
 * - $prev_title: Title of the previous node.
 * - $parent_url: URL to the parent node.
 * - $parent_title: Title of the parent node. Not printed by default. Provided
 *   as an option.
 * - $next_url: URL to the next node.
 * - $next_title: Title of the next node.
 * - $has_links: Flags TRUE whenever the previous, parent or next data has a
 *   value.
 * - $book_id: The book ID of the current outline being viewed. Same as the node
 *   ID containing the entire outline. Provided for context.
 * - $book_url: The book/node URL of the current outline being viewed. Provided
 *   as an option. Not used by default.
 * - $book_title: The book/node title of the current outline being viewed.
 *   Provided as an option. Not used by default.
 *
 * @see template_preprocess_book_navigation()
 * @ingroup themeable
 */

if ($tree || $has_links)
{
?>
<?php print $tree; ?>
<ul class="pager">
    <?php if ($prev_url): ?>
    <li class="pager__previous">
        <a href="<?php print $prev_url; ?>"><span class="accessibility"><?php print t('Go to previous page'); ?></span><i class="icon-arrow-left"></i></a>
    </li>
    <?php endif; ?>
    <?php if ($next_url): ?>
    <li class="pager__next">
        <a href="<?php print $next_url; ?>">
            <span class="accessibility"><?php print t('Go to next page'); ?></span><i class="icon-arrow-right"></i>
        </a>
    </li>
    <?php endif; ?>
</ul>
<?php
}

