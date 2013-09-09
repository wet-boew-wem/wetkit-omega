; ##############################################################################
; WetKit Omega Makefile
;
; This is a Drush make file that will automatically download the front-end
; libraries used by Omega. Alternatively, you can use Bower (http://bower.io) to
; accomplish this.
;
; Running Drush make in your sub-theme will cause the libraries to be downloaded
; into your theme. If you want to download them into Omega directly to make them
; available to all of your sub-themes (if you have multiple) then you should
; instead run omega.make from the Omega theme directory.
;
; To run this file with 'drush make' you first have to navigate into your theme.
; Normally, this would be 'sites/all/themes/{{ THEME }}'.
;
; $ cd sites/all/themes/{{ THEME }}
;
; Now you can invoke 'drush make' using the following command:
;
; $ drush make {{ THEME }}.make --no-core --contrib-destination=.
;
; ##############################################################################

core = 7.x
api = 2

; Theme(s)

projects[omega][version] = 4.x-dev
projects[omega][type] = theme
projects[omega][download][type] = git
projects[omega][download][revision] = e68542d
projects[omega][download][branch] = 7.x-4.x

; Libraries

libraries[selectivizr][download][type] = "file"
libraries[selectivizr][download][url] = "http://selectivizr.com/downloads/selectivizr-1.0.2.zip"

libraries[html5shiv][download][type] = "file"
libraries[html5shiv][download][url] = "https://github.com/aFarkas/html5shiv/archive/3.6.2.zip"

libraries[respond][download][type] = "file"
libraries[respond][download][url] = "https://github.com/scottjehl/Respond/tarball/master"

;libraries[matchmedia][download][type] = "file"
;libraries[matchmedia][download][url] = "https://github.com/fubhy/matchmedia/archive/master.zip"

;libraries[pie][download][type] = "file"
;libraries[pie][download][url] = "https://github.com/fubhy/pie/archive/master.zip"
