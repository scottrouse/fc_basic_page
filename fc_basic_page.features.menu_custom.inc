<?php
/**
 * @file
 * fc_basic_page.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function fc_basic_page_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-secondary-menu.
  $menus['menu-secondary-menu'] = array(
    'menu_name' => 'menu-secondary-menu',
    'title' => 'Secondary Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Secondary Menu');


  return $menus;
}
