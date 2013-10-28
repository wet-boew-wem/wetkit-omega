<?php
/**
 * @file
 * current-search-deactivate-widget.theme.inc
 */


/**
 * Theme the 'current search' deactivate widget for search blocks.
 *
 * @param array $variables
 *   String to prefix for the deactivated widget.
 *
 * @return string
 *   The rendered string.
 */
function wetkit_omega_current_search_deactivate_widget($variables) {
  return '(-) ';
}
