<?php
/**
 * @file
 * views-mini-pager.theme.inc
 */


/**
 * Override or insert variables into the theme links templates.
 *
 * @param array $variables
 *   An array of variables to pass to the theme template.
 */
function wetkit_omega_views_mini_pager($variables) {
  global $pager_page_array, $pager_total;

  $tags = $variables['tags'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];

  // Current is the page we are currently paged to.
  $pager_current = $pager_page_array[$element] + 1;

  // Max is the maximum page number.
  $pager_max = $pager_total[$element];

  if ($pager_total[$element] > 1) {

    $li_previous = theme('pager_previous',
      array(
        'text' => (isset($tags[1]) ? $tags[1] : t('‹‹')),
        'element' => $element,
        'interval' => 1,
        'parameters' => $parameters,
        'attributes' => array(
          'class' => 'button button-accent ui-link',
        ),
      ),
    );
    if (empty($li_previous)) {
      $li_previous = '&lt;&lt;';
      $li_previous_class = array('button button-disabled pager-previous');
    }
    else {
      $li_previous_class = array('pager-previous');
    }

    $li_next = theme('pager_next',
      array(
        'text' => (isset($tags[3]) ? $tags[3] : t('››')),
        'element' => $element,
        'interval' => 1,
        'parameters' => $parameters,
        'attributes' => array(
          'class' => 'button button-accent ui-link',
        ),
      ),
    );

    if (empty($li_next)) {
      $li_next = '&gt;&gt;';
      $li_next_class = array('button button-disabled pager-next');
    }
    else {
      $li_next_class = array('pager-next');
    }

    $items[] = array(
      'class' => $li_previous_class,
      'data' => $li_previous,
    );
    $items[] = array(
      'class' => array('button button-disabled pager-current'),
      'data' => t('@current of @max', array('@current' => $pager_current, '@max' => $pager_max)),
    );
    $items[] = array(
      'class' => $li_next_class,
      'data' => $li_next,
    );

    return theme('item_list',
      array(
        'items' => $items,
        'title' => NULL,
        'type' => 'ul',
        'attributes' => array(
          'class' => array('pager'),
        ),
      ),
    );
  }
}
