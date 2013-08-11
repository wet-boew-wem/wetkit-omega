<?php
/**
 * @file
 * Omega implementation to display a single Drupal page while offline.
 *
 * Not all variables are mirrored from html.tpl.php and page.tpl.php, only those
 * required to deliver valid html page with branding and site offline messages.
 * $polyfills is included to support HTML5 in IE8 and below.
 *
 * @see template_preprocess()
 * @see template_preprocess_maintenance_page()
 * @see omega_preprocess()
 * @see omega_preprocess_maintenance_page()
 */
?><!DOCTYPE html>
<!--[if IE 7]><html<?php print $html_attributes; ?> class="no-js ie7"><![endif]-->
<!--[if IE 8]><html<?php print $html_attributes; ?> class="no-js ie8"><![endif]-->
<!--[if gt IE 8]><!--><html<?php print $html_attributes . $rdf_namespaces; ?>><!--<![endif]-->
<head>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>
</head>
<body class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div id="<?php print $wetkit_col_array; ?>">
    <div id="wb-skip">
      <ul id="wb-tphp">
        <?php if ($wetkit_skip_link_id_1 && $wetkit_skip_link_text_1): ?>
          <li id="wb-skip1"><a href="#<?php print $wetkit_skip_link_id_1; ?>"><?php print $wetkit_skip_link_text_1; ?></a></li>
        <?php endif; ?>
        <?php if ($wetkit_skip_link_id_2 && $wetkit_skip_link_text_2): ?>
          <li id="wb-skip2"><a href="#<?php print $wetkit_skip_link_id_2; ?>"><?php print $wetkit_skip_link_text_2; ?></a></li>
        <?php endif; ?>
      </ul>
    </div>
    <?php print $page_top; ?>
    <?php print $page; ?>
    <?php print $page_bottom; ?>
  </div>
</body>
</html>
