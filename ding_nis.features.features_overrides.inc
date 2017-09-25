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
  $overrides["field_base.field_ding_event_title_image.cardinality"] = -1;
  $overrides["field_base.field_ding_page_title_image.cardinality"] = -1;
  $overrides["field_base.field_ding_news_title_image.cardinality"] = -1;

  return $overrides;
}
