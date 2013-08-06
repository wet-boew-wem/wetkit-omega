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
  wetkit_omega_preprocess_html($variables, $hook);
  wetkit_omega_preprocess_page($variables, $hook);
}
