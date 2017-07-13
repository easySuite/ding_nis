<?php
/**
 * @file
 * ding_nis.features.inc
 */

/**
 * Implements hook_field_default_field_bases_alter().
 */
function ding_nis_field_default_field_bases_alter(&$data) {
  if (isset($data['field_ding_news_title_image'])) {
    $data['field_ding_news_title_image']['cardinality'] = -1; /* WAS: 1 */
  }
  if (isset($data['field_ding_page_title_image'])) {
    $data['field_ding_page_title_image']['cardinality'] = -1; /* WAS: 1 */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function ding_nis_field_default_field_instances_alter(&$data) {
  if (isset($data['node-ding_news-field_ding_news_title_image'])) {
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['module'] = 'field_slideshow'; /* WAS: 'cs_adaptive_image' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_caption'] = 'title'; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_caption_link'] = ''; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_carousel_circular'] = 0; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_carousel_follow'] = 0; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_carousel_image_style'] = ''; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_carousel_scroll'] = 1; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_carousel_skin'] = ''; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_carousel_speed'] = 500; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_carousel_vertical'] = 0; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_carousel_visible'] = 3; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_colorbox_image_style'] = ''; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_colorbox_slideshow'] = ''; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_colorbox_slideshow_speed'] = 4000; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_colorbox_speed'] = 350; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_colorbox_transition'] = 'elastic'; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_controls'] = 1; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_controls_pause'] = 0; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_controls_position'] = 'before'; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_field_collection_image'] = ''; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_fx'] = 'slideX'; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_image_style'] = 'ding_nodes_image_gallery'; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_link'] = ''; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_order'] = ''; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_pager'] = ''; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_pager_image_style'] = ''; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_pager_position'] = 'after'; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_pause'] = 0; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_speed'] = 0; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_start_on_hover'] = 0; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_timeout'] = 0; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['type'] = 'slideshow'; /* WAS: 'cs_adaptive_image' */
    $data['node-ding_news-field_ding_news_title_image']['widget']['settings']['allowed_schemes'] = array(
      'oembed' => 0,
      'public' => 'public',
      'vimeo' => 0,
      'youtube' => 0,
    ); /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['widget']['settings']['allowed_types']['document'] = 0; /* WAS: '' */
    $data['node-ding_news-field_ding_news_title_image']['widget']['settings']['browser_plugins'] = array(
      'ding_content' => 0,
      'media_default--media_browser_1' => 0,
      'media_default--media_browser_my_files' => 0,
      'media_internet' => 0,
      'upload' => 0,
      'youtube' => 0,
    ); /* WAS: '' */
    unset($data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['image_link']);
    unset($data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['styles']);
    unset($data['node-ding_news-field_ding_news_title_image']['widget']['settings']['allowed_types']['0']);
    unset($data['node-ding_news-field_ding_news_title_image']['widget']['settings']['allowed_types']['default']);
  }
  if (isset($data['node-ding_page-field_ding_page_title_image'])) {
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['module'] = 'field_slideshow'; /* WAS: 'cs_adaptive_image' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_caption'] = 'title'; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_caption_link'] = ''; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_carousel_circular'] = 0; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_carousel_follow'] = 0; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_carousel_image_style'] = ''; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_carousel_scroll'] = 1; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_carousel_skin'] = ''; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_carousel_speed'] = 500; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_carousel_vertical'] = 0; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_carousel_visible'] = 3; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_colorbox_image_style'] = ''; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_colorbox_slideshow'] = ''; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_colorbox_slideshow_speed'] = 4000; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_colorbox_speed'] = 350; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_colorbox_transition'] = 'elastic'; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_controls'] = 1; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_controls_pause'] = 0; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_controls_position'] = 'before'; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_field_collection_image'] = ''; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_fx'] = 'slideX'; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_image_style'] = 'ding_nodes_image_gallery'; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_link'] = ''; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_order'] = ''; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_pager'] = ''; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_pager_image_style'] = ''; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_pager_position'] = 'after'; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_pause'] = 0; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_speed'] = 0; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_start_on_hover'] = 0; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_timeout'] = 0; /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['type'] = 'slideshow'; /* WAS: 'cs_adaptive_image' */
    $data['node-ding_page-field_ding_page_title_image']['widget']['settings']['allowed_schemes'] = array(
      'oembed' => 0,
      'public' => 'public',
      'vimeo' => 0,
      'youtube' => 0,
    ); /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['widget']['settings']['allowed_types'] = array(
      'audio' => 0,
      'document' => 0,
      'image' => 'image',
      'video' => 0,
    ); /* WAS: '' */
    $data['node-ding_page-field_ding_page_title_image']['widget']['settings']['browser_plugins'] = array(
      'ding_content' => 0,
      'media_default--media_browser_1' => 0,
      'media_default--media_browser_my_files' => 0,
      'media_internet' => 0,
      'upload' => 0,
      'youtube' => 0,
    ); /* WAS: '' */
    unset($data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['image_link']);
    unset($data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['styles']);
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
