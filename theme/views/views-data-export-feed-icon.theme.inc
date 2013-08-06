<?php
/**
 * @file
 * views-data-export-feed-icon.theme.inc
 */


/**
 * Theme the 'views data export' feed icon.
 *
 * @param array $variables
 * @return string
 */
function wetkit_omega_views_data_export_feed_icon($variables) {
  extract($variables, EXTR_SKIP);
  $url_options = array('html' => TRUE);
  if ($query) {
    $url_options['query'] = $query;
  }
  //$image = theme('image', array('path' => $image_path, 'alt' => $text, 'title' => $text));
  //return l($image, $url, $url_options);
  $actions = array(
    array(
      'title' => $text,
      'href' => $url,
      'attributes' => array(
        'alt' => $text,
        'class' => 'button button-accent'
      ),
    ));
  return '<div class="cse-button">' . theme('links', array('links' => $actions, 'attributes' => array('class' => ''))) . '</div>';
}
