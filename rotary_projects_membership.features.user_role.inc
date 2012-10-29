<?php
/**
 * @file
 * rotary_projects_membership.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function rotary_projects_membership_user_default_roles() {
  $roles = array();

  // Exported role: Secretary.
  $roles['Secretary'] = array(
    'name' => 'Secretary',
    'weight' => '4',
  );

  // Exported role: Treasurer.
  $roles['Treasurer'] = array(
    'name' => 'Treasurer',
    'weight' => '3',
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  return $roles;
}
