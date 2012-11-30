<?php
/**
 * @file
 * rotary_projects_membership.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function rotary_projects_membership_field_default_fields() {
  $fields = array();

  // Exported field: 'field_collection_item-field_contact_phone-field_phone'.
  $fields['field_collection_item-field_contact_phone-field_phone'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_phone',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'cck_phone',
      'settings' => array(
        'profile2_private' => FALSE,
        'size' => '15',
      ),
      'translatable' => '0',
      'type' => 'phone_number',
    ),
    'field_instance' => array(
      'bundle' => 'field_contact_phone',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'cck_phone',
          'settings' => array(),
          'type' => 'local_phone_number',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_phone',
      'label' => 'Phone Number',
      'required' => 0,
      'settings' => array(
        'all_country_codes' => 0,
        'country_code_position' => 'before',
        'country_codes' => array(
          'country_selection' => array(
            'ad' => 0,
            'ae' => 0,
            'af' => 0,
            'ag' => 0,
            'ai' => 0,
            'al' => 0,
            'am' => 0,
            'an' => 0,
            'ao' => 0,
            'ar' => 0,
            'as' => 0,
            'at' => 0,
            'au' => 0,
            'aw' => 0,
            'az' => 0,
            'ba' => 0,
            'bb' => 0,
            'bd' => 0,
            'be' => 0,
            'bf' => 0,
            'bg' => 0,
            'bh' => 0,
            'bi' => 0,
            'bj' => 0,
            'bm' => 0,
            'bn' => 0,
            'bo' => 0,
            'br' => 0,
            'bs' => 0,
            'bt' => 0,
            'bw' => 0,
            'by' => 0,
            'bz' => 0,
            'ca' => 0,
            'cc' => 0,
            'cd' => 0,
            'cf' => 0,
            'cg' => 0,
            'ch' => 0,
            'ci' => 0,
            'ck' => 0,
            'cl' => 0,
            'cm' => 0,
            'cn' => 0,
            'co' => 0,
            'cr' => 0,
            'cu' => 0,
            'cv' => 0,
            'cx' => 0,
            'cy' => 0,
            'cz' => 0,
            'de' => 0,
            'dj' => 0,
            'dk' => 0,
            'dm' => 0,
            'do' => 0,
            'dz' => 0,
            'ec' => 0,
            'ee' => 0,
            'eg' => 0,
            'er' => 0,
            'es' => 0,
            'et' => 0,
            'fi' => 0,
            'fj' => 0,
            'fk' => 0,
            'fm' => 0,
            'fo' => 0,
            'fr' => 0,
            'ga' => 0,
            'gb' => 0,
            'gd' => 0,
            'ge' => 0,
            'gf' => 0,
            'gh' => 0,
            'gi' => 0,
            'gl' => 0,
            'gm' => 0,
            'gn' => 0,
            'gp' => 0,
            'gq' => 0,
            'gr' => 0,
            'gt' => 0,
            'gu' => 0,
            'gw' => 0,
            'gy' => 0,
            'hk' => 0,
            'hn' => 0,
            'hr' => 0,
            'ht' => 0,
            'hu' => 0,
            'id' => 0,
            'ie' => 0,
            'il' => 0,
            'in' => 0,
            'io' => 0,
            'iq' => 0,
            'ir' => 0,
            'is' => 0,
            'it' => 0,
            'jm' => 0,
            'jo' => 0,
            'jp' => 0,
            'ke' => 0,
            'kg' => 0,
            'kh' => 0,
            'ki' => 0,
            'km' => 0,
            'kn' => 0,
            'kp' => 0,
            'kr' => 0,
            'kw' => 0,
            'ky' => 0,
            'kz' => 0,
            'la' => 0,
            'lb' => 0,
            'lc' => 0,
            'li' => 0,
            'lk' => 0,
            'lr' => 0,
            'ls' => 0,
            'lt' => 0,
            'lu' => 0,
            'lv' => 0,
            'ly' => 0,
            'ma' => 0,
            'mc' => 0,
            'md' => 0,
            'me' => 0,
            'mg' => 0,
            'mh' => 0,
            'mk' => 0,
            'ml' => 0,
            'mm' => 0,
            'mn' => 0,
            'mo' => 0,
            'mp' => 0,
            'mq' => 0,
            'mr' => 0,
            'ms' => 0,
            'mt' => 0,
            'mu' => 0,
            'mv' => 0,
            'mw' => 0,
            'mx' => 0,
            'my' => 0,
            'mz' => 0,
            'na' => 0,
            'nc' => 0,
            'ne' => 0,
            'nf' => 0,
            'ng' => 0,
            'ni' => 0,
            'nl' => 0,
            'no' => 0,
            'np' => 0,
            'nr' => 0,
            'nu' => 0,
            'nz' => 0,
            'om' => 0,
            'pa' => 0,
            'pe' => 0,
            'pf' => 0,
            'pg' => 0,
            'ph' => 0,
            'pk' => 0,
            'pl' => 0,
            'pm' => 0,
            'pr' => 0,
            'ps' => 0,
            'pt' => 0,
            'pw' => 0,
            'py' => 0,
            'qa' => 0,
            'ro' => 0,
            'rs' => 0,
            'ru' => 0,
            'rw' => 0,
            'sa' => 0,
            'sb' => 0,
            'sc' => 0,
            'sd' => 0,
            'se' => 0,
            'sg' => 0,
            'sh' => 0,
            'si' => 0,
            'sk' => 0,
            'sl' => 0,
            'sm' => 0,
            'sn' => 0,
            'so' => 0,
            'sr' => 0,
            'ss' => 0,
            'st' => 0,
            'sv' => 0,
            'sy' => 0,
            'sz' => 0,
            'tc' => 0,
            'td' => 0,
            'tg' => 0,
            'th' => 0,
            'tj' => 0,
            'tk' => 0,
            'tm' => 0,
            'tn' => 0,
            'to' => 0,
            'tp' => 0,
            'tr' => 0,
            'tt' => 0,
            'tv' => 0,
            'tw' => 0,
            'tz' => 0,
            'ua' => 0,
            'ug' => 0,
            'us' => 'us',
            'uy' => 0,
            'uz' => 0,
            'va' => 0,
            'vc' => 0,
            've' => 0,
            'vg' => 0,
            'vi' => 0,
            'vn' => 0,
            'vu' => 0,
            'wf' => 0,
            'ws' => 0,
            'ye' => 0,
            'yt' => 0,
            'za' => 0,
            'zm' => 0,
            'zw' => 0,
          ),
          'hide_single_cc' => 1,
        ),
        'default_country' => 'af',
        'enable_country_level_validation' => 0,
        'enable_default_country' => 0,
        'enable_extension' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'cck_phone',
        'settings' => array(
          'size' => 15,
        ),
        'type' => 'phone_number',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_contact_phone-field_phone_location'.
  $fields['field_collection_item-field_contact_phone-field_phone_location'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_phone_location',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'location',
            'parent' => '0',
          ),
        ),
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'field_contact_phone',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_phone_location',
      'label' => 'Location',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_contact_phone-field_phone_type'.
  $fields['field_collection_item-field_contact_phone-field_phone_type'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_phone_type',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'phone_types',
            'parent' => '0',
          ),
        ),
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'field_contact_phone',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_phone_type',
      'label' => 'Phone Type',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_contact_phone-field_weight'.
  $fields['field_collection_item-field_contact_phone-field_weight'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_weight',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'field_contact_phone',
      'default_value' => array(
        0 => array(
          'value' => '0',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => 3,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_weight',
      'label' => 'Weight',
      'required' => 0,
      'settings' => array(
        'max' => '100',
        'min' => '0',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-article-body'.
  $fields['node-article-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'article',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-chapter-body'.
  $fields['node-chapter-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'chapter',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-chapter-field_id_number'.
  $fields['node-chapter-field_id_number'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_id_number',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'chapter',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Affiliation and/or ID#; for example, "Rotary International# 123456"',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 5,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_id_number',
      'label' => 'ID Number',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-chapter-field_mailing_address'.
  $fields['node-chapter-field_mailing_address'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_mailing_address',
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'direction' => 'ASC',
            'field' => 'field_date:value',
            'property' => 'nid',
            'type' => 'none',
          ),
          'target_bundles' => array(
            'location' => 'location',
          ),
        ),
        'handler_submit' => 'Change handler',
        'profile2_private' => FALSE,
        'target_type' => 'node',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'chapter',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'This is the chapter/club\'s mailing address',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => 1,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_mailing_address',
      'label' => 'Mailing Address',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-chapter-field_meeting_frequency'.
  $fields['node-chapter-field_meeting_frequency'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_meeting_frequency',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'chapter',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Describe the frequency of your meetings: Regular, Infrequently, every Wednesday, First and Third Fridays, once a month, etc.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 4,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_meeting_frequency',
      'label' => 'Meeting Frequency',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-chapter-field_meeting_location'.
  $fields['node-chapter-field_meeting_location'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_meeting_location',
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'direction' => 'ASC',
            'field' => 'field_date:value',
            'property' => 'nid',
            'type' => 'none',
          ),
          'target_bundles' => array(
            'location' => 'location',
          ),
        ),
        'handler_submit' => 'Change handler',
        'profile2_private' => FALSE,
        'target_type' => 'node',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'chapter',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'This is the chapter/club\'s regular meeting location',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => 2,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_meeting_location',
      'label' => 'Meeting Location',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'match_operator' => 'CONTAINS',
          'path' => '',
          'size' => '60',
        ),
        'type' => 'options_select',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-chapter-field_phone'.
  $fields['node-chapter-field_phone'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_phone',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'cck_phone',
      'settings' => array(
        'profile2_private' => FALSE,
        'size' => '15',
      ),
      'translatable' => '0',
      'type' => 'phone_number',
    ),
    'field_instance' => array(
      'bundle' => 'chapter',
      'deleted' => '0',
      'description' => 'If you chapter/club has a dedicated phone number, enter it here.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'cck_phone',
          'settings' => array(),
          'type' => 'global_phone_number',
          'weight' => 6,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_phone',
      'label' => 'Phone',
      'required' => 0,
      'settings' => array(
        'all_country_codes' => 0,
        'country_code_position' => 'before',
        'country_codes' => array(
          'country_selection' => array(
            'ad' => 0,
            'ae' => 0,
            'af' => 0,
            'ag' => 0,
            'ai' => 0,
            'al' => 0,
            'am' => 0,
            'an' => 0,
            'ao' => 0,
            'ar' => 0,
            'as' => 0,
            'at' => 0,
            'au' => 0,
            'aw' => 0,
            'az' => 0,
            'ba' => 0,
            'bb' => 0,
            'bd' => 0,
            'be' => 0,
            'bf' => 0,
            'bg' => 0,
            'bh' => 0,
            'bi' => 0,
            'bj' => 0,
            'bm' => 0,
            'bn' => 0,
            'bo' => 0,
            'br' => 0,
            'bs' => 0,
            'bt' => 0,
            'bw' => 0,
            'by' => 0,
            'bz' => 0,
            'ca' => 0,
            'cc' => 0,
            'cd' => 0,
            'cf' => 0,
            'cg' => 0,
            'ch' => 0,
            'ci' => 0,
            'ck' => 0,
            'cl' => 0,
            'cm' => 0,
            'cn' => 0,
            'co' => 0,
            'cr' => 0,
            'cu' => 0,
            'cv' => 0,
            'cx' => 0,
            'cy' => 0,
            'cz' => 0,
            'de' => 0,
            'dj' => 0,
            'dk' => 0,
            'dm' => 0,
            'do' => 0,
            'dz' => 0,
            'ec' => 0,
            'ee' => 0,
            'eg' => 0,
            'er' => 0,
            'es' => 0,
            'et' => 0,
            'fi' => 0,
            'fj' => 0,
            'fk' => 0,
            'fm' => 0,
            'fo' => 0,
            'fr' => 0,
            'ga' => 0,
            'gb' => 0,
            'gd' => 0,
            'ge' => 0,
            'gf' => 0,
            'gh' => 0,
            'gi' => 0,
            'gl' => 0,
            'gm' => 0,
            'gn' => 0,
            'gp' => 0,
            'gq' => 0,
            'gr' => 0,
            'gt' => 0,
            'gu' => 0,
            'gw' => 0,
            'gy' => 0,
            'hk' => 0,
            'hn' => 0,
            'hr' => 0,
            'ht' => 0,
            'hu' => 0,
            'id' => 0,
            'ie' => 0,
            'il' => 0,
            'in' => 0,
            'io' => 0,
            'iq' => 0,
            'ir' => 0,
            'is' => 0,
            'it' => 0,
            'jm' => 0,
            'jo' => 0,
            'jp' => 0,
            'ke' => 0,
            'kg' => 0,
            'kh' => 0,
            'ki' => 0,
            'km' => 0,
            'kn' => 0,
            'kp' => 0,
            'kr' => 0,
            'kw' => 0,
            'ky' => 0,
            'kz' => 0,
            'la' => 0,
            'lb' => 0,
            'lc' => 0,
            'li' => 0,
            'lk' => 0,
            'lr' => 0,
            'ls' => 0,
            'lt' => 0,
            'lu' => 0,
            'lv' => 0,
            'ly' => 0,
            'ma' => 0,
            'mc' => 0,
            'md' => 0,
            'me' => 0,
            'mg' => 0,
            'mh' => 0,
            'mk' => 0,
            'ml' => 0,
            'mm' => 0,
            'mn' => 0,
            'mo' => 0,
            'mp' => 0,
            'mq' => 0,
            'mr' => 0,
            'ms' => 0,
            'mt' => 0,
            'mu' => 0,
            'mv' => 0,
            'mw' => 0,
            'mx' => 0,
            'my' => 0,
            'mz' => 0,
            'na' => 0,
            'nc' => 0,
            'ne' => 0,
            'nf' => 0,
            'ng' => 0,
            'ni' => 0,
            'nl' => 0,
            'no' => 0,
            'np' => 0,
            'nr' => 0,
            'nu' => 0,
            'nz' => 0,
            'om' => 0,
            'pa' => 0,
            'pe' => 0,
            'pf' => 0,
            'pg' => 0,
            'ph' => 0,
            'pk' => 0,
            'pl' => 0,
            'pm' => 0,
            'pr' => 0,
            'ps' => 0,
            'pt' => 0,
            'pw' => 0,
            'py' => 0,
            'qa' => 0,
            'ro' => 0,
            'rs' => 0,
            'ru' => 0,
            'rw' => 0,
            'sa' => 0,
            'sb' => 0,
            'sc' => 0,
            'sd' => 0,
            'se' => 0,
            'sg' => 0,
            'sh' => 0,
            'si' => 0,
            'sk' => 0,
            'sl' => 0,
            'sm' => 0,
            'sn' => 0,
            'so' => 0,
            'sr' => 0,
            'ss' => 0,
            'st' => 0,
            'sv' => 0,
            'sy' => 0,
            'sz' => 0,
            'tc' => 0,
            'td' => 0,
            'tg' => 0,
            'th' => 0,
            'tj' => 0,
            'tk' => 0,
            'tm' => 0,
            'tn' => 0,
            'to' => 0,
            'tp' => 0,
            'tr' => 0,
            'tt' => 0,
            'tv' => 0,
            'tw' => 0,
            'tz' => 0,
            'ua' => 0,
            'ug' => 0,
            'us' => 'us',
            'uy' => 0,
            'uz' => 0,
            'va' => 0,
            'vc' => 0,
            've' => 0,
            'vg' => 0,
            'vi' => 0,
            'vn' => 0,
            'vu' => 0,
            'wf' => 0,
            'ws' => 0,
            'ye' => 0,
            'yt' => 0,
            'za' => 0,
            'zm' => 0,
            'zw' => 0,
          ),
          'hide_single_cc' => 1,
        ),
        'default_country' => 'af',
        'enable_country_level_validation' => 1,
        'enable_default_country' => 0,
        'enable_extension' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'cck_phone',
        'settings' => array(
          'size' => 15,
        ),
        'type' => 'phone_number',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-documentation-body'.
  $fields['node-documentation-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'documentation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => -4,
      ),
    ),
  );

  // Exported field: 'node-location-body'.
  $fields['node-location-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'location',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '31',
      ),
    ),
  );

  // Exported field: 'node-location-field_address'.
  $fields['node-location-field_address'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_address',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'addressfield',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'addressfield',
    ),
    'field_instance' => array(
      'bundle' => 'location',
      'default_value' => array(
        0 => array(
          'element_key' => 'node|location|field_address|und|0',
          'thoroughfare' => '',
          'premise' => '',
          'locality' => '',
          'administrative_area' => '',
          'postal_code' => '',
          'country' => 'US',
        ),
      ),
      'deleted' => '0',
      'description' => 'Enter the postal address for this location.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'addressfield',
          'settings' => array(
            'format_handlers' => array(
              0 => 'address',
            ),
            'use_widget_handlers' => 1,
          ),
          'type' => 'addressfield_default',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_address',
      'label' => 'Address',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'addressfield',
        'settings' => array(
          'available_countries' => array(
            'US' => 'US',
          ),
          'format_handlers' => array(
            'address' => 'address',
            'organisation' => 0,
            'name-full' => 0,
            'name-oneline' => 0,
          ),
        ),
        'type' => 'addressfield_standard',
        'weight' => '32',
      ),
    ),
  );

  // Exported field: 'node-location-field_directions'.
  $fields['node-location-field_directions'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_directions',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'location',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Driving directions to this location',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 3,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_directions',
      'label' => 'Directions',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '3',
        ),
        'type' => 'text_textarea',
        'weight' => '34',
      ),
    ),
  );

  // Exported field: 'node-location-field_map'.
  $fields['node-location-field_map'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_map',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'geofield',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'geofield',
    ),
    'field_instance' => array(
      'bundle' => 'location',
      'deleted' => '0',
      'description' => 'Geocoded map for this location',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'geofield_map',
          'settings' => array(
            'geofield_map_baselayers_hybrid' => 1,
            'geofield_map_baselayers_map' => 1,
            'geofield_map_baselayers_physical' => 0,
            'geofield_map_baselayers_satellite' => 1,
            'geofield_map_controltype' => 'default',
            'geofield_map_draggable' => 0,
            'geofield_map_height' => '300px',
            'geofield_map_maptype' => 'map',
            'geofield_map_mtc' => 'standard',
            'geofield_map_overview' => 0,
            'geofield_map_overview_opened' => 0,
            'geofield_map_pancontrol' => 1,
            'geofield_map_scale' => 0,
            'geofield_map_scrollwheel' => 0,
            'geofield_map_streetview_show' => 0,
            'geofield_map_width' => '100%',
            'geofield_map_zoom' => '15',
          ),
          'type' => 'geofield_map_map',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_map',
      'label' => 'Map',
      'required' => 0,
      'settings' => array(
        'local_solr' => array(
          'enabled' => FALSE,
          'lat_field' => 'lat',
          'lng_field' => 'lng',
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'geocoder',
        'settings' => array(
          'delta_handling' => 'default',
          'geocoder_field' => 'field_address',
          'geocoder_handler' => 'google',
          'handler_settings' => array(
            'google' => array(
              'all_results' => 0,
              'geometry_type' => 'point',
              'reject_results' => array(
                'APPROXIMATE' => 0,
                'GEOMETRIC_CENTER' => 0,
                'RANGE_INTERPOLATED' => 0,
                'ROOFTOP' => 0,
              ),
            ),
          ),
        ),
        'type' => 'geocoder',
        'weight' => '33',
      ),
    ),
  );

  // Exported field: 'profile2-main-field_contact_phone'.
  $fields['profile2-main-field_contact_phone'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_contact_phone',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'main',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection_views',
          'settings' => array(
            'add' => 'Add',
            'display_id' => 'default',
            'name' => 'field_collection_view',
          ),
          'type' => 'field_collection_views_view',
          'weight' => '10',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_contact_phone',
      'label' => 'Contact Phone',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '39',
      ),
    ),
  );

  // Exported field: 'profile2-main-field_location_map'.
  $fields['profile2-main-field_location_map'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_location_map',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'geofield',
      'settings' => array(
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'geofield',
    ),
    'field_instance' => array(
      'bundle' => 'main',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'geofield_map',
          'settings' => array(
            'geofield_map_baselayers_hybrid' => 1,
            'geofield_map_baselayers_map' => 1,
            'geofield_map_baselayers_physical' => 0,
            'geofield_map_baselayers_satellite' => 1,
            'geofield_map_controltype' => 'default',
            'geofield_map_draggable' => 0,
            'geofield_map_height' => '300px',
            'geofield_map_maptype' => 'map',
            'geofield_map_mtc' => 'standard',
            'geofield_map_overview' => 0,
            'geofield_map_overview_opened' => 0,
            'geofield_map_pancontrol' => 1,
            'geofield_map_scale' => 0,
            'geofield_map_scrollwheel' => 0,
            'geofield_map_streetview_show' => 0,
            'geofield_map_width' => '100%',
            'geofield_map_zoom' => '14',
          ),
          'type' => 'geofield_map_map',
          'weight' => '13',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_location_map',
      'label' => 'Home Map',
      'required' => 0,
      'settings' => array(
        'local_solr' => array(
          'enabled' => FALSE,
          'lat_field' => 'lat',
          'lng_field' => 'lng',
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'geocoder',
        'settings' => array(
          'delta_handling' => 'default',
          'geocoder_field' => 'field_postal_address',
          'geocoder_handler' => 'google',
          'handler_settings' => array(
            'google' => array(
              'all_results' => 0,
              'geometry_type' => 'point',
              'reject_results' => array(
                'APPROXIMATE' => 0,
                'GEOMETRIC_CENTER' => 0,
                'RANGE_INTERPOLATED' => 0,
                'ROOFTOP' => 0,
              ),
            ),
          ),
        ),
        'type' => 'geocoder',
        'weight' => '48',
      ),
    ),
  );

  // Exported field: 'profile2-main-field_postal_address'.
  $fields['profile2-main-field_postal_address'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_postal_address',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'addressfield',
      'settings' => array(
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'addressfield',
    ),
    'field_instance' => array(
      'bundle' => 'main',
      'default_value' => array(
        0 => array(
          'element_key' => 'profile2|main|field_postal_address|und|0',
          'thoroughfare' => '',
          'premise' => '',
          'locality' => '',
          'administrative_area' => '',
          'postal_code' => '',
          'country' => 'US',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'addressfield',
          'settings' => array(
            'format_handlers' => array(
              0 => 'address',
            ),
            'use_widget_handlers' => 1,
          ),
          'type' => 'addressfield_default',
          'weight' => '12',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_postal_address',
      'label' => 'Home Address',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'addressfield',
        'settings' => array(
          'available_countries' => array(
            'US' => 'US',
          ),
          'format_handlers' => array(
            'address' => 'address',
            'organisation' => 0,
            'name-full' => 0,
            'name-oneline' => 0,
          ),
        ),
        'type' => 'addressfield_standard',
        'weight' => '49',
      ),
    ),
  );

  // Exported field: 'profile2-main-field_work_address'.
  $fields['profile2-main-field_work_address'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_work_address',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'addressfield',
      'settings' => array(
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'addressfield',
    ),
    'field_instance' => array(
      'bundle' => 'main',
      'default_value' => array(
        0 => array(
          'element_key' => 'profile2|main|field_work_address|und|0',
          'thoroughfare' => '',
          'premise' => '',
          'locality' => '',
          'administrative_area' => '',
          'postal_code' => '',
          'country' => 'US',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'addressfield',
          'settings' => array(
            'format_handlers' => array(
              0 => 'address',
            ),
            'use_widget_handlers' => 1,
          ),
          'type' => 'addressfield_default',
          'weight' => '14',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_work_address',
      'label' => 'Work Address',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'addressfield',
        'settings' => array(
          'available_countries' => array(
            'US' => 'US',
          ),
          'format_handlers' => array(
            'address' => 'address',
            'organisation' => 0,
            'name-full' => 0,
            'name-oneline' => 0,
          ),
        ),
        'type' => 'addressfield_standard',
        'weight' => '47',
      ),
    ),
  );

  // Exported field: 'profile2-main-field_work_map'.
  $fields['profile2-main-field_work_map'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_work_map',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'geofield',
      'settings' => array(
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'geofield',
    ),
    'field_instance' => array(
      'bundle' => 'main',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'geofield_map',
          'settings' => array(
            'geofield_map_baselayers_hybrid' => 1,
            'geofield_map_baselayers_map' => 1,
            'geofield_map_baselayers_physical' => 0,
            'geofield_map_baselayers_satellite' => 1,
            'geofield_map_controltype' => 'default',
            'geofield_map_draggable' => 0,
            'geofield_map_height' => '300px',
            'geofield_map_maptype' => 'map',
            'geofield_map_mtc' => 'standard',
            'geofield_map_overview' => 0,
            'geofield_map_overview_opened' => 0,
            'geofield_map_pancontrol' => 1,
            'geofield_map_scale' => 0,
            'geofield_map_scrollwheel' => 0,
            'geofield_map_streetview_show' => 0,
            'geofield_map_width' => '100%',
            'geofield_map_zoom' => '14',
          ),
          'type' => 'geofield_map_map',
          'weight' => '15',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_work_map',
      'label' => 'Work Map',
      'required' => 0,
      'settings' => array(
        'local_solr' => array(
          'enabled' => FALSE,
          'lat_field' => 'lat',
          'lng_field' => 'lng',
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'geocoder',
        'settings' => array(
          'delta_handling' => 'default',
          'geocoder_field' => 'field_work_address',
          'geocoder_handler' => 'google',
          'handler_settings' => array(
            'google' => array(
              'all_results' => 0,
              'geometry_type' => 'point',
              'reject_results' => array(
                'APPROXIMATE' => 0,
                'GEOMETRIC_CENTER' => 0,
                'RANGE_INTERPOLATED' => 0,
                'ROOFTOP' => 0,
              ),
            ),
          ),
        ),
        'type' => 'geocoder',
        'weight' => '46',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-officers-field_primary_officer'.
  $fields['taxonomy_term-officers-field_primary_officer'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_primary_officer',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Yes' => 'Yes',
        ),
        'allowed_values_function' => '',
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'officers',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_primary_officer',
      'label' => 'Primary Officer',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'user-user-field_birthdate'.
  $fields['user-user-field_birthdate'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_birthdate',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'date',
      'settings' => array(
        'cache_count' => '4',
        'cache_enabled' => 0,
        'granularity' => array(
          'day' => 'day',
          'hour' => 0,
          'minute' => 0,
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'profile2_private' => FALSE,
        'repeat' => '0',
        'timezone_db' => '',
        'todate' => '',
        'tz_handling' => 'none',
      ),
      'translatable' => '0',
      'type' => 'datetime',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(),
          'type' => 'date_plain',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_birthdate',
      'label' => 'Birthdate',
      'required' => 0,
      'settings' => array(
        'default_value' => 'now',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => 1,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'display_all_day' => 0,
          'increment' => '15',
          'input_format' => 'm/d/Y - H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'repeat_collapsed' => 0,
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_text',
        'weight' => '42',
      ),
    ),
  );

  // Exported field: 'user-user-field_chapter'.
  $fields['user-user-field_chapter'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_chapter',
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'direction' => 'ASC',
            'field' => 'field_date:value',
            'property' => 'nid',
            'type' => 'none',
          ),
          'target_bundles' => array(
            'chapter' => 'chapter',
          ),
        ),
        'handler_submit' => 'Change handler',
        'profile2_private' => FALSE,
        'target_type' => 'node',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Chapter/Club this member belongs to',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => 10,
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_chapter',
      'label' => 'Chapter/Club',
      'required' => 1,
      'settings' => array(
        'user_register_form' => 1,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '0',
      ),
    ),
  );

  // Exported field: 'user-user-field_classification'.
  $fields['user-user-field_classification'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_classification',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'classification',
            'parent' => '0',
          ),
        ),
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Enter your classification/occupation in this field',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 16,
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_classification',
      'label' => 'Classification',
      'required' => 1,
      'settings' => array(
        'user_register_form' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'user-user-field_deceased'.
  $fields['user-user-field_deceased'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_deceased',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Yes' => 'Yes',
        ),
        'allowed_values_function' => '',
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_deceased',
      'label' => 'Deceased',
      'required' => 0,
      'settings' => array(
        'user_register_form' => 0,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '44',
      ),
    ),
  );

  // Exported field: 'user-user-field_employer'.
  $fields['user-user-field_employer'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_employer',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_employer',
      'label' => 'Employer',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => 1,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '30',
      ),
    ),
  );

  // Exported field: 'user-user-field_first_name'.
  $fields['user-user-field_first_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_first_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '30',
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Member\'s first name',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 11,
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_first_name',
      'label' => 'First Name',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => 1,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '25',
      ),
    ),
  );

  // Exported field: 'user-user-field_gender'.
  $fields['user-user-field_gender'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_gender',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Male' => 'Male',
          'Female' => 'Female',
        ),
        'allowed_values_function' => '',
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_gender',
      'label' => 'Gender',
      'required' => 1,
      'settings' => array(
        'user_register_form' => 1,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '43',
      ),
    ),
  );

  // Exported field: 'user-user-field_job_title'.
  $fields['user-user-field_job_title'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_job_title',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '6',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_job_title',
      'label' => 'Job Title',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => 1,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '31',
      ),
    ),
  );

  // Exported field: 'user-user-field_last_name'.
  $fields['user-user-field_last_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_last_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '50',
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Member\'s last name',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 13,
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_last_name',
      'label' => 'Last Name',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => 1,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '27',
      ),
    ),
  );

  // Exported field: 'user-user-field_member_id'.
  $fields['user-user-field_member_id'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_member_id',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '30',
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Member identification number or code. ',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 18,
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_member_id',
      'label' => 'Member ID#',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => 1,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'user-user-field_member_title'.
  $fields['user-user-field_member_title'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_member_title',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'title',
            'parent' => '0',
          ),
        ),
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Member\'s title',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 14,
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_member_title',
      'label' => 'Title',
      'required' => 0,
      'settings' => array(
        'user_register_form' => 1,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '24',
      ),
    ),
  );

  // Exported field: 'user-user-field_middle_initial'.
  $fields['user-user-field_middle_initial'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_middle_initial',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '1',
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Member\'s middle name',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 12,
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_middle_initial',
      'label' => 'Middle Name',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => 1,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '26',
      ),
    ),
  );

  // Exported field: 'user-user-field_officer'.
  $fields['user-user-field_officer'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_officer',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'officers',
            'parent' => '0',
          ),
        ),
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Optionally select one of more officer position held by this member.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 24,
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_officer',
      'label' => 'Officer',
      'required' => 0,
      'settings' => array(
        'user_register_form' => 1,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'user-user-field_retired'.
  $fields['user-user-field_retired'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_retired',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Yes' => 'Yes',
        ),
        'allowed_values_function' => '',
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '7',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_retired',
      'label' => 'Retired',
      'required' => 0,
      'settings' => array(
        'user_register_form' => 1,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '32',
      ),
    ),
  );

  // Exported field: 'user-user-field_sponsor'.
  $fields['user-user-field_sponsor'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_sponsor',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '60',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 19,
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_sponsor',
      'label' => 'Sponsor',
      'required' => FALSE,
      'settings' => array(
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'user-user-field_spouse_sig_oth'.
  $fields['user-user-field_spouse_sig_oth'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_spouse_sig_oth',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '8',
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_spouse_sig_oth',
      'label' => 'Spouse/Sig Oth',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => 1,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '45',
      ),
    ),
  );

  // Exported field: 'user-user-field_status'.
  $fields['user-user-field_status'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_status',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'member_status',
            'parent' => '0',
          ),
        ),
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Member status. Leave blank *None* if this user is not a member.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 17,
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_status',
      'label' => 'Member Status',
      'required' => 0,
      'settings' => array(
        'user_register_form' => 1,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'user-user-field_suffix'.
  $fields['user-user-field_suffix'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_suffix',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '5',
        'profile2_private' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'user',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Member\'s suffix (e.g. Jr, Sr, III, Esq, etc.)',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 15,
        ),
      ),
      'entity_type' => 'user',
      'field_name' => 'field_suffix',
      'label' => 'Suffix',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => 1,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '28',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Affiliation and/or ID#; for example, "Rotary International# 123456"');
  t('Birthdate');
  t('Body');
  t('Chapter/Club');
  t('Chapter/Club this member belongs to');
  t('Classification');
  t('Contact Phone');
  t('Deceased');
  t('Describe the frequency of your meetings: Regular, Infrequently, every Wednesday, First and Third Fridays, once a month, etc.');
  t('Directions');
  t('Driving directions to this location');
  t('Employer');
  t('Enter the postal address for this location.');
  t('Enter your classification/occupation in this field');
  t('First Name');
  t('Gender');
  t('Geocoded map for this location');
  t('Home Address');
  t('Home Map');
  t('ID Number');
  t('If you chapter/club has a dedicated phone number, enter it here.');
  t('Job Title');
  t('Last Name');
  t('Location');
  t('Mailing Address');
  t('Map');
  t('Meeting Frequency');
  t('Meeting Location');
  t('Member ID#');
  t('Member Status');
  t('Member identification number or code. ');
  t('Member status. Leave blank *None* if this user is not a member.');
  t('Member\'s first name');
  t('Member\'s last name');
  t('Member\'s middle name');
  t('Member\'s suffix (e.g. Jr, Sr, III, Esq, etc.)');
  t('Member\'s title');
  t('Middle Name');
  t('Officer');
  t('Optionally select one of more officer position held by this member.');
  t('Phone');
  t('Phone Number');
  t('Phone Type');
  t('Primary Officer');
  t('Retired');
  t('Sponsor');
  t('Spouse/Sig Oth');
  t('Suffix');
  t('This is the chapter/club\'s mailing address');
  t('This is the chapter/club\'s regular meeting location');
  t('Title');
  t('Weight');
  t('Work Address');
  t('Work Map');

  return $fields;
}
