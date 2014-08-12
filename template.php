<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * WetKit Omega theme.
 */

/**
 * Implements hook_theme().
 */
function wetkit_omega_theme() {
  $info['links__menu_menu_wet_footer'] = array(
    'render element' => 'element',
    'theme path' => drupal_get_path('theme', 'wetkit_omega'),
  );
  $info['links__menu_menu_wet_header'] = array(
    'render element' => 'element',
    'theme path' => drupal_get_path('theme', 'wetkit_omega'),
  );
  $info['links__menu_menu_wet_terms'] = array(
    'render element' => 'element',
    'theme path' => drupal_get_path('theme', 'wetkit_omega'),
  );

  return $info;
}


/**
 * Undo "moving `classes_array` into `attributes_array`" from Omega theme
 *
 * <sarcasm> We prefer the classes array instead of the attributes array used by
 * Omega, to stay in line with many core and contrib modules. In Drupal 7, we work
 * the Drupal 7 way. In Drupal 8, we are going to do whatever is the Drupal 8 way.
 * For now, we simply encourage themers to work as they usually work in Drupal 7.
 * </sarcasm>
 *
 * @see omega/template.php::omega_theme_registry_alter(&$registry)
 */
function wetkit_omega_theme_registry_alter(&$registry) {
  foreach ($registry as $hook => $item) {
    if (empty($item['base hook']) && empty($item['function'])) {
      if (($index = array_search('omega_initialize_attributes', $registry[$hook]['preprocess functions'], TRUE)) !== FALSE) {
        unset($registry[$hook]['preprocess functions'][$index]);
      }
      if (($index = array_search('omega_cleanup_attributes', $registry[$hook]['process functions'], TRUE)) !== FALSE) {
        unset($registry[$hook]['process functions'][$index]);
      }
    }
  }
}
