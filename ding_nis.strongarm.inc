<?php
/**
 * @file
 * ding_nis.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ding_nis_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_nis_random';
  $strongarm->value = 1669728404;
  $export['ding_nis_random'] = $strongarm;

  return $export;
}
