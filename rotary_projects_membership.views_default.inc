<?php
/**
 * @file
 * rotary_projects_membership.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rotary_projects_membership_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'birthdays';
  $view->description = 'Member birthday list, sorted by month/day and excluding year';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Birthdays';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Birthdays';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'php_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_member_name' => 'field_member_name',
    'field_birthdate' => 'field_birthdate',
    'php' => 'php',
    'php_1' => 'php_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_member_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_birthdate' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['required'] = 1;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'rotary_information' => 'rotary_information',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Field: Member Name */
  $handler->display->display_options['fields']['field_member_name']['id'] = 'field_member_name';
  $handler->display->display_options['fields']['field_member_name']['table'] = 'field_data_field_member_name';
  $handler->display->display_options['fields']['field_member_name']['field'] = 'field_member_name';
  $handler->display->display_options['fields']['field_member_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_member_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_member_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_member_name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_member_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_member_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_member_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_member_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_member_name']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_member_name']['settings'] = array(
    'name' => 'member_name',
    'display_id' => 'default',
    'add' => 'Add',
  );
  $handler->display->display_options['fields']['field_member_name']['field_api_classes'] = 0;
  /* Field: User: Birthdate */
  $handler->display->display_options['fields']['field_birthdate']['id'] = 'field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['table'] = 'field_data_field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['field'] = 'field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_birthdate']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_birthdate']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_birthdate']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_birthdate']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_birthdate']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_birthdate']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_birthdate']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_birthdate']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_birthdate']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_birthdate']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_birthdate']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_birthdate']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_birthdate']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_birthdate']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_birthdate']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_birthdate']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_birthdate']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_birthdate']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_birthdate']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_birthdate']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_birthdate']['field_api_classes'] = 0;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Birthday';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
print substr($data->field_field_birthdate[0][\'raw\'][\'value\'],5,5);
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'Month';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['php_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
print substr($data->field_field_birthdate[0][\'raw\'][\'value\'],5,2);
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Sort criterion: User: Birthdate (field_birthdate) */
  $handler->display->display_options['sorts']['field_birthdate_value']['id'] = 'field_birthdate_value';
  $handler->display->display_options['sorts']['field_birthdate_value']['table'] = 'field_data_field_birthdate';
  $handler->display->display_options['sorts']['field_birthdate_value']['field'] = 'field_birthdate_value';
  /* Contextual filter: Field: Chapter/Club (field_chapter) */
  $handler->display->display_options['arguments']['field_chapter_target_id']['id'] = 'field_chapter_target_id';
  $handler->display->display_options['arguments']['field_chapter_target_id']['table'] = 'field_data_field_chapter';
  $handler->display->display_options['arguments']['field_chapter_target_id']['field'] = 'field_chapter_target_id';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_argument_options']['code'] = 'global $user;
$node = user_load($user->uid);
if (isset($node->field_chapter[\'und\'][0][\'target_id\'])) {  // logged in user
 return $node->field_chapter[\'und\'][0][\'target_id\'];
} elseif (function_exists(\'attendance_get_config\')) {  // attendance module installed
  $config = attendance_get_config();
  if (isset($config->field_chapter[\'und\'][0][\'target_id\'])) {
    return $config->field_chapter[\'und\'][0][\'target_id\'];
  }
} 
  // get the first Chapter/club record
  $query = new EntityFieldQuery();
  $query->entityCondition(\'entity_type\', \'node\')
            ->entityCondition(\'bundle\', \'chapter\');
  $result = $query->execute();
  if (isset($result[\'node\'])) {
    return current(array_keys($result[\'node\']));
  }
';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_chapter_target_id']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_chapter_target_id']['not'] = 0;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'birthdays';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Birthdays';
  $handler->display->display_options['menu']['description'] = 'Birthday List';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['birthdays'] = $view;

  $view = new view;
  $view->name = 'club_officers';
  $view->description = 'Custom block displaying current officers, based on the order of the taxonomy "Officers" where "Primary" is "YES"';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Club Officers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Club Officers';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'user' => 'user',
    'field_member_name' => 'field_member_name',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'user' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_member_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Taxonomy term: Profile using Officer */
  $handler->display->display_options['relationships']['reverse_field_officer_profile2']['id'] = 'reverse_field_officer_profile2';
  $handler->display->display_options['relationships']['reverse_field_officer_profile2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_officer_profile2']['field'] = 'reverse_field_officer_profile2';
  $handler->display->display_options['relationships']['reverse_field_officer_profile2']['required'] = 1;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['relationship'] = 'reverse_field_officer_profile2';
  $handler->display->display_options['relationships']['user']['required'] = 1;
  /* Relationship: Field: Member Name (field_member_name) */
  $handler->display->display_options['relationships']['field_member_name_value']['id'] = 'field_member_name_value';
  $handler->display->display_options['relationships']['field_member_name_value']['table'] = 'field_data_field_member_name';
  $handler->display->display_options['relationships']['field_member_name_value']['field'] = 'field_member_name_value';
  $handler->display->display_options['relationships']['field_member_name_value']['relationship'] = 'user';
  $handler->display->display_options['relationships']['field_member_name_value']['required'] = 1;
  $handler->display->display_options['relationships']['field_member_name_value']['delta'] = '-1';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  $handler->display->display_options['fields']['name']['convert_spaces'] = 0;
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['relationship'] = 'reverse_field_officer_profile2';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['user']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['user']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['user']['alter']['external'] = 0;
  $handler->display->display_options['fields']['user']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['user']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['user']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['user']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['user']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['user']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['user']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['user']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['user']['alter']['html'] = 0;
  $handler->display->display_options['fields']['user']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['user']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['user']['hide_empty'] = 0;
  $handler->display->display_options['fields']['user']['empty_zero'] = 0;
  $handler->display->display_options['fields']['user']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['user']['format_plural'] = 0;
  /* Field: Field: Member Name */
  $handler->display->display_options['fields']['field_member_name']['id'] = 'field_member_name';
  $handler->display->display_options['fields']['field_member_name']['table'] = 'field_data_field_member_name';
  $handler->display->display_options['fields']['field_member_name']['field'] = 'field_member_name';
  $handler->display->display_options['fields']['field_member_name']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_member_name']['label'] = '';
  $handler->display->display_options['fields']['field_member_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_member_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_member_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_member_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_member_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_member_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_member_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_member_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_member_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_member_name']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_member_name']['settings'] = array(
    'name' => 'member_name',
    'display_id' => 'default',
    'add' => '',
  );
  $handler->display->display_options['fields']['field_member_name']['field_api_classes'] = 0;
  /* Field: Concatenated Member Name + Officer title */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Concatenated Member Name + Officer title';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_member_name]
[name]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Contextual filter: Field: Chapter/Club (field_chapter) */
  $handler->display->display_options['arguments']['field_chapter_target_id']['id'] = 'field_chapter_target_id';
  $handler->display->display_options['arguments']['field_chapter_target_id']['table'] = 'field_data_field_chapter';
  $handler->display->display_options['arguments']['field_chapter_target_id']['field'] = 'field_chapter_target_id';
  $handler->display->display_options['arguments']['field_chapter_target_id']['relationship'] = 'user';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_argument_options']['code'] = 'global $user;
$node = user_load($user->uid);
if (isset($node->field_chapter[\'und\'][0][\'target_id\'])) {  // logged in user
 return $node->field_chapter[\'und\'][0][\'target_id\'];
} elseif (function_exists(\'attendance_get_config\')) {  // attendance module installed
  $config = attendance_get_config();
  if (isset($config->field_chapter[\'und\'][0][\'target_id\'])) {
    return $config->field_chapter[\'und\'][0][\'target_id\'];
  }
} 
  // get the first Chapter/club record
  $query = new EntityFieldQuery();
  $query->entityCondition(\'entity_type\', \'node\')
            ->entityCondition(\'bundle\', \'chapter\');
  $result = $query->execute();
  if (isset($result[\'node\'])) {
    return current(array_keys($result[\'node\']));
  }
';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_chapter_target_id']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_chapter_target_id']['not'] = 0;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'officers' => 'officers',
  );
  /* Filter criterion: Taxonomy term: Primary Officer (field_primary_officer) */
  $handler->display->display_options['filters']['field_primary_officer_value']['id'] = 'field_primary_officer_value';
  $handler->display->display_options['filters']['field_primary_officer_value']['table'] = 'field_data_field_primary_officer';
  $handler->display->display_options['filters']['field_primary_officer_value']['field'] = 'field_primary_officer_value';
  $handler->display->display_options['filters']['field_primary_officer_value']['value'] = array(
    'Yes' => 'Yes',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'club-officers';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $export['club_officers'] = $view;

  $view = new view;
  $view->name = 'committee_details';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Committee Details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Committee Details';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_committee_chair_profile2']['id'] = 'reverse_field_committee_chair_profile2';
  $handler->display->display_options['relationships']['reverse_field_committee_chair_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_committee_chair_profile2']['field'] = 'reverse_field_committee_chair_profile2';
  $handler->display->display_options['relationships']['reverse_field_committee_chair_profile2']['required'] = 0;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['relationship'] = 'reverse_field_committee_chair_profile2';
  $handler->display->display_options['relationships']['user']['required'] = 0;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_album_target_id']['id'] = 'field_album_target_id';
  $handler->display->display_options['relationships']['field_album_target_id']['table'] = 'field_data_field_album';
  $handler->display->display_options['relationships']['field_album_target_id']['field'] = 'field_album_target_id';
  $handler->display->display_options['relationships']['field_album_target_id']['required'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Title : [title] ';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Committee Type */
  $handler->display->display_options['fields']['field_committee_type']['id'] = 'field_committee_type';
  $handler->display->display_options['fields']['field_committee_type']['table'] = 'field_data_field_committee_type';
  $handler->display->display_options['fields']['field_committee_type']['field'] = 'field_committee_type';
  $handler->display->display_options['fields']['field_committee_type']['label'] = '';
  $handler->display->display_options['fields']['field_committee_type']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_committee_type']['alter']['text'] = 'Committee Type: [field_committee_type]';
  $handler->display->display_options['fields']['field_committee_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_committee_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_committee_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_committee_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_committee_type']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['text'] = 'Website : [field_website] ';
  $handler->display->display_options['fields']['field_website']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_website']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_website']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_website']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_website']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_website']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_website']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_website']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_website']['field_api_classes'] = 0;
  /* Field: Field: Phone Number */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = 'Phone Number : [field_phone]';
  $handler->display->display_options['fields']['field_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_phone']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_phone']['type'] = 'local_phone_number';
  $handler->display->display_options['fields']['field_phone']['field_api_classes'] = 0;
  /* Field: Content: Private */
  $handler->display->display_options['fields']['field_private']['id'] = 'field_private';
  $handler->display->display_options['fields']['field_private']['table'] = 'field_data_field_private';
  $handler->display->display_options['fields']['field_private']['field'] = 'field_private';
  $handler->display->display_options['fields']['field_private']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_private']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_private']['alter']['text'] = '( [field_private] )';
  $handler->display->display_options['fields']['field_private']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_private']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_private']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_private']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_private']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_private']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_private']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_private']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_private']['field_api_classes'] = 0;
  /* Field: Content: Purpose */
  $handler->display->display_options['fields']['field_phone_number_purpose']['id'] = 'field_phone_number_purpose';
  $handler->display->display_options['fields']['field_phone_number_purpose']['table'] = 'field_data_field_phone_number_purpose';
  $handler->display->display_options['fields']['field_phone_number_purpose']['field'] = 'field_phone_number_purpose';
  $handler->display->display_options['fields']['field_phone_number_purpose']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_phone_number_purpose']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['field_api_classes'] = 0;
  /* Field: Check Phone# fields */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Check Phone# fields';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
if (isset( $data->field_field_phone[0])) {
    print "Phone: " . $data->field_field_phone[0][\'rendered\'][\'#markup\'];
    if (isset($data->field_field_private[0])) {
       print \' (\' . $data->field_field_private[0][\'rendered\'][\'#markup\'] . \')\';
   }
   if (isset($data->field_field_phone_number_purpose[0])) {
       print " : " . $data->field_field_phone_number_purpose[0][\'raw\'][\'safe_value\'];
   }
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Field: Member Name */
  $handler->display->display_options['fields']['field_member_name']['id'] = 'field_member_name';
  $handler->display->display_options['fields']['field_member_name']['table'] = 'field_data_field_member_name';
  $handler->display->display_options['fields']['field_member_name']['field'] = 'field_member_name';
  $handler->display->display_options['fields']['field_member_name']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_member_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_member_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_member_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_member_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_member_name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_member_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_member_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_member_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_member_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_member_name']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_member_name']['settings'] = array(
    'name' => 'member_name',
    'display_id' => 'default',
    'add' => 'Add',
  );
  $handler->display->display_options['fields']['field_member_name']['field_api_classes'] = 0;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['mail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['mail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = 1;
  /* Field: Field: Contact Info */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['relationship'] = 'reverse_field_committee_chair_profile2';
  $handler->display->display_options['fields']['field_contact_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_contact_phone']['settings'] = array(
    'name' => 'phone_number',
    'display_id' => 'default',
    'add' => 'Add',
  );
  $handler->display->display_options['fields']['field_contact_phone']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_contact_phone']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['field_api_classes'] = 0;
  /* Field: Committee Chair contact information */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Committee Chair contact information';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<table border=1 valign=top><tr><th colspan=3>Committee Chair</th></tr>
<tr><td>[field_member_name]</td><td>[mail]</td><td>[field_contact_phone]</td></tr>
</table>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'user';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 1;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['php_1']['alter']['text'] = '<table><tr><th>Committee Members</th></tr>
<tr><td>[php_1]</td></tr>
</table>';
  $handler->display->display_options['fields']['php_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['php_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php_1']['hide_empty'] = 1;
  $handler->display->display_options['fields']['php_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_value'] = '$name = \'\';

static $pid; #define pid(profile id) variable
$select = "select entity_id from field_data_field_project_member where field_project_member_target_id = \'$data->nid\'";
$result = db_query($select); #query to get pid
foreach ($result as $record) {
   $first = $middle = $last = $suffix = \'\';
   $select = "select uid from profile where pid = \'$record->entity_id\'";
   $result1 = db_query($select);
   foreach ($result1 as $record1) {
       $user = user_load($record1->uid);
       $entity_id = $user->field_member_name[\'und\'][0][\'value\'];
#  First
       $select = "select field_first_name_value from field_data_field_first_name where entity_id = \'$entity_id\'";
       $result2 = db_query($select);
       foreach ($result2 as $record2) {
           $first = $record2->field_first_name_value;
       }
#  Middle
       $select = "select field_middle_initial_value from field_data_field_middle_initial where entity_id = \'$entity_id\'";
       $result2 = db_query($select);
       foreach ($result2 as $record2) {
           $middle = $record2->field_middle_initial_value;
       }
#  Last
       $select = "select field_last_name_value from field_data_field_last_name where entity_id = \'$entity_id\'";
       $result2 = db_query($select);
       foreach ($result2 as $record2) {
           $last = $record2->field_last_name_value;
       }
#  Suffix
       $select = "select field_suffix_value from field_data_field_suffix where entity_id = \'$entity_id\'";
       $result2 = db_query($select);
       foreach ($result2 as $record2) {
           $suffix = $record2->field_suffix_value;
       }
   }
   $name .= "$first $middle $last $suffix\\n";
}
return $name;';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Content: Project Address */
  $handler->display->display_options['fields']['field_project_address']['id'] = 'field_project_address';
  $handler->display->display_options['fields']['field_project_address']['table'] = 'field_data_field_project_address';
  $handler->display->display_options['fields']['field_project_address']['field'] = 'field_project_address';
  $handler->display->display_options['fields']['field_project_address']['label'] = '';
  $handler->display->display_options['fields']['field_project_address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_address']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_address']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_address']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_project_address']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_project_address']['field_api_classes'] = 0;
  /* Field: Content: Album Cover */
  $handler->display->display_options['fields']['field_album_cover_full']['id'] = 'field_album_cover_full';
  $handler->display->display_options['fields']['field_album_cover_full']['table'] = 'field_data_field_album_cover_full';
  $handler->display->display_options['fields']['field_album_cover_full']['field'] = 'field_album_cover_full';
  $handler->display->display_options['fields']['field_album_cover_full']['relationship'] = 'field_album_target_id';
  $handler->display->display_options['fields']['field_album_cover_full']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_album_cover_full']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_album_cover_full']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_album_cover_full']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_album_cover_full']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_album_cover_full']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_album_cover_full']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['relationship'] = 'field_album_target_id';
  $handler->display->display_options['fields']['body_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['body_1']['alter']['text'] = '[body_1] ... Click here: ';
  $handler->display->display_options['fields']['body_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['body_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body_1']['hide_empty'] = 1;
  $handler->display->display_options['fields']['body_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body_1']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body_1']['field_api_classes'] = 0;
  /* Field: Album (Click to see Album) */
  $handler->display->display_options['fields']['field_album']['id'] = 'field_album';
  $handler->display->display_options['fields']['field_album']['table'] = 'field_data_field_album';
  $handler->display->display_options['fields']['field_album']['field'] = 'field_album';
  $handler->display->display_options['fields']['field_album']['ui_name'] = 'Album (Click to see Album)';
  $handler->display->display_options['fields']['field_album']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_album']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_album']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_album']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_album']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_album']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_album']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_album']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_album']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_album']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_album']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_album']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_album']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_album']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_album']['field_api_classes'] = 0;
  /* Field: Album cover + description */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Album cover + description';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<table><tr><td>[field_album_cover_full]</td><td>[body_1] [field_album]</td></table>';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_1']['hide_alter_empty'] = 0;
  /* Field: ( Return to Committees ) Link */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = '( Return to Committees ) Link';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Return to Committees';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = 'committees';
  $handler->display->display_options['fields']['nothing_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_2']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_2']['hide_alter_empty'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'committees' => 'committees',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'committee-details';
  $export['committee_details'] = $view;

  $view = new view;
  $view->name = 'committees_list_';
  $view->description = 'Display committee information';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Committees (List)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Committees';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_committee_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_member_name' => 'field_member_name',
    'mail' => 'mail',
    'nothing' => 'nothing',
    'field_committee_type' => 'field_committee_type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_member_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_committee_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_committee_chair_profile2']['id'] = 'reverse_field_committee_chair_profile2';
  $handler->display->display_options['relationships']['reverse_field_committee_chair_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_committee_chair_profile2']['field'] = 'reverse_field_committee_chair_profile2';
  $handler->display->display_options['relationships']['reverse_field_committee_chair_profile2']['required'] = 0;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['relationship'] = 'reverse_field_committee_chair_profile2';
  $handler->display->display_options['relationships']['user']['required'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Field: Member Name */
  $handler->display->display_options['fields']['field_member_name']['id'] = 'field_member_name';
  $handler->display->display_options['fields']['field_member_name']['table'] = 'field_data_field_member_name';
  $handler->display->display_options['fields']['field_member_name']['field'] = 'field_member_name';
  $handler->display->display_options['fields']['field_member_name']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_member_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_member_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_member_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_member_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_member_name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_member_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_member_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_member_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_member_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_member_name']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_member_name']['settings'] = array(
    'name' => 'member_name',
    'display_id' => 'default',
    'add' => 'Add',
  );
  $handler->display->display_options['fields']['field_member_name']['field_api_classes'] = 0;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['mail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['mail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = 1;
  /* Field: Chair */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Chair';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_member_name]
[mail]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Field: Content: Committee Type */
  $handler->display->display_options['fields']['field_committee_type']['id'] = 'field_committee_type';
  $handler->display->display_options['fields']['field_committee_type']['table'] = 'field_data_field_committee_type';
  $handler->display->display_options['fields']['field_committee_type']['field'] = 'field_committee_type';
  $handler->display->display_options['fields']['field_committee_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_committee_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_committee_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_committee_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_committee_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_committee_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_committee_type']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'committees' => 'committees',
  );
  /* Filter criterion: Content: Committee Type (field_committee_type) */
  $handler->display->display_options['filters']['field_committee_type_tid']['id'] = 'field_committee_type_tid';
  $handler->display->display_options['filters']['field_committee_type_tid']['table'] = 'field_data_field_committee_type';
  $handler->display->display_options['filters']['field_committee_type_tid']['field'] = 'field_committee_type_tid';
  $handler->display->display_options['filters']['field_committee_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_committee_type_tid']['expose']['operator_id'] = 'field_committee_type_tid_op';
  $handler->display->display_options['filters']['field_committee_type_tid']['expose']['label'] = 'Committee Type';
  $handler->display->display_options['filters']['field_committee_type_tid']['expose']['operator'] = 'field_committee_type_tid_op';
  $handler->display->display_options['filters']['field_committee_type_tid']['expose']['identifier'] = 'field_committee_type_tid';
  $handler->display->display_options['filters']['field_committee_type_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_committee_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_committee_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_committee_type_tid']['vocabulary'] = 'committee_type';
  $handler->display->display_options['filters']['field_committee_type_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_committee_type_tid']['error_message'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'committees';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Committees';
  $handler->display->display_options['menu']['description'] = 'Committees';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['committees_list_'] = $view;

  $view = new view;
  $view->name = 'details';
  $view->description = 'Project/Committee Details ';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Details';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_member_name' => 'field_member_name',
    'field_member_name_1' => 'field_member_name_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_member_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_member_name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_project_chair_profile2']['id'] = 'reverse_field_project_chair_profile2';
  $handler->display->display_options['relationships']['reverse_field_project_chair_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_project_chair_profile2']['field'] = 'reverse_field_project_chair_profile2';
  $handler->display->display_options['relationships']['reverse_field_project_chair_profile2']['required'] = 0;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['relationship'] = 'reverse_field_project_chair_profile2';
  $handler->display->display_options['relationships']['user']['required'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Field: Member Name */
  $handler->display->display_options['fields']['field_member_name']['id'] = 'field_member_name';
  $handler->display->display_options['fields']['field_member_name']['table'] = 'field_data_field_member_name';
  $handler->display->display_options['fields']['field_member_name']['field'] = 'field_member_name';
  $handler->display->display_options['fields']['field_member_name']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_member_name']['label'] = 'Chair';
  $handler->display->display_options['fields']['field_member_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_member_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_member_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_member_name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_member_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_member_name']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_member_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_member_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_member_name']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_member_name']['settings'] = array(
    'name' => 'member_name',
    'display_id' => 'default',
    'add' => 'Add',
  );
  $handler->display->display_options['fields']['field_member_name']['field_api_classes'] = 0;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'user';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 1;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

static $pid; #define pid(profile id) variable
$select = "select entity_id from field_data_field_project_member where field_project_member_target_id = \'$data->nid\'";
$result = db_query($select); #query to get pid
foreach ($result as $record) {
   $first = $middle = $last = $suffix = \'\';
   $select = "select uid from profile where pid = \'$record->entity_id\'";
   $result1 = db_query($select);
   foreach ($result1 as $record1) {
       $user = user_load($record1->uid);
       $entity_id = $user->field_member_name[\'und\'][0][\'value\'];
#  First
       $select = "select field_first_name_value from field_data_field_first_name where entity_id = \'$entity_id\'";
       $result2 = db_query($select);
       foreach ($result2 as $record2) {
           $first = $record2->field_first_name_value;
       }
#  Middle
       $select = "select field_middle_initial_value from field_data_field_middle_initial where entity_id = \'$entity_id\'";
       $result2 = db_query($select);
       foreach ($result2 as $record2) {
           $middle = $record2->field_middle_initial_value;
       }
#  Last
       $select = "select field_last_name_value from field_data_field_last_name where entity_id = \'$entity_id\'";
       $result2 = db_query($select);
       foreach ($result2 as $record2) {
           $last = $record2->field_last_name_value;
       }
#  Suffix
       $select = "select field_suffix_value from field_data_field_suffix where entity_id = \'$entity_id\'";
       $result2 = db_query($select);
       foreach ($result2 as $record2) {
           $suffix = $record2->field_suffix_value;
       }
   }
   print "$first $middle $last $suffix<BR>";
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'details';
  $export['details'] = $view;

  $view = new view;
  $view->name = 'location';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Location';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Location';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'location' => 'location',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['value'] = '790';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'location';

  /* Display: Entity Reference View Widget */
  $handler = $view->new_display('entityreference_view_widget', 'Entity Reference View Widget', 'entityreference_view_widget_1');
  $export['location'] = $view;

  $view = new view;
  $view->name = 'map_to_home';
  $view->description = 'Map to Rotarian\'s home';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Map to Home';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Map to Home';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_postal_address' => 'field_postal_address',
    'field_member_name' => 'field_member_name',
    'field_contact_phone' => 'field_contact_phone',
    'nothing' => 'nothing',
    'field_location_map' => 'field_location_map',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_postal_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_member_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_phone' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location_map' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['required'] = 1;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Profile: Home Address */
  $handler->display->display_options['fields']['field_postal_address']['id'] = 'field_postal_address';
  $handler->display->display_options['fields']['field_postal_address']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address']['field'] = 'field_postal_address';
  $handler->display->display_options['fields']['field_postal_address']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_postal_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_postal_address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_postal_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_postal_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_postal_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_postal_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_postal_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_postal_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_postal_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_postal_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_postal_address']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_postal_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_postal_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_postal_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_postal_address']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_postal_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_postal_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_postal_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_postal_address']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_postal_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_postal_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_postal_address']['field_api_classes'] = 0;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['mail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['mail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = 1;
  /* Field: Field: Member Name */
  $handler->display->display_options['fields']['field_member_name']['id'] = 'field_member_name';
  $handler->display->display_options['fields']['field_member_name']['table'] = 'field_data_field_member_name';
  $handler->display->display_options['fields']['field_member_name']['field'] = 'field_member_name';
  $handler->display->display_options['fields']['field_member_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_member_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_member_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_member_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_member_name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_member_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_member_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_member_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_member_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_member_name']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_member_name']['settings'] = array(
    'name' => 'member_name',
    'display_id' => 'default',
    'add' => 'Add',
  );
  $handler->display->display_options['fields']['field_member_name']['field_api_classes'] = 0;
  /* Field: Field: Contact Info */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_contact_phone']['label'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_contact_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_contact_phone']['settings'] = array(
    'name' => 'phone_numbers',
    'display_id' => 'default',
    'add' => 'Add',
  );
  $handler->display->display_options['fields']['field_contact_phone']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_contact_phone']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Contact Information';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_member_name] 
[field_postal_address] 
<HR>
[mail]
[field_contact_phone]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Field: Profile: Home Map */
  $handler->display->display_options['fields']['field_location_map']['id'] = 'field_location_map';
  $handler->display->display_options['fields']['field_location_map']['table'] = 'field_data_field_location_map';
  $handler->display->display_options['fields']['field_location_map']['field'] = 'field_location_map';
  $handler->display->display_options['fields']['field_location_map']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_location_map']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_location_map']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_location_map']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_location_map']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_location_map']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_location_map']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_location_map']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_location_map']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_location_map']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_location_map']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_location_map']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_location_map']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_location_map']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_location_map']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_location_map']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_location_map']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_location_map']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location_map']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_location_map']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_location_map']['type'] = 'geofield_map_map';
  $handler->display->display_options['fields']['field_location_map']['settings'] = array(
    'geofield_map_width' => '400px',
    'geofield_map_height' => '300px',
    'geofield_map_zoom' => '15',
    'geofield_map_controltype' => 'default',
    'geofield_map_mtc' => 'standard',
    'geofield_map_pancontrol' => 1,
    'geofield_map_maptype' => 'map',
    'geofield_map_baselayers_map' => 1,
    'geofield_map_baselayers_satellite' => 1,
    'geofield_map_baselayers_hybrid' => 1,
    'geofield_map_baselayers_physical' => 0,
    'geofield_map_scale' => 0,
    'geofield_map_overview' => 0,
    'geofield_map_overview_opened' => 0,
    'geofield_map_scrollwheel' => 0,
    'geofield_map_draggable' => 0,
    'geofield_map_streetview_show' => 0,
  );
  $handler->display->display_options['fields']['field_location_map']['field_api_classes'] = 0;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'map-to-home';
  $export['map_to_home'] = $view;

  $view = new view;
  $view->name = 'map_to_project';
  $view->description = 'Display Project or Committee details';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Map to Project';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Project Map';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_project_chair_profile2']['id'] = 'reverse_field_project_chair_profile2';
  $handler->display->display_options['relationships']['reverse_field_project_chair_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_project_chair_profile2']['field'] = 'reverse_field_project_chair_profile2';
  $handler->display->display_options['relationships']['reverse_field_project_chair_profile2']['required'] = 0;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['relationship'] = 'reverse_field_project_chair_profile2';
  $handler->display->display_options['relationships']['user']['required'] = 0;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile']['required'] = 0;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Title : [title] ';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Project Type */
  $handler->display->display_options['fields']['field_project_type']['id'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['table'] = 'field_data_field_project_type';
  $handler->display->display_options['fields']['field_project_type']['field'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['label'] = '';
  $handler->display->display_options['fields']['field_project_type']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_project_type']['alter']['text'] = 'Project Type: [field_project_type]';
  $handler->display->display_options['fields']['field_project_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_type']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_project_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_type']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['text'] = 'Website : [field_website] ';
  $handler->display->display_options['fields']['field_website']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_website']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_website']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_website']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['field_api_classes'] = 0;
  /* Field: Content: Project Address */
  $handler->display->display_options['fields']['field_project_address']['id'] = 'field_project_address';
  $handler->display->display_options['fields']['field_project_address']['table'] = 'field_data_field_project_address';
  $handler->display->display_options['fields']['field_project_address']['field'] = 'field_project_address';
  $handler->display->display_options['fields']['field_project_address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_address']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_address']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_address']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_project_address']['type'] = 'addressfield_default';
  $handler->display->display_options['fields']['field_project_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_project_address']['group_column'] = '';
  $handler->display->display_options['fields']['field_project_address']['field_api_classes'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_directions_to_project']['id'] = 'field_directions_to_project';
  $handler->display->display_options['fields']['field_directions_to_project']['table'] = 'field_data_field_directions_to_project';
  $handler->display->display_options['fields']['field_directions_to_project']['field'] = 'field_directions_to_project';
  $handler->display->display_options['fields']['field_directions_to_project']['label'] = 'Driving Directions';
  $handler->display->display_options['fields']['field_directions_to_project']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_directions_to_project']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_directions_to_project']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_directions_to_project']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_directions_to_project']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_directions_to_project']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_directions_to_project']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_directions_to_project']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_directions_to_project']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_directions_to_project']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_directions_to_project']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_directions_to_project']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_directions_to_project']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_directions_to_project']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_directions_to_project']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_directions_to_project']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_directions_to_project']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_directions_to_project']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_directions_to_project']['hide_alter_empty'] = 1;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_project_map']['id'] = 'field_project_map';
  $handler->display->display_options['fields']['field_project_map']['table'] = 'field_data_field_project_map';
  $handler->display->display_options['fields']['field_project_map']['field'] = 'field_project_map';
  $handler->display->display_options['fields']['field_project_map']['label'] = '';
  $handler->display->display_options['fields']['field_project_map']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_map']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_map']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_map']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_map']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_map']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_map']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_map']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_map']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_map']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_project_map']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_map']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_map']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_map']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_map']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_map']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_project_map']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_map']['hide_alter_empty'] = 1;
  /* Field: &quot;Back&quot; to Projects List */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = '"Back" to Projects List';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Return to Projects';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'projects';
  $handler->display->display_options['fields']['nothing_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_1']['hide_alter_empty'] = 0;
  /* Field: &quot;Back&quot; to Project Details */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = '"Back" to Project Details';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Back to Project Details';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'project-details/[nid]';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 1;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 1;
  /* Field: &quot;Back&quot; navigation */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = '"Back" navigation';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '[nothing] | [nothing_1]';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_2']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_2']['hide_alter_empty'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'project-map';
  $export['map_to_project'] = $view;

  $view = new view;
  $view->name = 'map_to_work';
  $view->description = 'Map to Rotarian\'s home';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Map to Work';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Map to Work';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_postal_address' => 'field_postal_address',
    'field_member_name' => 'field_member_name',
    'field_contact_phone' => 'field_contact_phone',
    'nothing' => 'nothing',
    'field_location_map' => 'field_location_map',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_postal_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_member_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_phone' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location_map' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['required'] = 1;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Field: Member Name */
  $handler->display->display_options['fields']['field_member_name']['id'] = 'field_member_name';
  $handler->display->display_options['fields']['field_member_name']['table'] = 'field_data_field_member_name';
  $handler->display->display_options['fields']['field_member_name']['field'] = 'field_member_name';
  $handler->display->display_options['fields']['field_member_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_member_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_member_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_member_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_member_name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_member_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_member_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_member_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_member_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_member_name']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_member_name']['settings'] = array(
    'name' => 'member_name',
    'display_id' => 'default',
    'add' => 'Add',
  );
  $handler->display->display_options['fields']['field_member_name']['field_api_classes'] = 0;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['mail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['mail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = 1;
  /* Field: Profile: Work Address */
  $handler->display->display_options['fields']['field_work_address']['id'] = 'field_work_address';
  $handler->display->display_options['fields']['field_work_address']['table'] = 'field_data_field_work_address';
  $handler->display->display_options['fields']['field_work_address']['field'] = 'field_work_address';
  $handler->display->display_options['fields']['field_work_address']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_work_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_work_address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_work_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_work_address']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_work_address']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_work_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_work_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_work_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_work_address']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_work_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_work_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_work_address']['field_api_classes'] = 0;
  /* Field: Field: Contact Info */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_contact_phone']['label'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_contact_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_contact_phone']['settings'] = array(
    'name' => 'phone_numbers',
    'display_id' => 'default',
    'add' => 'Add',
  );
  $handler->display->display_options['fields']['field_contact_phone']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_contact_phone']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['field_api_classes'] = 0;
  /* Field: Member name, address, contact info */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Member name, address, contact info';
  $handler->display->display_options['fields']['nothing']['label'] = 'Contact Information';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_member_name] 
[field_work_address] 
<HR>
[mail]
[field_contact_phone]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Field: Profile: Work Map */
  $handler->display->display_options['fields']['field_work_map']['id'] = 'field_work_map';
  $handler->display->display_options['fields']['field_work_map']['table'] = 'field_data_field_work_map';
  $handler->display->display_options['fields']['field_work_map']['field'] = 'field_work_map';
  $handler->display->display_options['fields']['field_work_map']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_work_map']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_work_map']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_work_map']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_work_map']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_work_map']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_work_map']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_work_map']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_work_map']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_work_map']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_work_map']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_work_map']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_work_map']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_work_map']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_work_map']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_work_map']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_work_map']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_work_map']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_work_map']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_work_map']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_work_map']['type'] = 'geofield_map_map';
  $handler->display->display_options['fields']['field_work_map']['settings'] = array(
    'geofield_map_width' => '400px',
    'geofield_map_height' => '300px',
    'geofield_map_zoom' => '15',
    'geofield_map_controltype' => 'default',
    'geofield_map_mtc' => 'standard',
    'geofield_map_pancontrol' => 1,
    'geofield_map_maptype' => 'map',
    'geofield_map_baselayers_map' => 1,
    'geofield_map_baselayers_satellite' => 1,
    'geofield_map_baselayers_hybrid' => 1,
    'geofield_map_baselayers_physical' => 0,
    'geofield_map_scale' => 0,
    'geofield_map_overview' => 0,
    'geofield_map_overview_opened' => 0,
    'geofield_map_scrollwheel' => 0,
    'geofield_map_draggable' => 0,
    'geofield_map_streetview_show' => 0,
  );
  $handler->display->display_options['fields']['field_work_map']['field_api_classes'] = 0;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'map-to-work';
  $export['map_to_work'] = $view;

  $view = new view;
  $view->name = 'member_name';
  $view->description = 'Member name (First M Last suffix) for display in views';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Views: View of Member Name';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['item_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['item_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['item_id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['item_id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['item_id']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['item_id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['item_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['item_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['item_id']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['item_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['item_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['item_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['item_id']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['item_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['item_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['item_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['item_id']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  $handler->display->display_options['fields']['item_id']['format_plural'] = 0;
  /* Field: Field collection item: Field path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_path']['hide_alter_empty'] = 0;
  /* Field: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['label'] = '';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['host_entity_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['host_entity_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['host_entity_id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['host_entity_id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['host_entity_id']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['host_entity_id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['host_entity_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['host_entity_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['host_entity_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['host_entity_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['host_entity_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['host_entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['host_entity_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['host_entity_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['host_entity_id']['hide_alter_empty'] = 0;
  /* Field: Field collection item: Host Entity Path */
  $handler->display->display_options['fields']['host_entity_path']['id'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_path']['field'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['label'] = '';
  $handler->display->display_options['fields']['host_entity_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['host_entity_path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['host_entity_path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['host_entity_path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['host_entity_path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['host_entity_path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['host_entity_path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['host_entity_path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['host_entity_path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['host_entity_path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['host_entity_path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['host_entity_path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['host_entity_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['host_entity_path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['host_entity_path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['host_entity_path']['hide_alter_empty'] = 0;
  /* Field: Field collection item: Host Entity Type */
  $handler->display->display_options['fields']['host_entity_type']['id'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_type']['field'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['label'] = '';
  $handler->display->display_options['fields']['host_entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['host_entity_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['host_entity_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['host_entity_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['host_entity_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['host_entity_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['host_entity_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['host_entity_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['host_entity_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['host_entity_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['host_entity_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['host_entity_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['host_entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['host_entity_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['host_entity_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['host_entity_type']['hide_alter_empty'] = 0;
  /* Field: Field collection item: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_first_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_first_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_first_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_first_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_first_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_first_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_first_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_first_name']['field_api_classes'] = 0;
  /* Field: Field collection item: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_last_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_last_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_last_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_last_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_last_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_last_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_last_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_last_name']['field_api_classes'] = 0;
  /* Field: Field collection item: Member Title */
  $handler->display->display_options['fields']['field_member_title']['id'] = 'field_member_title';
  $handler->display->display_options['fields']['field_member_title']['table'] = 'field_data_field_member_title';
  $handler->display->display_options['fields']['field_member_title']['field'] = 'field_member_title';
  $handler->display->display_options['fields']['field_member_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_member_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_member_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_member_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_member_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_member_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_member_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_member_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_member_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_member_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_member_title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_member_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_member_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_member_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_member_title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_member_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_member_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_member_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_member_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_member_title']['field_api_classes'] = 0;
  /* Field: Field collection item: Middle */
  $handler->display->display_options['fields']['field_middle_initial']['id'] = 'field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['table'] = 'field_data_field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['field'] = 'field_middle_initial';
  $handler->display->display_options['fields']['field_middle_initial']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_middle_initial']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_middle_initial']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_middle_initial']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_middle_initial']['field_api_classes'] = 0;
  /* Field: Field collection item: Suffix */
  $handler->display->display_options['fields']['field_suffix']['id'] = 'field_suffix';
  $handler->display->display_options['fields']['field_suffix']['table'] = 'field_data_field_suffix';
  $handler->display->display_options['fields']['field_suffix']['field'] = 'field_suffix';
  $handler->display->display_options['fields']['field_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_suffix']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_suffix']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_suffix']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_suffix']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_suffix']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_suffix']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_suffix']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_suffix']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_suffix']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_suffix']['field_api_classes'] = 0;
  /* Field: Concatenated Name */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Concatenated Name';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '[field_first_name] [field_middle_initial] [field_last_name] [field_suffix] ';
  $handler->display->display_options['fields']['nothing_3']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['path'] = 'user/[user]';
  $handler->display->display_options['fields']['nothing_3']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_3']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_3']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_3']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_3']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_3']['hide_alter_empty'] = 0;
  /* Sort criterion: Field collection item: Field collection item ID */
  $handler->display->display_options['sorts']['item_id']['id'] = 'item_id';
  $handler->display->display_options['sorts']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['sorts']['item_id']['field'] = 'item_id';
  /* Contextual filter: Field collection item: Field collection item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['item_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['item_id']['break_phrase'] = 1;
  $handler->display->display_options['arguments']['item_id']['not'] = 0;
  $export['member_name'] = $view;

  $view = new view;
  $view->name = 'members';
  $view->description = 'Public view of Members';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Members';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Members';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['required'] = 1;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'rotary_information' => 'rotary_information',
  );
  /* Field: User: Retired */
  $handler->display->display_options['fields']['field_retired']['id'] = 'field_retired';
  $handler->display->display_options['fields']['field_retired']['table'] = 'field_data_field_retired';
  $handler->display->display_options['fields']['field_retired']['field'] = 'field_retired';
  $handler->display->display_options['fields']['field_retired']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_retired']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_retired']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_retired']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_retired']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_retired']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_retired']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_retired']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_retired']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_retired']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_retired']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_retired']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_retired']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_retired']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_retired']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_retired']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_retired']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_retired']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_retired']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_retired']['field_api_classes'] = 0;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Retired?';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '         if (isset($data->field_field_retired[0][\'raw\'][\'safe_value\'])) {
            $retired = $data->field_field_retired[0][\'raw\'][\'value\'];
            if ($retired) {
               return " (retired)";
            }
         }';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Profile: Officer */
  $handler->display->display_options['fields']['field_officer']['id'] = 'field_officer';
  $handler->display->display_options['fields']['field_officer']['table'] = 'field_data_field_officer';
  $handler->display->display_options['fields']['field_officer']['field'] = 'field_officer';
  $handler->display->display_options['fields']['field_officer']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_officer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_officer']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_officer']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_officer']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_officer']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_officer']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_officer']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_officer']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_officer']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_officer']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_officer']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_officer']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_officer']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_officer']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_officer']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_officer']['field_api_classes'] = 0;
  /* Field: User: Employer */
  $handler->display->display_options['fields']['field_employer']['id'] = 'field_employer';
  $handler->display->display_options['fields']['field_employer']['table'] = 'field_data_field_employer';
  $handler->display->display_options['fields']['field_employer']['field'] = 'field_employer';
  $handler->display->display_options['fields']['field_employer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_employer']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_employer']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_employer']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_employer']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_employer']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_employer']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_employer']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_employer']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_employer']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_employer']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_employer']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_employer']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_employer']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_employer']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_employer']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_employer']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_employer']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_employer']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_employer']['field_api_classes'] = 0;
  /* Field: Profile: Classification */
  $handler->display->display_options['fields']['field_classification']['id'] = 'field_classification';
  $handler->display->display_options['fields']['field_classification']['table'] = 'field_data_field_classification';
  $handler->display->display_options['fields']['field_classification']['field'] = 'field_classification';
  $handler->display->display_options['fields']['field_classification']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_classification']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_classification']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_classification']['alter']['text'] = '[field_classification]<BR>[field_employer] [php]';
  $handler->display->display_options['fields']['field_classification']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_classification']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_classification']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_classification']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_classification']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_classification']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_classification']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_classification']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_classification']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_classification']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_classification']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_classification']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_classification']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_classification']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_classification']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_classification']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_classification']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_classification']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_classification']['field_api_classes'] = 0;
  /* Field: Field: Member Name */
  $handler->display->display_options['fields']['field_member_name']['id'] = 'field_member_name';
  $handler->display->display_options['fields']['field_member_name']['table'] = 'field_data_field_member_name';
  $handler->display->display_options['fields']['field_member_name']['field'] = 'field_member_name';
  $handler->display->display_options['fields']['field_member_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_member_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_member_name']['alter']['path'] = 'user/[user]';
  $handler->display->display_options['fields']['field_member_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_member_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_member_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_member_name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_member_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_member_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_member_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_member_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_member_name']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_member_name']['settings'] = array(
    'name' => 'member_name',
    'display_id' => 'default',
    'add' => '',
  );
  $handler->display->display_options['fields']['field_member_name']['field_api_classes'] = 0;
  /* Field: Concatenate Member Name + Officer */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Concatenate Member Name + Officer';
  $handler->display->display_options['fields']['nothing']['label'] = 'Rotarian';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_member_name]
[field_officer]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'user/[user]';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Field: Concatenate Classification + Employer */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Concatenate Classification + Employer';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Classification/Employer';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_classification]<BR>[field_employer] [php]';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_1']['hide_alter_empty'] = 0;
  /* Field: Profile: Project Chair */
  $handler->display->display_options['fields']['field_project_chair']['id'] = 'field_project_chair';
  $handler->display->display_options['fields']['field_project_chair']['table'] = 'field_data_field_project_chair';
  $handler->display->display_options['fields']['field_project_chair']['field'] = 'field_project_chair';
  $handler->display->display_options['fields']['field_project_chair']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_project_chair']['label'] = 'Project/Committee Chair';
  $handler->display->display_options['fields']['field_project_chair']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_chair']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_chair']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_chair']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_chair']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_chair']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_chair']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_chair']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_chair']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_chair']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_project_chair']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_chair']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_chair']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_chair']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_chair']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_chair']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_chair']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_chair']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_chair']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_project_chair']['field_api_classes'] = 0;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Profile: Status (field_status) */
  $handler->display->display_options['filters']['field_status_tid']['id'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_tid']['field'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_status_tid']['value'] = array(
    35 => '35',
  );
  $handler->display->display_options['filters']['field_status_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tid']['vocabulary'] = 'rotary_status';
  $handler->display->display_options['filters']['field_status_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'members';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Members';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['members'] = $view;

  $view = new view;
  $view->name = 'phone_numbers';
  $view->description = 'This is the phone number view used by the Roster view. It displays the phone# and location/type in an easy-to-read format.';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Views: View of Phone Numbers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['item_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['item_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['item_id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['item_id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['item_id']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['item_id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['item_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['item_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['item_id']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['item_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['item_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['item_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['item_id']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['item_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['item_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['item_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['item_id']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  $handler->display->display_options['fields']['item_id']['format_plural'] = 0;
  /* Field: Field collection item: Field path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_path']['hide_alter_empty'] = 0;
  /* Field: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['label'] = '';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['host_entity_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['host_entity_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['host_entity_id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['host_entity_id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['host_entity_id']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['host_entity_id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['host_entity_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['host_entity_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['host_entity_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['host_entity_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['host_entity_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['host_entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['host_entity_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['host_entity_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['host_entity_id']['hide_alter_empty'] = 0;
  /* Field: Field collection item: Host Entity Path */
  $handler->display->display_options['fields']['host_entity_path']['id'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_path']['field'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['label'] = '';
  $handler->display->display_options['fields']['host_entity_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['host_entity_path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['host_entity_path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['host_entity_path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['host_entity_path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['host_entity_path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['host_entity_path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['host_entity_path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['host_entity_path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['host_entity_path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['host_entity_path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['host_entity_path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['host_entity_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['host_entity_path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['host_entity_path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['host_entity_path']['hide_alter_empty'] = 0;
  /* Field: Field collection item: Host Entity Type */
  $handler->display->display_options['fields']['host_entity_type']['id'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_type']['field'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['label'] = '';
  $handler->display->display_options['fields']['host_entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['host_entity_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['host_entity_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['host_entity_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['host_entity_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['host_entity_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['host_entity_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['host_entity_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['host_entity_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['host_entity_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['host_entity_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['host_entity_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['host_entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['host_entity_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['host_entity_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['host_entity_type']['hide_alter_empty'] = 0;
  /* Field: Field: Phone Number */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_phone']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_phone']['type'] = 'local_phone_number';
  $handler->display->display_options['fields']['field_phone']['field_api_classes'] = 0;
  /* Field: Field collection item: Location */
  $handler->display->display_options['fields']['field_phone_location']['id'] = 'field_phone_location';
  $handler->display->display_options['fields']['field_phone_location']['table'] = 'field_data_field_phone_location';
  $handler->display->display_options['fields']['field_phone_location']['field'] = 'field_phone_location';
  $handler->display->display_options['fields']['field_phone_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone_location']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone_location']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_phone_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone_location']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_phone_location']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_phone_location']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_phone_location']['field_api_classes'] = 0;
  /* Field: Views display fields (Phone (type-location)) */
  $handler->display->display_options['fields']['field_phone_type']['id'] = 'field_phone_type';
  $handler->display->display_options['fields']['field_phone_type']['table'] = 'field_data_field_phone_type';
  $handler->display->display_options['fields']['field_phone_type']['field'] = 'field_phone_type';
  $handler->display->display_options['fields']['field_phone_type']['ui_name'] = 'Views display fields (Phone (type-location))';
  $handler->display->display_options['fields']['field_phone_type']['label'] = '';
  $handler->display->display_options['fields']['field_phone_type']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_phone_type']['alter']['text'] = '[field_phone] ([field_phone_type] - [field_phone_location])';
  $handler->display->display_options['fields']['field_phone_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_phone_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_phone_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_phone_type']['field_api_classes'] = 0;
  /* Sort criterion: Field collection item: Weight (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
  /* Contextual filter: Field collection item: Field collection item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['item_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['item_id']['break_phrase'] = 1;
  $handler->display->display_options['arguments']['item_id']['not'] = 0;
  $export['phone_numbers'] = $view;

  $view = new view;
  $view->name = 'project_detaiils';
  $view->description = 'Display Project or Committee details';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Project Details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Project/Committee Details';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_project_chair_profile2']['id'] = 'reverse_field_project_chair_profile2';
  $handler->display->display_options['relationships']['reverse_field_project_chair_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_project_chair_profile2']['field'] = 'reverse_field_project_chair_profile2';
  $handler->display->display_options['relationships']['reverse_field_project_chair_profile2']['required'] = 0;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['relationship'] = 'reverse_field_project_chair_profile2';
  $handler->display->display_options['relationships']['user']['required'] = 0;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile']['required'] = 0;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_album_target_id']['id'] = 'field_album_target_id';
  $handler->display->display_options['relationships']['field_album_target_id']['table'] = 'field_data_field_album';
  $handler->display->display_options['relationships']['field_album_target_id']['field'] = 'field_album_target_id';
  $handler->display->display_options['relationships']['field_album_target_id']['required'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Title : [title] ';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Project Type */
  $handler->display->display_options['fields']['field_project_type']['id'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['table'] = 'field_data_field_project_type';
  $handler->display->display_options['fields']['field_project_type']['field'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['label'] = '';
  $handler->display->display_options['fields']['field_project_type']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_project_type']['alter']['text'] = 'Project Type: [field_project_type]';
  $handler->display->display_options['fields']['field_project_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_type']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_project_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_type']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['text'] = 'Website : [field_website] ';
  $handler->display->display_options['fields']['field_website']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_website']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_website']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_website']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['field_api_classes'] = 0;
  /* Field: Field: Phone Number */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = 'Phone Number : [field_phone]';
  $handler->display->display_options['fields']['field_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_phone']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_phone']['type'] = 'local_phone_number';
  $handler->display->display_options['fields']['field_phone']['field_api_classes'] = 0;
  /* Field: Content: Private */
  $handler->display->display_options['fields']['field_private']['id'] = 'field_private';
  $handler->display->display_options['fields']['field_private']['table'] = 'field_data_field_private';
  $handler->display->display_options['fields']['field_private']['field'] = 'field_private';
  $handler->display->display_options['fields']['field_private']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_private']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_private']['alter']['text'] = '( [field_private] )';
  $handler->display->display_options['fields']['field_private']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_private']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_private']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_private']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_private']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_private']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_private']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_private']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_private']['field_api_classes'] = 0;
  /* Field: Content: Purpose */
  $handler->display->display_options['fields']['field_phone_number_purpose']['id'] = 'field_phone_number_purpose';
  $handler->display->display_options['fields']['field_phone_number_purpose']['table'] = 'field_data_field_phone_number_purpose';
  $handler->display->display_options['fields']['field_phone_number_purpose']['field'] = 'field_phone_number_purpose';
  $handler->display->display_options['fields']['field_phone_number_purpose']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_phone_number_purpose']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['field_api_classes'] = 0;
  /* Field: Check Phone# Fields */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['ui_name'] = 'Check Phone# Fields';
  $handler->display->display_options['fields']['php_2']['label'] = '';
  $handler->display->display_options['fields']['php_2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php_2']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php_2']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
if (isset( $data->field_field_phone[0])) {
    print "Phone: " . $data->field_field_phone[0][\'rendered\'][\'#markup\'];
    if (isset($data->field_field_private[0])) {
       print \' (\' . $data->field_field_private[0][\'rendered\'][\'#markup\'] . \')\';
   }
   if (isset($data->field_field_phone_number_purpose[0])) {
       print " : " . $data->field_field_phone_number_purpose[0][\'raw\'][\'safe_value\'];
   }
}
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Field: Member Name */
  $handler->display->display_options['fields']['field_member_name']['id'] = 'field_member_name';
  $handler->display->display_options['fields']['field_member_name']['table'] = 'field_data_field_member_name';
  $handler->display->display_options['fields']['field_member_name']['field'] = 'field_member_name';
  $handler->display->display_options['fields']['field_member_name']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_member_name']['label'] = '';
  $handler->display->display_options['fields']['field_member_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_member_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['text'] = '----------------Project/Committee Chair--------------
 [field_member_name] ';
  $handler->display->display_options['fields']['field_member_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_member_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_member_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_member_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_member_name']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_member_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_member_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_member_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_member_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_member_name']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_member_name']['settings'] = array(
    'name' => 'member_name',
    'display_id' => 'default',
    'add' => '',
  );
  $handler->display->display_options['fields']['field_member_name']['field_api_classes'] = 0;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['mail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['mail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = 1;
  /* Field: Field: Contact Info */
  $handler->display->display_options['fields']['field_contact_phone_1']['id'] = 'field_contact_phone_1';
  $handler->display->display_options['fields']['field_contact_phone_1']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone_1']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone_1']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_contact_phone_1']['label'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_contact_phone_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact_phone_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_contact_phone_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_contact_phone_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_contact_phone_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contact_phone_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_contact_phone_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_contact_phone_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contact_phone_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contact_phone_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contact_phone_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_contact_phone_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contact_phone_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contact_phone_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contact_phone_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_contact_phone_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contact_phone_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_contact_phone_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contact_phone_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_contact_phone_1']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_contact_phone_1']['settings'] = array(
    'name' => 'phone_numbers',
    'display_id' => 'default',
    'add' => 'Add',
  );
  $handler->display->display_options['fields']['field_contact_phone_1']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_contact_phone_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_contact_phone_1']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_contact_phone_1']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_contact_phone_1']['field_api_classes'] = 0;
  /* Field: Project Chair Information */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Project Chair Information';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<table border=1 valign=top><tr><th colspan=3>Project Chair</th></tr>
<tr><td>[field_member_name]</td><td>[mail]</td><td>[field_contact_phone_1]</td></tr>
</table>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'user';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 1;
  /* Field: Project/Committee Member list */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Project/Committee Member list';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['php']['alter']['text'] = '<table><tr><th>Project Members</th></tr>
<tr><td>[php]</td></tr>
</table>';
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 1;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 1;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$name = \'\';

static $pid; #define pid(profile id) variable
$select = "select entity_id from field_data_field_project_member where field_project_member_target_id = \'$data->nid\'";
$result = db_query($select); #query to get pid
foreach ($result as $record) {
   $first = $middle = $last = $suffix = \'\';
   $select = "select uid from profile where pid = \'$record->entity_id\'";
   $result1 = db_query($select);
   foreach ($result1 as $record1) {
       $user = user_load($record1->uid);
       $entity_id = $user->field_member_name[\'und\'][0][\'value\'];
#  First
       $select = "select field_first_name_value from field_data_field_first_name where entity_id = \'$entity_id\'";
       $result2 = db_query($select);
       foreach ($result2 as $record2) {
           $first = $record2->field_first_name_value;
       }
#  Middle
       $select = "select field_middle_initial_value from field_data_field_middle_initial where entity_id = \'$entity_id\'";
       $result2 = db_query($select);
       foreach ($result2 as $record2) {
           $middle = $record2->field_middle_initial_value;
       }
#  Last
       $select = "select field_last_name_value from field_data_field_last_name where entity_id = \'$entity_id\'";
       $result2 = db_query($select);
       foreach ($result2 as $record2) {
           $last = $record2->field_last_name_value;
       }
#  Suffix
       $select = "select field_suffix_value from field_data_field_suffix where entity_id = \'$entity_id\'";
       $result2 = db_query($select);
       foreach ($result2 as $record2) {
           $suffix = $record2->field_suffix_value;
       }
   }
   $name .= "$first $middle $last $suffix\\n";
}
return $name;';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Project Address */
  $handler->display->display_options['fields']['field_project_address_1']['id'] = 'field_project_address_1';
  $handler->display->display_options['fields']['field_project_address_1']['table'] = 'field_data_field_project_address';
  $handler->display->display_options['fields']['field_project_address_1']['field'] = 'field_project_address';
  $handler->display->display_options['fields']['field_project_address_1']['label'] = '';
  $handler->display->display_options['fields']['field_project_address_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_address_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_address_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_address_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_address_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_address_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_address_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_address_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_address_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_address_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_project_address_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_address_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_address_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_address_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_address_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_address_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_address_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_address_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_address_1']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_project_address_1']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_project_address_1']['field_api_classes'] = 0;
  /* Field: Content: Album Cover */
  $handler->display->display_options['fields']['field_album_cover_full']['id'] = 'field_album_cover_full';
  $handler->display->display_options['fields']['field_album_cover_full']['table'] = 'field_data_field_album_cover_full';
  $handler->display->display_options['fields']['field_album_cover_full']['field'] = 'field_album_cover_full';
  $handler->display->display_options['fields']['field_album_cover_full']['relationship'] = 'field_album_target_id';
  $handler->display->display_options['fields']['field_album_cover_full']['label'] = '';
  $handler->display->display_options['fields']['field_album_cover_full']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_album_cover_full']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_album_cover_full']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_album_cover_full']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_album_cover_full']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_album_cover_full']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_album_cover_full']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['relationship'] = 'field_album_target_id';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['body_1']['alter']['text'] = '[body_1] ... Click here: ';
  $handler->display->display_options['fields']['body_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body_1']['element_type'] = '0';
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_1']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body_1']['hide_empty'] = 1;
  $handler->display->display_options['fields']['body_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body_1']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body_1']['field_api_classes'] = 0;
  /* Field: Content: Album */
  $handler->display->display_options['fields']['field_album']['id'] = 'field_album';
  $handler->display->display_options['fields']['field_album']['table'] = 'field_data_field_album';
  $handler->display->display_options['fields']['field_album']['field'] = 'field_album';
  $handler->display->display_options['fields']['field_album']['label'] = 'Click to see Album';
  $handler->display->display_options['fields']['field_album']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_album']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_album']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_album']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_album']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_album']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_album']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_album']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_album']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_album']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_album']['field_api_classes'] = 0;
  /* Field: Album cover + description of album */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Album cover + description of album';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<table><tr><td>[field_album_cover_full]</td><td>[body_1] [field_album]</td></table>';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_2']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_class'] = 'display:inline';
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['nothing_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_2']['hide_alter_empty'] = 0;
  /* Field: Content: Youtube */
  $handler->display->display_options['fields']['field_youtube']['id'] = 'field_youtube';
  $handler->display->display_options['fields']['field_youtube']['table'] = 'field_data_field_youtube';
  $handler->display->display_options['fields']['field_youtube']['field'] = 'field_youtube';
  $handler->display->display_options['fields']['field_youtube']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_youtube']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_youtube']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_youtube']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_youtube']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_youtube']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_youtube']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_youtube']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_youtube']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_youtube']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_youtube']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_youtube']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_youtube']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_youtube']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_youtube']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_youtube']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_youtube']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_youtube']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_youtube']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_youtube']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_youtube']['settings'] = array(
    'file_view_mode' => 'default',
  );
  $handler->display->display_options['fields']['field_youtube']['field_api_classes'] = 0;
  /* Field: ( Return to Projects) Link */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = '( Return to Projects) Link';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Return to Projects';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'projects';
  $handler->display->display_options['fields']['nothing_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_1']['hide_alter_empty'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'project-details';
  $export['project_detaiils'] = $view;

  $view = new view;
  $view->name = 'projects';
  $view->description = 'List of Projects';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Projects List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Projects List';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_project_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_project_type' => 'field_project_type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Content: Project Type (field_project_type) */
  $handler->display->display_options['relationships']['field_project_type_tid']['id'] = 'field_project_type_tid';
  $handler->display->display_options['relationships']['field_project_type_tid']['table'] = 'field_data_field_project_type';
  $handler->display->display_options['relationships']['field_project_type_tid']['field'] = 'field_project_type_tid';
  $handler->display->display_options['relationships']['field_project_type_tid']['required'] = 1;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_project_chair_profile2']['id'] = 'reverse_field_project_chair_profile2';
  $handler->display->display_options['relationships']['reverse_field_project_chair_profile2']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_project_chair_profile2']['field'] = 'reverse_field_project_chair_profile2';
  $handler->display->display_options['relationships']['reverse_field_project_chair_profile2']['required'] = 0;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['relationship'] = 'reverse_field_project_chair_profile2';
  $handler->display->display_options['relationships']['user']['required'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'project-details/[nid]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Project Type */
  $handler->display->display_options['fields']['field_project_type']['id'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['table'] = 'field_data_field_project_type';
  $handler->display->display_options['fields']['field_project_type']['field'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_type']['field_api_classes'] = 0;
  /* Field: Field: Member Name */
  $handler->display->display_options['fields']['field_member_name']['id'] = 'field_member_name';
  $handler->display->display_options['fields']['field_member_name']['table'] = 'field_data_field_member_name';
  $handler->display->display_options['fields']['field_member_name']['field'] = 'field_member_name';
  $handler->display->display_options['fields']['field_member_name']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_member_name']['label'] = 'Chair';
  $handler->display->display_options['fields']['field_member_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_member_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_member_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_member_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_member_name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_member_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_member_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_member_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_member_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_member_name']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_member_name']['settings'] = array(
    'name' => 'member_name',
    'display_id' => 'default',
    'add' => 'Add',
  );
  $handler->display->display_options['fields']['field_member_name']['field_api_classes'] = 0;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['mail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['mail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = 1;
  /* Field: Committee/Project Chair name &amp; email */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Committee/Project Chair name & email';
  $handler->display->display_options['fields']['nothing']['label'] = 'Chair';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_member_name]
[mail]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  /* Filter criterion: Content: Project Type (field_project_type) */
  $handler->display->display_options['filters']['field_project_type_tid']['id'] = 'field_project_type_tid';
  $handler->display->display_options['filters']['field_project_type_tid']['table'] = 'field_data_field_project_type';
  $handler->display->display_options['filters']['field_project_type_tid']['field'] = 'field_project_type_tid';
  $handler->display->display_options['filters']['field_project_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_type_tid']['expose']['operator_id'] = 'field_project_type_tid_op';
  $handler->display->display_options['filters']['field_project_type_tid']['expose']['label'] = 'Project Type';
  $handler->display->display_options['filters']['field_project_type_tid']['expose']['operator'] = 'field_project_type_tid_op';
  $handler->display->display_options['filters']['field_project_type_tid']['expose']['identifier'] = 'field_project_type_tid';
  $handler->display->display_options['filters']['field_project_type_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_project_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_project_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_project_type_tid']['vocabulary'] = 'project_type';
  $handler->display->display_options['filters']['field_project_type_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_project_type_tid']['error_message'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'projects';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Projects';
  $handler->display->display_options['menu']['description'] = 'Projects and Committees';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['projects'] = $view;

  $view = new view;
  $view->name = 'roster';
  $view->description = 'Roster of Members';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Roster';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Roster';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'pid' => 'pid',
    'field_contact_phone' => 'field_contact_phone',
    'field_member_name' => 'field_member_name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'pid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_phone' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_member_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['required'] = 0;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'user';
  $handler->display->display_options['relationships']['profile']['required'] = 1;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['pid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['pid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['pid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['pid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['pid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['pid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['pid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['pid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['pid']['format_plural'] = 0;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'user';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 1;
  /* Field: Map link to Work */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['ui_name'] = 'Map link to Work';
  $handler->display->display_options['fields']['nothing_4']['label'] = 'Map Link to Work';
  $handler->display->display_options['fields']['nothing_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = 'MAP';
  $handler->display->display_options['fields']['nothing_4']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing_4']['alter']['path'] = 'map-to-work/[uid]';
  $handler->display->display_options['fields']['nothing_4']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_4']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_4']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_4']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_4']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_4']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_4']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_4']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing_4']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_4']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_4']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing_4']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_4']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_4']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_4']['hide_alter_empty'] = 0;
  /* Field: Map link to Home */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Map link to Home';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'Map';
  $handler->display->display_options['fields']['nothing_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'MAP';
  $handler->display->display_options['fields']['nothing_3']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing_3']['alter']['path'] = 'map-to-home/[uid]';
  $handler->display->display_options['fields']['nothing_3']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_3']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_3']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_3']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_3']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_3']['hide_alter_empty'] = 0;
  /* Field: Field: Contact Info */
  $handler->display->display_options['fields']['field_contact_phone']['id'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['table'] = 'field_data_field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['field'] = 'field_contact_phone';
  $handler->display->display_options['fields']['field_contact_phone']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_contact_phone']['label'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_contact_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_contact_phone']['settings'] = array(
    'name' => 'phone_numbers',
    'display_id' => 'default',
    'add' => 'Add',
  );
  $handler->display->display_options['fields']['field_contact_phone']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_contact_phone']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_contact_phone']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_contact_phone']['field_api_classes'] = 0;
  /* Field: Field: Member Name */
  $handler->display->display_options['fields']['field_member_name']['id'] = 'field_member_name';
  $handler->display->display_options['fields']['field_member_name']['table'] = 'field_data_field_member_name';
  $handler->display->display_options['fields']['field_member_name']['field'] = 'field_member_name';
  $handler->display->display_options['fields']['field_member_name']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_member_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_member_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_member_name']['alter']['path'] = '[uid]';
  $handler->display->display_options['fields']['field_member_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_member_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_member_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_member_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_member_name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_member_name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_member_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_member_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_member_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_member_name']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_member_name']['settings'] = array(
    'name' => 'member_name',
    'display_id' => 'default',
    'add' => 'Add',
  );
  $handler->display->display_options['fields']['field_member_name']['field_api_classes'] = 0;
  /* Field: Profile: Classification */
  $handler->display->display_options['fields']['field_classification']['id'] = 'field_classification';
  $handler->display->display_options['fields']['field_classification']['table'] = 'field_data_field_classification';
  $handler->display->display_options['fields']['field_classification']['field'] = 'field_classification';
  $handler->display->display_options['fields']['field_classification']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_classification']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_classification']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_classification']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_classification']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_classification']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_classification']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_classification']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_classification']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_classification']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_classification']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_classification']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_classification']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_classification']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_classification']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_classification']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_classification']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_classification']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_classification']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_classification']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_classification']['field_api_classes'] = 0;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['mail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['mail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = 1;
  /* Field: User: Employer */
  $handler->display->display_options['fields']['field_employer']['id'] = 'field_employer';
  $handler->display->display_options['fields']['field_employer']['table'] = 'field_data_field_employer';
  $handler->display->display_options['fields']['field_employer']['field'] = 'field_employer';
  $handler->display->display_options['fields']['field_employer']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_employer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_employer']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_employer']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_employer']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_employer']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_employer']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_employer']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_employer']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_employer']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_employer']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_employer']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_employer']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_employer']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_employer']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_employer']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_employer']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_employer']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_employer']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_employer']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_employer']['field_api_classes'] = 0;
  /* Field: Concat Name, Classification, Contact Info */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Concat Name, Classification, Contact Info';
  $handler->display->display_options['fields']['nothing']['label'] = 'Rotarian';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_member_name]
[field_classification]<BR>
[mail]
[field_contact_phone]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Field: Profile: Home Address */
  $handler->display->display_options['fields']['field_postal_address']['id'] = 'field_postal_address';
  $handler->display->display_options['fields']['field_postal_address']['table'] = 'field_data_field_postal_address';
  $handler->display->display_options['fields']['field_postal_address']['field'] = 'field_postal_address';
  $handler->display->display_options['fields']['field_postal_address']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_postal_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_postal_address']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_postal_address']['alter']['text'] = '(Home) [nothing_3] 
[field_postal_address] ';
  $handler->display->display_options['fields']['field_postal_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_postal_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_postal_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_postal_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_postal_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_postal_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_postal_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_postal_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_postal_address']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_postal_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_postal_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_postal_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_postal_address']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_postal_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_postal_address']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_postal_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_postal_address']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_postal_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_postal_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_postal_address']['field_api_classes'] = 0;
  /* Field: Profile: Work Address */
  $handler->display->display_options['fields']['field_work_address']['id'] = 'field_work_address';
  $handler->display->display_options['fields']['field_work_address']['table'] = 'field_data_field_work_address';
  $handler->display->display_options['fields']['field_work_address']['field'] = 'field_work_address';
  $handler->display->display_options['fields']['field_work_address']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_work_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_work_address']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_work_address']['alter']['text'] = '(Work) [nothing_4]<BR>
[field_employer]
[field_work_address]';
  $handler->display->display_options['fields']['field_work_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_work_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_work_address']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_work_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_work_address']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_work_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_work_address']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_work_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_work_address']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_work_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_work_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_work_address']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Address(es)';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_postal_address]<BR>
[field_work_address]';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_1']['hide_alter_empty'] = 0;
  /* Field: Profile: Project Chair */
  $handler->display->display_options['fields']['field_project_chair']['id'] = 'field_project_chair';
  $handler->display->display_options['fields']['field_project_chair']['table'] = 'field_data_field_project_chair';
  $handler->display->display_options['fields']['field_project_chair']['field'] = 'field_project_chair';
  $handler->display->display_options['fields']['field_project_chair']['label'] = 'Project/Committee Chair';
  $handler->display->display_options['fields']['field_project_chair']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_chair']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_project_chair']['alter']['text'] = '(Chair)
[field_project_chair] ';
  $handler->display->display_options['fields']['field_project_chair']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_chair']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_chair']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_chair']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_chair']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_chair']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_chair']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_chair']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_chair']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_project_chair']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_chair']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_chair']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_chair']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_chair']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_chair']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_project_chair']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_chair']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_chair']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_project_chair']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_project_chair']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_project_chair']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_project_chair']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_project_chair']['field_api_classes'] = 0;
  /* Field: Profile: Project Member */
  $handler->display->display_options['fields']['field_project_member']['id'] = 'field_project_member';
  $handler->display->display_options['fields']['field_project_member']['table'] = 'field_data_field_project_member';
  $handler->display->display_options['fields']['field_project_member']['field'] = 'field_project_member';
  $handler->display->display_options['fields']['field_project_member']['label'] = 'Project/Committee Member';
  $handler->display->display_options['fields']['field_project_member']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_member']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_member']['alter']['text'] = '[field_project_member] ';
  $handler->display->display_options['fields']['field_project_member']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_member']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_member']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_member']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_member']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_member']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_member']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_member']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_member']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_project_member']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_member']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_member']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_member']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_project_member']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_project_member']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_project_member']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_member']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_member']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_project_member']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_project_member']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_project_member']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_project_member']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_project_member']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_project_member']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Projects/Committees';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '[field_project_chair]
[field_project_member]';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_2']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_2']['hide_alter_empty'] = 0;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'rotary_information' => 'rotary_information',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'roster';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Roster';
  $handler->display->display_options['menu']['description'] = 'Membership Roster';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['roster'] = $view;

  return $export;
}
