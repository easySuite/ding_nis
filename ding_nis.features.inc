<?php
/**
 * @file
 * ding_nis.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ding_nis_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function ding_nis_image_default_styles() {
  $styles = array();

  // Exported image style: ding_nis_secondary_large.
  $styles['ding_nis_secondary_large'] = array(
    'name' => 'ding_nis_secondary_large',
    'label' => 'ding_nis_secondary_large',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 900,
          'height' => 900,
        ),
        'weight' => 1,
      ),
    ),
  );

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
