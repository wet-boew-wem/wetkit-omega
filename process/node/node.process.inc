<?php
/**
 * @file
 * node.process.inc
 */


/**
 * Implements hook_process_node().
 */
function wetkit_omega_process_node(&$variables) {
  $variables['footer_attributes'] = empty($variables['footer_attributes_array']) ? '' : drupal_attributes($variables['footer_attributes_array']);
}
