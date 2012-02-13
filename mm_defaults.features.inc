<?php
/**
 * @file
 * mm_defaults.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mm_defaults_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mm_defaults_node_info() {
  $items = array(
    'cm_block' => array(
      'name' => t('Block'),
      'base' => 'node_content',
      'description' => t('A small piece of content that can be plugged in as a component of other pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'cm_page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('A static page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'cm_panel' => array(
      'name' => t('Panel'),
      'base' => 'node_content',
      'description' => t('A panel layout broken up into rows and columns.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
