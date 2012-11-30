<?php
/**
 * @file
 * rotary_projects_membership.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function rotary_projects_membership_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:birthdays
  $menu_links['main-menu:birthdays'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'birthdays',
    'router_path' => 'birthdays',
    'link_title' => 'Birthdays',
    'options' => array(
      'attributes' => array(
        'title' => 'Birthday List',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'members',
  );
  // Exported menu link: main-menu:members
  $menu_links['main-menu:members'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'members',
    'router_path' => 'members',
    'link_title' => 'Members',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:user/login
  $menu_links['main-menu:user/login'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_views' => array(
        'name' => FALSE,
        'display' => FALSE,
        'arguments' => '',
        'mlid' => 0,
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:user/logout
  $menu_links['main-menu:user/logout'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'title' => 'Display Logout',
      ),
      'menu_views' => array(
        'name' => FALSE,
        'display' => FALSE,
        'arguments' => '',
        'mlid' => 0,
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Birthdays');
  t('Home');
  t('Login');
  t('Logout');
  t('Members');


  return $menu_links;
}
