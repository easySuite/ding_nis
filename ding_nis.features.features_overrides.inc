<?php
/**
 * @file
 * ding_nis.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ding_nis_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_base
  $overrides["field_base.field_ding_news_title_image.cardinality"] = -1;
  $overrides["field_base.field_ding_page_title_image.cardinality"] = -1;

  // Exported overrides for: field_instance
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|module"] = 'field_slideshow';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|image_link"]["DELETED"] = TRUE;
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_caption"] = 'title';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_caption_link"] = '';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_carousel_circular"] = 0;
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_carousel_follow"] = 0;
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_carousel_image_style"] = '';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_carousel_scroll"] = 1;
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_carousel_skin"] = '';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_carousel_speed"] = 500;
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_carousel_vertical"] = 0;
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_carousel_visible"] = 3;
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_colorbox_image_style"] = '';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_colorbox_slideshow"] = '';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_colorbox_slideshow_speed"] = 4000;
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_colorbox_speed"] = 350;
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_colorbox_transition"] = 'elastic';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_controls"] = 1;
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_controls_pause"] = 0;
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_controls_position"] = 'before';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_field_collection_image"] = '';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_fx"] = 'slideX';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_image_style"] = 'ding_nodes_image_gallery';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_link"] = '';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_order"] = '';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_pager"] = '';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_pager_image_style"] = '';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_pager_position"] = 'after';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_pause"] = 0;
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_speed"] = 0;
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_start_on_hover"] = 0;
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|slideshow_timeout"] = 0;
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|settings|styles"]["DELETED"] = TRUE;
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.display|default|type"] = 'slideshow';
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.widget|settings|allowed_schemes"] = array(
    'oembed' => 0,
    'public' => 'public',
    'vimeo' => 0,
    'youtube' => 0,
  );
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.widget|settings|allowed_types|0"]["DELETED"] = TRUE;
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.widget|settings|allowed_types|default"]["DELETED"] = TRUE;
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.widget|settings|allowed_types|document"] = 0;
  $overrides["field_instance.node-ding_news-field_ding_news_title_image.widget|settings|browser_plugins"] = array(
    'ding_content' => 0,
    'media_default--media_browser_1' => 0,
    'media_default--media_browser_my_files' => 0,
    'media_internet' => 0,
    'upload' => 0,
    'youtube' => 0,
  );
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|module"] = 'field_slideshow';
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|image_link"]["DELETED"] = TRUE;
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_caption"] = 'title';
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_caption_link"] = '';
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_carousel_circular"] = 0;
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_carousel_follow"] = 0;
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_carousel_image_style"] = '';
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_carousel_scroll"] = 1;
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_carousel_skin"] = '';
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_carousel_speed"] = 500;
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_carousel_vertical"] = 0;
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_carousel_visible"] = 3;
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_colorbox_image_style"] = '';
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_colorbox_slideshow"] = '';
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_colorbox_slideshow_speed"] = 4000;
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_colorbox_speed"] = 350;
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_colorbox_transition"] = 'elastic';
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_controls"] = 1;
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_controls_pause"] = 0;
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_controls_position"] = 'before';
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_field_collection_image"] = '';
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_fx"] = 'slideX';
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_image_style"] = 'ding_nodes_image_gallery';
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_link"] = '';
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_order"] = '';
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_pager"] = '';
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_pager_image_style"] = '';
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_pager_position"] = 'after';
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_pause"] = 0;
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_speed"] = 0;
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_start_on_hover"] = 0;
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|slideshow_timeout"] = 0;
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|settings|styles"]["DELETED"] = TRUE;
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.display|default|type"] = 'slideshow';
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.widget|settings|allowed_schemes"] = array(
    'oembed' => 0,
    'public' => 'public',
    'vimeo' => 0,
    'youtube' => 0,
  );
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.widget|settings|allowed_types"] = array(
    'audio' => 0,
    'document' => 0,
    'image' => 'image',
    'video' => 0,
  );
  $overrides["field_instance.node-ding_page-field_ding_page_title_image.widget|settings|browser_plugins"] = array(
    'ding_content' => 0,
    'media_default--media_browser_1' => 0,
    'media_default--media_browser_my_files' => 0,
    'media_internet' => 0,
    'upload' => 0,
    'youtube' => 0,
  );

 return $overrides;
}
