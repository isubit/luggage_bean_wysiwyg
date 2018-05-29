<?php
/**
 * @file
 * luggage_bean_wysiwyg.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function luggage_bean_wysiwyg_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create any wysiwyg bean'.
  $permissions['create any wysiwyg bean'] = array(
    'name' => 'create any wysiwyg bean',
    'roles' => array(
      'bean editor' => 'bean editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any wysiwyg bean'.
  $permissions['delete any wysiwyg bean'] = array(
    'name' => 'delete any wysiwyg bean',
    'roles' => array(
      'bean editor' => 'bean editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any wysiwyg bean'.
  $permissions['edit any wysiwyg bean'] = array(
    'name' => 'edit any wysiwyg bean',
    'roles' => array(
      'bean editor' => 'bean editor',
      'content editor' => 'content editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any wysiwyg bean'.
  $permissions['view any wysiwyg bean'] = array(
    'name' => 'view any wysiwyg bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
