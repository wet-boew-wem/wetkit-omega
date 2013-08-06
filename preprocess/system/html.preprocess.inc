<?php
/**
 * @file
 * html.preprocess.inc
 */


/**
 * Implements hook_preprocess_html().
 */
function wetkit_omega_preprocess_html(&$variables) {
  global $theme_key, $language;

  // Modify html attributes for WET.
  // Use a proper attributes array for the html attributes
  $variables['html_attributes_array']['lang'][] = $language->language;
  $variables['html_attributes_array']['dir'][] = $language->dir;

  unset($variables['html_attributes_array']['dir']);

  // Add the default body id needed for WET.
  // This will be dynamically replaced by the wetkit_layouts module.
  if (empty($variables['wetkit_col_array'])) {
    $variables['wetkit_col_array'] = 'wb-body';
  }

  // Add a body class for the active theme name.
  $variables['classes_array'][] = drupal_html_class($theme_key);

  // Browser/platform sniff - adds body classes such as ipad, webkit, chrome
  // etc.
  // $variables['classes_array'][] = css_browser_selector();

  // Assign skip link variables.
  $variables['wetkit_skip_link_id_1'] = omega_theme_get_setting('wetkit_skip_link_id_1');
  $variables['wetkit_skip_link_text_1'] = t('Skip to main content');
  $variables['wetkit_skip_link_id_2'] = omega_theme_get_setting('wetkit_skip_link_id_2');
  $variables['wetkit_skip_link_text_2'] = t('Skip to footer');

  // Remove Classes.
  $variables['classes_array'] = array_diff($variables['classes_array'], array('site-name-web-experience-toolkit'));

  // Add Viewport for WET Mobile.
  $element = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'viewport',
      'content' => 'width=device-width, initial-scale=1',
    ),
  );
  drupal_add_html_head($element, 'viewport');
}
