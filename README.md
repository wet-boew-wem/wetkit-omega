# WetKit Omega

WetKit Omega 4.x is a modern, [Sass](http://sass-lang.com/) and [Compass](http://compass-style.org/) enabled Drupal 7 theme powered by the Omega base theme.

Omega Key Features
* Backports many of the standards described in the Drupal 8 CSS Standards
* Provides layouts as a method of managing page templates along with layout specific stylesheets and regions.
* Extensions which contain settings for many popular libraries and tools to manage Drupals Javascript and CSS assets.
* Extension which provides tools for disabling caching, a region demo mode, a browser width indicator, optional integration for LiveReload and more.
* Omega 4.x contains a rewrite (cleanup) of all of core’s CSS and many optimizations to the markup generated by core.
* Omega 4.x allows you to manage your template file in separate directories, with an .inc file for each.
* Omega 4.x provides extensive Drush integration out of the box allowing you to quickly generate subthemes with drush omega-wizard etc.

## Documentation

The [Omega 4.x documentation](https://drupal.org/node/1768686) is hosted on drupal.org as part of the handbook section. Please note that we are still in the process of writing the documentation. If you want to get involved, please contact us.

## Sub Theming

The easiest way to create a new WetKit Omega based sub-theme is by using [Drush](http://drupal.org/project/drush). Omega itself comes with a very easy-to-use Drush command for generating sub-themes through a command-line wizard. You can start the sub-theme creation wizard by invoking `drush omega-wizard` in the command-line and specifying you wish to create a subtheme of WetKit Omega.
