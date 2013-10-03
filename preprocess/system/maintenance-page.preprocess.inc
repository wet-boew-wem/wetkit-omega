<?php
/**
 * @file
 * maintenance-page.preprocess.inc
 */


/**
 * Implements hook_preprocess_maintenance_page().
 */
function wetkit_omega_preprocess_maintenance_page(&$variables) {
  $db_down = FALSE;

  // Dead databases will show error messages so supplying this template will
  // allow themers to override the page and the content completely.
  if (isset($variables['db_is_active']) && !$variables['db_is_active']) {
    $db_down = TRUE;
  }

  // Maintenance Page logic for when the site is in maintenance mode
  // and the database is down / not available.
  if ($db_down) {
    $variables['content'] = '<p>The site is currently not available due to technical problems. Please try again later. Thank you for your understanding.</p>';
    $variables['head_title'] = 'Site not available / Site non disponible';
    $variables['help_title_text_en'] = 'Site not available';
    $variables['help_body_text_en'] = 'There is a problem connecting to the database';
    $variables['help_title_text_fr'] = 'site non disponible';
    $variables['help_body_text_fr'] = 'Il ya un problème de connexion à la base de donnéese';
    $variables['messages'] = '';
    $variables['site_name'] = 'No site name / Aucun nom de site';
    $variables['title'] = 'Site not available / Site non disponible';

    // Since database is down determine which theme to use based on
    // conf variable in settings.php else revert to using the WxT theme.
    $variables['theme_hook_suggestion'] = isset($conf['maintenance_theme_suggestion']) ? $conf['maintenance_theme_suggestion'] : 'maintenance_page__wet';
  }

  // Maintenance Page logic for when the site is in maintenance mode
  // but database is not down.
  if (!$db_down) {
    // Have to assign both languages for these variables
    // as maintenance page is limited in translation support.
    $variables['help_title_text_en'] = 'Please try again shortly';
    $variables['help_body_text_en'] = 'We are busy performing site maintenance on this domain.';
    $variables['help_title_text_fr'] = 'Réessayer prochainement';
    $variables['help_body_text_fr'] = 'Nous sommes en train de procéder à entretien du site sur ce domaine.';

  	if (variable_get('wetkit_wetboew_theme', 0) == 1) {
    	$variables['theme_hook_suggestion'] =  'maintenance_page__internet';
    }
    elseif (variable_get('wetkit_wetboew_theme', 0) == 2) {
    	$variables['theme_hook_suggestion'] = 'maintenance_page__intranet';
    }
    elseif (variable_get('wetkit_wetboew_theme', 0) == 3) {
     	$variables['theme_hook_suggestion'] = 'maintenance_page__base';
    }
    else {
      $variables['theme_hook_suggestion'] = 'maintenance_page__wet';
    }
  }
}
