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
  if (isset($data['node-ding_event-field_ding_event_title_image'])) {
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['module'] = 'field_slideshow'; /* WAS: 'cs_adaptive_image' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_caption'] = 'title'; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_caption_link'] = ''; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_carousel_circular'] = 0; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_carousel_follow'] = 0; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_carousel_image_style'] = ''; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_carousel_scroll'] = 1; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_carousel_skin'] = ''; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_carousel_speed'] = 500; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_carousel_vertical'] = 0; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_carousel_visible'] = 3; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_colorbox_image_style'] = ''; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_colorbox_slideshow'] = ''; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_colorbox_slideshow_speed'] = 4000; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_colorbox_speed'] = 350; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_colorbox_transition'] = 'elastic'; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_controls'] = 1; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_controls_pause'] = 0; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_controls_position'] = 'before'; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_field_collection_image'] = ''; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_fx'] = 'slideX'; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_image_style'] = ''; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_link'] = ''; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_order'] = ''; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_pager'] = ''; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_pager_image_style'] = ''; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_pager_position'] = 'after'; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_pause'] = 0; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_speed'] = 0; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_start_on_hover'] = 0; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['slideshow_timeout'] = 0; /* WAS: '' */
    $data['node-ding_event-field_ding_event_title_image']['display']['default']['type'] = 'slideshow'; /* WAS: 'cs_adaptive_image' */
    $data['node-ding_event-field_ding_event_title_image']['widget']['settings'] = array(
      'allowed_schemes' => array(
        'oembed' => 0,
        'public' => 'public',
        'vimeo' => 0,
        'youtube' => 0,
      ),
      'allowed_types' => array(
        'audio' => 0,
        'document' => 0,
        'image' => 'image',
        'video' => 0,
      ),
      'browser_plugins' => array(
        'ding_content' => 0,
        'media_default--media_browser_1' => 0,
        'media_default--media_browser_my_files' => 0,
        'media_internet' => 0,
        'upload' => 0,
        'youtube' => 0,
      ),
      'manualcrop_crop_info' => 1,
      'manualcrop_default_crop_area' => 1,
      'manualcrop_enable' => 1,
      'manualcrop_inline_crop' => 0,
      'manualcrop_instant_crop' => FALSE,
      'manualcrop_instant_preview' => 1,
      'manualcrop_keyboard' => 1,
      'manualcrop_maximize_default_crop_area' => 0,
      'manualcrop_require_cropping' => array(),
      'manualcrop_styles_mode' => 'include',
      'manualcrop_thumblist' => 0,
      'progress_indicator' => 'throbber',
    ); /* WAS: '' */
    unset($data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['image_link']);
    unset($data['node-ding_event-field_ding_event_title_image']['display']['default']['settings']['styles']);
  }
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
    $data['node-ding_news-field_ding_news_title_image']['display']['default']['settings']['slideshow_image_style'] = ''; /* WAS: '' */
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
    $data['node-ding_page-field_ding_page_title_image']['display']['default']['settings']['slideshow_image_style'] = ''; /* WAS: '' */
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
