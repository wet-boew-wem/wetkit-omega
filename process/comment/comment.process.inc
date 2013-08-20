<?php
/**
 * @file
 * comment.process.inc
 */


/**
 * Implements hook_process_comment().
 */
function wetkit_omega_process_comment(&$variables) {
  $variables['footer_attributes'] = empty($variables['footer_attributes_array']) ? '' : drupal_attributes($variables['footer_attributes_array']);
}
