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
}