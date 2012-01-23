<?php
/**
 * @file
 * mm_defaults.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function mm_defaults_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-tags
  $menus['menu-tags'] = array(
    'menu_name' => 'menu-tags',
    'title' => 'Tags',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Tags');


  return $menus;
}
