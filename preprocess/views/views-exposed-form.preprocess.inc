<?php
/**
 * @file
 * region.preprocess.inc
 */


/**
 * Implements theme_preprocess_views_exposed_form().
 *
 * @param array $variables
 */
function wetkit_omega_preprocess_views_exposed_form(&$variables) {
  $variables['form']['textfield']['#placeholder'] = t('Search');
}
