<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function mm_defaults_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function mm_defaults_node_info() {
  $items = array(
    'block' => array(
      'name' => t('Block'),
      'module' => 'features',
      'description' => t('Content to be viewed as a block.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
