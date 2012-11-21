<?php
/**
 * @file
 * rotary_projects_membership.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function rotary_projects_membership_content_defaults() {
  $content = array();

  $content['default_chapter'] = (object) array(
    'exported_path' => 'content/default-rotary-club-name',
    'title' => 'Default Rotary Club Name',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'chapter',
    'language' => 'und',
    'created' => '1350966731',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'default_chapter',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Your Rotary Club name and brief description here. This can contain charter date, philosophy, and so on. It isn&#39;t really referenced anywhere at this time.</p>
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Your Rotary Club name and brief description here. This can contain charter date, philosophy, and so on. It isn\'t really referenced anywhere at this time.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_mailing_address' => array(
      'und' => array(
        0 => array(
          'target_id' => '164',
        ),
      ),
    ),
    'field_meeting_location' => array(
      'und' => array(
        0 => array(
          'target_id' => '165',
        ),
      ),
    ),
    'field_meeting_frequency' => array(
      'und' => array(
        0 => array(
          'value' => '--meeting frequency here--',
          'format' => NULL,
          'safe_value' => '--meeting frequency here--',
        ),
      ),
    ),
    'field_id_number' => array(
      'und' => array(
        0 => array(
          'value' => '123123123',
          'format' => NULL,
          'safe_value' => '123123123',
        ),
      ),
    ),
  );

  $content['default_mailinglocation'] = (object) array(
    'exported_path' => 'content/default-mailing-address',
    'title' => 'Default Mailing Address',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'location',
    'language' => 'und',
    'created' => '1350966609',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'default_mailinglocation',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>This node contains your default mailing address.</p>
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>This node contains your default mailing address.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_address' => array(
      'und' => array(
        0 => array(
          'country' => 'US',
          'administrative_area' => 'OR',
          'sub_administrative_area' => NULL,
          'locality' => 'Cottage Grove',
          'dependent_locality' => NULL,
          'postal_code' => '97424',
          'thoroughfare' => 'P O Box 5555',
          'premise' => '',
          'sub_premise' => NULL,
          'organisation_name' => NULL,
          'name_line' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'data' => NULL,
        ),
      ),
    ),
    'field_map' => array(
      'und' => array(
        0 => array(
          'wkt' => 'POINT (-123.0595246 43.797623)',
          'geo_type' => 'point',
          'lat' => '43.7976',
          'lon' => '-123.06',
          'left' => '-123.06',
          'top' => '43.7976',
          'right' => '-123.06',
          'bottom' => '43.7976',
          'srid' => NULL,
          'accuracy' => NULL,
          'source' => NULL,
        ),
      ),
    ),
  );

  $content['default_meetinglocation'] = (object) array(
    'exported_path' => 'content/default-meeting-location',
    'title' => 'Default Meeting Location',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'location',
    'language' => 'und',
    'created' => '1350966689',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'default_meetinglocation',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Enter your default meeting location. Change this description to meeting your requirements.</p>
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Enter your default meeting location. Change this description to meeting your requirements.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_address' => array(
      'und' => array(
        0 => array(
          'country' => 'US',
          'administrative_area' => 'OR',
          'sub_administrative_area' => NULL,
          'locality' => 'Cottage Grove',
          'dependent_locality' => NULL,
          'postal_code' => '97424',
          'thoroughfare' => '123 Main St',
          'premise' => '',
          'sub_premise' => NULL,
          'organisation_name' => NULL,
          'name_line' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'data' => NULL,
        ),
      ),
    ),
    'field_map' => array(
      'und' => array(
        0 => array(
          'wkt' => 'POINT (-123.0526161 43.7972468)',
          'geo_type' => 'point',
          'lat' => '43.7972',
          'lon' => '-123.053',
          'left' => '-123.053',
          'top' => '43.7972',
          'right' => '-123.053',
          'bottom' => '43.7972',
          'srid' => NULL,
          'accuracy' => NULL,
          'source' => NULL,
        ),
      ),
    ),
    'field_directions' => array(
      'und' => array(
        0 => array(
          'value' => 'Drive left, right and ahead until you get there.',
          'format' => NULL,
          'safe_value' => 'Drive left, right and ahead until you get there.',
        ),
      ),
    ),
  );

  $content['doc_gettingstarted'] = (object) array(
    'exported_path' => 'help/documents/getting-started',
    'title' => 'Getting Started',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'documentation',
    'language' => 'und',
    'created' => '1351525921',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'doc_gettingstarted',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>This article documents step-by-step instructions for getting your website up and running. It assmes that you are the &quot;administrator&quot; and have access to the site using the &quot;admin&quot; user (the &quot;super user&quot;) or your user id has been designated with the role &quot;administrator&quot;. The system will install with default taxonomies (categories) and some default nodes (content). You will need to review each category and content record and update them according to your needs.</p>
<p>The &quot;Administrative Menu&quot; is located at the top of your screen. Click on the appropriate menu item to update your system.</p>
<ol>
	<li>
		Taxonomy (categories) : Click &quot;Structure &gt;&gt; Taxonomy&quot; to display a list of categories that need to be reviewed and potentially updated. Not all categories are documented here.
		<ul>
			<li>
				Location: this refers to &quot;phone&quot; location, such as &quot;Home&quot; or &quot;Work&quot;.</li>
			<li>
				Officers: a list of officer titles, and which officers are &quot;Primary&quot;. Primary officers are listed in the &quot;Club Officers&quot; view</li>
			<li>
				PHF: Paul Harris Fellow designations appropriate for your club (Paul Harris Fellow, Sustaining member, etc.)</li>
			<li>
				Phone Types: type of phone, such as &quot;cell&quot;, &quot;fax&quot;, &quot;message&quot; and so on.</li>
			<li>
				Project Type: allows you to categories projects by general type.</li>
			<li>
				Rotary Status: allows you to flag Rotarians with one or more types, such as &quot;Active&quot;, &quot;Charter Member&quot;, &quot;Inactive&quot; and so on.</li>
			<li>
				Title: a formal title for Rotarians, such as &quot;Mr&quot;, &quot;Mrs&quot;, &quot;Sir&quot; and so on.<br />
				&nbsp;</li>
		</ul>
	</li>
	<li>
		Site Information: click &quot;Configuration &gt;&gt; System &gt;&gt; Site Information&quot;<br />
		You will need to change your Site Name, Slogan and email address. This information is displayed in the &quot;heading&quot; of the site and must be accurate.<br />
		&nbsp;</li>
	<li>
		Nodes (content) : click &quot;Content&quot; to display a list of nodes that need to be updated.
		<ul>
			<li>
				Mailing Address</li>
			<li>
				Meeting Location</li>
			<li>
				Chapter<br />
				&nbsp;</li>
		</ul>
	</li>
	<li>
		Add your club members: click &quot;People &gt;&gt; Add user&quot;.&nbsp;<br />
		&nbsp;</li>
	<li>
		Finally, edit THIS document and remove it from your front page: click &quot;Content&quot; and click &quot;edit&quot; on the &quot;Getting Started&quot; documentation. At the bottom of the screen, you&#39;ll see &quot;Publishing options&quot;. Click on this and then UNCHECK &quot;Promoted to front page&quot;.</li>
</ol>
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>This article documents step-by-step instructions for getting your website up and running. It assmes that you are the "administrator" and have access to the site using the "admin" user (the "super user") or your user id has been designated with the role "administrator". The system will install with default taxonomies (categories) and some default nodes (content). You will need to review each category and content record and update them according to your needs.<br />
The "Administrative Menu" is located at the top of your screen. Click on the appropriate menu item to update your system.</p>
<ol><li>
		Taxonomy (categories) : Click "Structure &gt;&gt; Taxonomy" to display a list of categories that need to be reviewed and potentially updated. Not all categories are documented here.
<ul><li>
				Location: this refers to "phone" location, such as "Home" or "Work".</li>
<li>
				Officers: a list of officer titles, and which officers are "Primary". Primary officers are listed in the "Club Officers" view</li>
<li>
				PHF: Paul Harris Fellow designations appropriate for your club (Paul Harris Fellow, Sustaining member, etc.)</li>
<li>
				Phone Types: type of phone, such as "cell", "fax", "message" and so on.</li>
<li>
				Project Type: allows you to categories projects by general type.</li>
<li>
				Rotary Status: allows you to flag Rotarians with one or more types, such as "Active", "Charter Member", "Inactive" and so on.</li>
<li>
				Title: a formal title for Rotarians, such as "Mr", "Mrs", "Sir" and so on.<br />
				 </li>
</ul></li>
<li>
		Site Information: click "Configuration &gt;&gt; System &gt;&gt; Site Information"<br />
		You will need to change your Site Name, Slogan and email address. This information is displayed in the "heading" of the site and must be accurate.<br />
		 </li>
<li>
		Nodes (content) : click "Content" to display a list of nodes that need to be updated.
<ul><li>
				Mailing Address</li>
<li>
				Meeting Location</li>
<li>
				Chapter<br />
				 </li>
</ul></li>
<li>
		Add your club members: click "People &gt;&gt; Add user". <br />
		 </li>
<li>
		Finally, edit THIS document and remove it from your front page: click "Content" and click "edit" on the "Getting Started" documentation. At the bottom of the screen, you\'ll see "Publishing options". Click on this and then UNCHECK "Promoted to front page".</li>
</ol>',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['doc_taxonomy'] = (object) array(
    'exported_path' => 'help/documents/taxonomy-term-maintenance',
    'title' => 'Taxonomy Term Maintenance',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'documentation',
    'language' => 'und',
    'created' => '1340124560',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'doc_taxonomy',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>&quot;Taxonomy&quot; is really just a fancy name for &quot;Category&quot;. This system uses taxonomies to define and categorize various content throughout the system. For example, &quot;event type&quot; defines whether an event is a meeting, a social function or a conference. &quot;Officers&quot; defines all the valid officer titles use throughout the system.</p>
<p>Taxonomies may have additional fields. For example, &quot;Officers&quot; has an extra field called &quot;Primary Officer&quot; (Yes or No). If &quot;Yes&quot;, the title and name of the officer will display in the &quot;Club Officers&quot; view.</p>
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>"Taxonomy" is really just a fancy name for "Category". This system uses taxonomies to define and categorize various content throughout the system. For example, "event type" defines whether an event is a meeting, a social function or a conference. "Officers" defines all the valid officer titles use throughout the system.<br />
Taxonomies may have additional fields. For example, "Officers" has an extra field called "Primary Officer" (Yes or No). If "Yes", the title and name of the officer will display in the "Club Officers" view.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

return $content;
}
