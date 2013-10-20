<?php
/**
 * @file
 * panels-pane.preprocess.inc
 */


/**
 * Implements hook_preprocess_panels_pane().
 */
function wetkit_omega_preprocess_panels_pane(&$variables) {
  if ($variables['pane']->type == 'node_updated') {
    // Date Support for different themes.
    if (variable_get('wetkit_wetboew_theme', 0) == 1) {
      $variables['date_mod'] = 'gcwu-date-mod';
    }
    elseif (variable_get('wetkit_wetboew_theme', 0) == 2) {
      $variables['date_mod'] = 'gcwu-date-mod';
    }
    elseif (variable_get('wetkit_wetboew_theme', 0) == 3) {
      $variables['date_mod'] = 'base-date-mod';
    }
    elseif (variable_get('wetkit_wetboew_theme', 0) == 4) {
      $variables['date_mod'] = 'ogpl-date-mod';
    }
    else {
      $variables['date_mod'] = 'wet-date-mod';
    }
  }
}
