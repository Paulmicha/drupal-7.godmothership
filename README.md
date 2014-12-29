drupal-7.godmothership
======================

My own attempt to achieve a reusable Drupal 7 base theme, freely inspired by @mortendk's Mothership.

**Modules to install :**
- https://www.drupal.org/project/admin_menu
- https://www.drupal.org/project/adminimal_admin_menu
- https://www.drupal.org/project/elements
- https://www.drupal.org/project/html5_tools
- https://www.drupal.org/project/fences
- https://www.drupal.org/project/magic

**Recommended modules :**
- https://www.drupal.org/project/admin_views
- https://www.drupal.org/project/fast_404
- https://www.drupal.org/project/entity_view_mode
- https://www.drupal.org/project/hide_formats

**Magic configuration** :
- in admin/appearance/settings/YOURTHEME > "Exclude CSS files" :
```
:core
:contrib
~*.base*
~admin_menu/*.css
~contextual/*.css
~overlay/*.css
~toolbar/*.css
~*adminimal_admin_menu.css
~*hybridauth*
```

**Fences configuration** :
- in admin/config/content/fences : always choose "Override the default ..."

**Favicon** :
- Generate at http://realfavicongenerator.net/
- Extract images into /img subdir

**Bundled third-party Credits :**
- HTML5 Shiv 3.7.2 | @afarkas @jdalton @jon_neal @rem | MIT/GPL2 Licensed
