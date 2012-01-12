<?php
/**
 * @file
 * mm_defaults.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function mm_defaults_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function mm_defaults_node_info() {
  $items = array(
    'cm_page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('A static page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
