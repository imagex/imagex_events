<?php
/**
 * @file
 * imagex_events.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function imagex_events_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_base
  $overrides["field_base.field_event_date.settings|entity_translation_sync"] = FALSE;

  // Exported overrides for: field_instance
  $overrides["field_instance.node-event-field_event_date.settings|entity_translation_sync"] = FALSE;

  features_alter_code('features_overrides', $overrides);

  return $overrides;
}
