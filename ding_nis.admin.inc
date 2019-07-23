<?php

/**
 * @file
 */

/**
 * Administration page rendering callback.
 */
function ding_nis_admin_form($form, $form_state) {
  $options = [
    '1' => t('Slideshow'),
    '0' => t('List of images'),
  ];
  $form['ding_nis_display_mode'] = [
    '#type' => 'radios',
    '#title' => t('Select default display mode'),
    '#description' => t('Sets display mode for title image globally'),
    '#options' => $options,
    '#default_value' => variable_get('ding_nis_display_mode', 1),
  ];

  return system_settings_form($form);
}
