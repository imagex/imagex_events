<?php
/**
 * @file
 * imagex_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function imagex_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function imagex_events_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Use <em>event</em> to create and share an upcoming conference, training event or special event.'),
      'has_title' => '1',
      'title_label' => t('Event Title'),
      'help' => '',
    ),
  );

  features_alter_code('node', $items);

  return $items;
}
