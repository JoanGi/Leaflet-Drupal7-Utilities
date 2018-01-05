<?php
/**
 * @file
 * leaflet_utility.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function leaflet_utility_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-draw-body'.
  $field_instances['node-draw-body'] = array(
    'bundle' => 'draw',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-draw-field_punts'.
  $field_instances['node-draw-field_punts'] = array(
    'bundle' => 'draw',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
        ),
        'type' => 'geofield_wkt',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_punts',
    'label' => 'Punts',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'leaflet_widget',
      'settings' => array(
        'geocoder' => array(
          'enabled' => FALSE,
          'handler' => NULL,
        ),
        'map' => array(
          'auto_center' => 1,
          'base_url' => '//{s}.tile.openstreetmap.org/{z}/{x}/{y}.png',
          'center' => array(
            'lat' => 0,
            'lng' => 0,
          ),
          'zoom' => 10,
        ),
      ),
      'type' => 'leaflet_widget_widget',
      'weight' => -3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Punts');

  return $field_instances;
}
