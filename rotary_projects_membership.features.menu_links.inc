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
    'weight' => '-50',
    'parent_path' => 'members',
  );
  // Exported menu link: main-menu:committees
  $menu_links['main-menu:committees'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'committees',
    'router_path' => 'committees',
    'link_title' => 'Committees',
    'options' => array(
      'attributes' => array(
        'title' => 'List of Committees',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-47',
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
    'weight' => '-49',
  );
  // Exported menu link: main-menu:projects
  $menu_links['main-menu:projects'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'projects',
    'router_path' => 'projects',
    'link_title' => 'Projects',
    'options' => array(
      'attributes' => array(
        'title' => 'Projects and Committees',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:roster
  $menu_links['main-menu:roster'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'roster',
    'router_path' => 'roster',
    'link_title' => 'Roster',
    'options' => array(
      'attributes' => array(
        'title' => 'Membership Roster',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'members',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Birthdays');
  t('Committees');
  t('Home');
  t('Members');
  t('Projects');
  t('Roster');


  return $menu_links;
}
