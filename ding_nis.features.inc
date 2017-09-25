<?php
/**
 * @file
 * ding_nis.features.inc
 */

/**
 * Implements hook_field_default_field_bases_alter().
 */
function ding_nis_field_default_field_bases_alter(&$data) {
  if (isset($data['field_ding_event_title_image'])) {
    $data['field_ding_event_title_image']['cardinality'] = -1; /* WAS: 1 */
  }
  if (isset($data['field_ding_page_title_image'])) {
    $data['field_ding_page_title_image']['cardinality'] = -1; /* WAS: 1 */
  }
  if (isset($data['field_ding_news_title_image'])) {
    $data['field_ding_news_title_image']['cardinality'] = -1; /* WAS: 1 */
  }
}

/**
 * Implements hook_image_default_styles().
 */
function ding_nis_image_default_styles() {
  $styles = array();

  // Exported image style: ding_nodes_image_gallery.
  $styles['ding_nodes_image_gallery'] = array(
    'name' => 'ding_nodes_image_gallery',
    'label' => 'Ding Nodes Image Gallery',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 850,
          'height' => 478,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
