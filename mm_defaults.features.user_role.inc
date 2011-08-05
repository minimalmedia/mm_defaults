<?php

/**
 * Implementation of hook_user_default_roles().
 */
function mm_defaults_user_default_roles() {
  $roles = array();

  // Exported role: editor
  $roles['editor'] = array(
    'name' => 'editor',
  );

  return $roles;
}
