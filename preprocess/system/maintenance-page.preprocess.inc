<?php
/**
 * @file
 * maintenance-page.preprocess.inc
 */


/**
 * Implements hook_preprocess_maintenance_page().
 */
function wetkit_omega_preprocess_maintenance_page(&$variables) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.

  require_once drupal_get_path('theme' 'wetkit_omega') .'/preprocess/system/html.preprocess.inc';
  wetkit_omega_preprocess_html($variables);

  require_once drupal_get_path('theme' 'wetkit_omega') .'/preprocess/system/page.preprocess.inc';
  wetkit_omega_preprocess_page($variables);
}
