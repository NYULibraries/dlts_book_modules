<?php
/**
 * @file
 * dlts_book_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dlts_book_features_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "apachesolr" && $api == "apachesolr_environments") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "apachesolr_search" && $api == "apachesolr_search_defaults") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dlts_book_features_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function dlts_book_features_image_default_styles() {
  $styles = array();

  // Exported image style: 220wide.
  $styles['220wide'] = array(
    'name' => '220wide',
    'label' => '220wide',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '220',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: bookviewer_thumb.
  $styles['bookviewer_thumb'] = array(
    'name' => 'bookviewer_thumb',
    'label' => 'Bookviewer Thumb',
    'effects' => array(
      5 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '220',
          'height' => '356',
        ),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function dlts_book_features_node_info() {
  $items = array(
    'dlts_book' => array(
      'name' => t('Book'),
      'base' => 'node_content',
      'description' => t('Anything derived from either a bound set of pages designed to be read (books, pamphlets, etc.), or an electronic format such as ePub or PDF that uses virtual sections or pages, or both. Examples include: AWDL; NYUP; Morgan Claypool'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'dlts_book_page' => array(
      'name' => t('Book Page'),
      'base' => 'node_content',
      'description' => t('Data derived from a single paper or electronic page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'dlts_book_section' => array(
      'name' => t('Book Section'),
      'base' => 'node_content',
      'description' => t('A non-overlapping subset of pages of a book. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('This content type is not intended to carry information about rhetorical sections of a book - preface, etc. It is only intended to hold data derived from \'post-pagination\' sources such as ePub. A book can have pages and sections but only if it is derived from diverse materials that follow both models. A book derived from scanning or from dismemberment of paginated PDFs only will not have sections.

In early NYUP documentation, this was called \'_chapter\' - section is replacing \'_chapter\' because it is more generic. '),
    ),
    'dlts_book_stitched_page' => array(
      'name' => t('Book Stitched Page'),
      'base' => 'node_content',
      'description' => t('Two pages of a DLTS Book stitched together into a single image.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'dlts_collection' => array(
      'name' => t('Collection'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'dlts_map' => array(
      'name' => t('Map'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'dlts_map_page' => array(
      'name' => t('Map Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'dlts_multivol' => array(
      'name' => t('Multi-Volume'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'dlts_multivol_book' => array(
      'name' => t('Multi-Volume Book'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'dlts_partner' => array(
      'name' => t('Partner'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'dlts_series' => array(
      'name' => t('Series'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'dlts_series_book' => array(
      'name' => t('Series Book'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
