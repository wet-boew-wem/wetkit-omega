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
<!--[if IE 7]><html lang="en" class="no-js ie7"><![endif]-->
<!--[if IE 8]><html lang="en" class="no-js ie8"><![endif]-->
<!--[if gt IE 8]><!-->
<html lang="en" class="no-js">
<!--<![endif]-->
<head>
  <meta charset="utf-8" />
  <title><?php print $head_title; ?></title>
  <link rel="shortcut icon" href="/profiles/wetkit/libraries/wet-boew/dist/theme-wet-boew/images/favicon.ico" />
  <meta name="robots" content="noindex, nofollow, noarchive" />
  <meta name="viewport" content="width=device-width, initial-scale=1" />
  <!--[if lte IE 8]>
  <script src="/profiles/wetkit/libraries/wet-boew/dist/js/jquery-ie.min.js"></script>
  <script src="/profiles/wetkit/libraries/wet-boew/dist/js/polyfills/html5shiv-min.js"></script>
  <link rel="stylesheet" href="/profiles/wetkit/libraries/wet-boew/dist/grids/css/util-ie-min.css" />
  <link rel="stylesheet" href="/profiles/wetkit/libraries/wet-boew/dist/js/css/pe-ap-ie-min.css" />
  <link rel="stylesheet" href="/profiles/wetkit/libraries/wet-boew/dist/theme-wet-boew/css/theme-serv-ie-min.css" />
  <noscript><link rel="stylesheet" href="/profiles/wetkit/libraries/wet-boew/dist/theme-wet-boew/css/theme-ns-ie-min.css" /></noscript>
  <![endif]-->
  <!--[if gt IE 8]><!-->
  <script src="/profiles/wetkit/libraries/wet-boew/dist/js/jquery.min.js"></script>
  <link rel="stylesheet" href="/profiles/wetkit/libraries/wet-boew/dist/grids/css/util-min.css" />
  <link rel="stylesheet" href="/profiles/wetkit/libraries/wet-boew/dist/js/css/pe-ap-min.css" />
  <link rel="stylesheet" href="/profiles/wetkit/libraries/wet-boew/dist/theme-wet-boew/css/theme-serv-min.css" />
  <noscript><link rel="stylesheet" href="/profiles/wetkit/libraries/wet-boew/dist/theme-wet-boew/css/theme-ns-min.css" /></noscript>
  <!--<![endif]-->
</head>
<body>
  <div id="wb-body">
    <div id="wb-head">
      <div id="wb-head-in">
        <header>
          <!-- HeaderStart -->
          <div id="wet-fullhd">
            <div id="wet-fullhd-in">
            </div>
          </div>
          <div id="wet-bnr" role="banner">
            <div id="wet-bnr-in">
              <div id="wet-title">
                <p id="wet-title-in">
                <object data="/profiles/wetkit/libraries/wet-boew/dist/theme-wet-boew/images/logo.svg" role="img" tabindex="-1" type="image/svg+xml">
                  <img src="/profiles/wetkit/libraries/wet-boew/dist/theme-wet-boew/images/logo.png" alt="" />
                </object>
                <span><?php print $site_name; ?></span>
                </p>
              </div>
            </div>
          </div>
          <!-- HeaderEnd -->
        </header>
      </div>
    </div>
    <div id="wb-core">
      <div id="wb-core-in" class="equalize">
        <div id="wb-main" role="main">
          <div id="wb-main-in">
            <!-- MainContentStart -->
            <?php if (!$db_down): ?>
            <div class="span-8">
              <section>
                <?php if ($title): ?>
                <h2><?php print $title; ?></h1>
                <?php endif; ?>
                <?php print $messages; ?>
                <?php print $content; ?>
              </section>
            </div>
            <div class="clear"></div>
            <?php endif; ?>
            <?php if ($db_down): ?>
            <div class="span-4">
              <section>
                <h2><?php print $wxt_title_en; ?></h2>
                <p><?php print $wxt_content_en; ?></p>
              </section>
            </div>
            <div class="span-4" lang="fr">
              <section>
                <h2><?php print $wxt_title_fr; ?></h2>
                <p><?php print $wxt_content_fr; ?></p>
              </section>
            </div>
            <div class="clear"></div>
            <?php endif; ?>
            <!-- MainContentEnd -->
          </div>
        </div>
      </div>
    </div>
  </div>
  <!-- ScriptsStart -->
  <script src="/profiles/wetkit/libraries/wet-boew/dist/js/settings.js"></script>
  <!--[if lte IE 8]>
  <script src="/profiles/wetkit/libraries/wet-boew/dist/theme-wet-boew/js/theme-ie-min.js"></script>
  <script src="/profiles/wetkit/libraries/wet-boew/dist/js/pe-ap-ie-min.js"></script>
  <script src="/profiles/wetkit/libraries/wet-boew/dist/js/jquerymobile/jquery.mobile-ie.min.js"></script>
  <![endif]-->
  <!--[if gt IE 8]><!-->
  <script src="/profiles/wetkit/libraries/wet-boew/dist/theme-wet-boew/js/theme-min.js"></script>
  <script src="/profiles/wetkit/libraries/wet-boew/dist/js/pe-ap-min.js"></script>
  <script src="/profiles/wetkit/libraries/wet-boew/dist/js/jquerymobile/jquery.mobile.min.js"></script>
  <!--<![endif]-->
  <!-- ScriptsEnd -->
</body>
</html>