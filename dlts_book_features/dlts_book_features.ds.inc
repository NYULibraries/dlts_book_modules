<?php
/**
 * @file
 * dlts_book_features.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function dlts_book_features_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|dlts_book|metadata';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'dlts_book';
  $ds_fieldsetting->view_mode = 'metadata';
  $ds_fieldsetting->settings = array(
    'series_for_this_book' => array(
      'weight' => '7',
      'label' => 'above',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|dlts_book|metadata'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|dlts_map|metadata';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'dlts_map';
  $ds_fieldsetting->view_mode = 'metadata';
  $ds_fieldsetting->settings = array(
    'field_notes_field' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Notes',
        ),
      ),
    ),
  );
  $export['node|dlts_map|metadata'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function dlts_book_features_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'multivolume_by_identifier_select';
  $ds_field->label = 'multivolume by identifier select';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|ff662681e3c55e01c76472b14059f973',
    'block_render' => '3',
  );
  $export['multivolume_by_identifier_select'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'multivolume_select';
  $ds_field->label = 'Multivolume select';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|65adcdd84849d7419640ca9bef8a6b82',
    'block_render' => '3',
  );
  $export['multivolume_select'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'series_for_this_book';
  $ds_field->label = 'Series';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '*|*';
  $ds_field->properties = array(
    'block' => 'views|series_for_a_book-block',
    'block_render' => '3',
  );
  $export['series_for_this_book'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function dlts_book_features_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|dlts_book|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'dlts_book';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'language',
        2 => 'field_identifier',
        3 => 'field_collection',
        4 => 'field_partner',
        5 => 'field_isbn',
        6 => 'field_pdf_file',
        7 => 'field_handle',
        8 => 'field_rights',
        9 => 'field_representative_image',
        10 => 'field_ocr_text',
        11 => 'path',
        12 => 'group_essence',
        13 => 'group_descriptive_metadata',
        14 => 'group_structural_metadata',
        15 => 'group_technical_metadata',
        16 => 'field_title',
        17 => 'field_subtitle',
        18 => 'field_description',
        19 => 'field_sequence_count',
        20 => 'field_page_count',
        21 => 'field_dimensions',
        22 => 'field_author',
        23 => 'field_creator',
        24 => 'field_editor',
        25 => 'field_contributor',
        26 => 'field_publisher',
        27 => 'field_publication_date',
        28 => 'field_publication_date_text',
        29 => 'field_scan_date',
        30 => 'field_publication_location',
        31 => 'field_scanning_notes',
        32 => 'field_subject',
        33 => 'field_geographic_subject',
        34 => 'field_geographic_coordinates',
        35 => 'field_topic',
        36 => 'field_language_code',
        37 => 'field_language',
        38 => 'field_volume',
        39 => 'field_number',
        40 => 'field_other_version',
        41 => 'field_call_number',
        42 => 'field_binding_orientation',
        43 => 'field_read_order',
        44 => 'field_scan_order',
        45 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'language' => 'ds_content',
      'field_identifier' => 'ds_content',
      'field_collection' => 'ds_content',
      'field_partner' => 'ds_content',
      'field_isbn' => 'ds_content',
      'field_pdf_file' => 'ds_content',
      'field_handle' => 'ds_content',
      'field_rights' => 'ds_content',
      'field_representative_image' => 'ds_content',
      'field_ocr_text' => 'ds_content',
      'path' => 'ds_content',
      'group_essence' => 'ds_content',
      'group_descriptive_metadata' => 'ds_content',
      'group_structural_metadata' => 'ds_content',
      'group_technical_metadata' => 'ds_content',
      'field_title' => 'ds_content',
      'field_subtitle' => 'ds_content',
      'field_description' => 'ds_content',
      'field_sequence_count' => 'ds_content',
      'field_page_count' => 'ds_content',
      'field_dimensions' => 'ds_content',
      'field_author' => 'ds_content',
      'field_creator' => 'ds_content',
      'field_editor' => 'ds_content',
      'field_contributor' => 'ds_content',
      'field_publisher' => 'ds_content',
      'field_publication_date' => 'ds_content',
      'field_publication_date_text' => 'ds_content',
      'field_scan_date' => 'ds_content',
      'field_publication_location' => 'ds_content',
      'field_scanning_notes' => 'ds_content',
      'field_subject' => 'ds_content',
      'field_geographic_subject' => 'ds_content',
      'field_geographic_coordinates' => 'ds_content',
      'field_topic' => 'ds_content',
      'field_language_code' => 'ds_content',
      'field_language' => 'ds_content',
      'field_volume' => 'ds_content',
      'field_number' => 'ds_content',
      'field_other_version' => 'ds_content',
      'field_call_number' => 'ds_content',
      'field_binding_orientation' => 'ds_content',
      'field_read_order' => 'ds_content',
      'field_scan_order' => 'ds_content',
      '_add_existing_field' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|dlts_book|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|dlts_book|metadata';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'dlts_book';
  $ds_layout->view_mode = 'metadata';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_title',
        1 => 'field_subtitle',
        2 => 'field_author',
        3 => 'field_publication_location',
        4 => 'field_publisher',
        5 => 'field_publication_date_text',
        6 => 'field_subject',
        7 => 'series_for_this_book',
        8 => 'field_language',
        9 => 'field_collection',
        10 => 'field_partner',
        11 => 'field_handle',
        12 => 'field_pdf_file',
        13 => 'field_rights',
      ),
    ),
    'fields' => array(
      'field_title' => 'ds_content',
      'field_subtitle' => 'ds_content',
      'field_author' => 'ds_content',
      'field_publication_location' => 'ds_content',
      'field_publisher' => 'ds_content',
      'field_publication_date_text' => 'ds_content',
      'field_subject' => 'ds_content',
      'series_for_this_book' => 'ds_content',
      'field_language' => 'ds_content',
      'field_collection' => 'ds_content',
      'field_partner' => 'ds_content',
      'field_handle' => 'ds_content',
      'field_pdf_file' => 'ds_content',
      'field_rights' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|dlts_book|metadata'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|dlts_map|metadata';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'dlts_map';
  $ds_layout->view_mode = 'metadata';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_title',
        1 => 'field_subtitle',
        2 => 'field_author',
        3 => 'field_publication_location',
        4 => 'field_publisher',
        5 => 'field_publication_date_text',
        6 => 'field_subject',
        7 => 'field_physical_description',
        8 => 'field_notes_field',
        9 => 'field_call_number',
        10 => 'field_collection',
        11 => 'field_partner',
        12 => 'field_handle',
        13 => 'field_pdf_file',
        14 => 'field_rights',
        15 => 'field_geographic_subject',
        16 => 'field_geographic_coordinates',
        17 => 'field_dimensions',
        18 => 'field_description',
      ),
    ),
    'fields' => array(
      'field_title' => 'ds_content',
      'field_subtitle' => 'ds_content',
      'field_author' => 'ds_content',
      'field_publication_location' => 'ds_content',
      'field_publisher' => 'ds_content',
      'field_publication_date_text' => 'ds_content',
      'field_subject' => 'ds_content',
      'field_physical_description' => 'ds_content',
      'field_notes_field' => 'ds_content',
      'field_call_number' => 'ds_content',
      'field_collection' => 'ds_content',
      'field_partner' => 'ds_content',
      'field_handle' => 'ds_content',
      'field_pdf_file' => 'ds_content',
      'field_rights' => 'ds_content',
      'field_geographic_subject' => 'ds_content',
      'field_geographic_coordinates' => 'ds_content',
      'field_dimensions' => 'ds_content',
      'field_description' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|dlts_map|metadata'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|dlts_multivol_book|metadata';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'dlts_multivol_book';
  $ds_layout->view_mode = 'metadata';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(),
    'fields' => array(),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|dlts_multivol_book|metadata'] = $ds_layout;

  return $export;
}
