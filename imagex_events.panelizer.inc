<?php
/**
 * @file
 * imagex_events.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function imagex_events_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'one_fw';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
      'one_fw_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '2e78422c-e6ae-4d75-83d6-71be25fc0f86';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-30238fee-0808-4943-a5d3-35a035a4f4dd';
    $pane->panel = 'one_fw_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => 0,
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '30238fee-0808-4943-a5d3-35a035a4f4dd';
    $display->content['new-30238fee-0808-4943-a5d3-35a035a4f4dd'] = $pane;
    $display->panels['one_fw_main'][0] = 'new-30238fee-0808-4943-a5d3-35a035a4f4dd';
    $pane = new stdClass();
    $pane->pid = 'new-37368538-4e18-490a-888a-7d63f2c9f5bd';
    $pane->panel = 'one_fw_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_offsite_url';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => 0,
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '37368538-4e18-490a-888a-7d63f2c9f5bd';
    $display->content['new-37368538-4e18-490a-888a-7d63f2c9f5bd'] = $pane;
    $display->panels['one_fw_main'][1] = 'new-37368538-4e18-490a-888a-7d63f2c9f5bd';
    $pane = new stdClass();
    $pane->pid = 'new-62566cd0-4597-407e-953c-3b4616c154ae';
    $pane->panel = 'one_fw_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_number_of_attendee';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'number_integer',
      'delta_limit' => 0,
      'delta_offset' => 0,
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'decimal_separator' => '.',
        'prefix_suffix' => TRUE,
        'scale' => 0,
        'thousand_separator' => ' ',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '62566cd0-4597-407e-953c-3b4616c154ae';
    $display->content['new-62566cd0-4597-407e-953c-3b4616c154ae'] = $pane;
    $display->panels['one_fw_main'][2] = 'new-62566cd0-4597-407e-953c-3b4616c154ae';
    $pane = new stdClass();
    $pane->pid = 'new-6894e98a-349f-42b3-9287-62154663fae0';
    $pane->panel = 'one_fw_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => 0,
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'long',
        'fromto' => 'both',
        'multiple_from' => '',
        'multiple_number' => '',
        'multiple_to' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '6894e98a-349f-42b3-9287-62154663fae0';
    $display->content['new-6894e98a-349f-42b3-9287-62154663fae0'] = $pane;
    $display->panels['one_fw_main'][3] = 'new-6894e98a-349f-42b3-9287-62154663fae0';
    $pane = new stdClass();
    $pane->pid = 'new-b2a5fbe2-b776-4bd4-a9ac-011df21bff84';
    $pane->panel = 'one_fw_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'addressfield_default',
      'delta_limit' => 0,
      'delta_offset' => 0,
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_handlers' => array(
          0 => 'address',
        ),
        'use_widget_handlers' => 1,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'b2a5fbe2-b776-4bd4-a9ac-011df21bff84';
    $display->content['new-b2a5fbe2-b776-4bd4-a9ac-011df21bff84'] = $pane;
    $display->panels['one_fw_main'][4] = 'new-b2a5fbe2-b776-4bd4-a9ac-011df21bff84';
    $pane = new stdClass();
    $pane->pid = 'new-be423259-130a-49b3-b806-ff8f2fc73962';
    $pane->panel = 'one_fw_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_registration';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'registration_default',
      'delta_limit' => 0,
      'delta_offset' => 0,
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'label' => ' ',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'be423259-130a-49b3-b806-ff8f2fc73962';
    $display->content['new-be423259-130a-49b3-b806-ff8f2fc73962'] = $pane;
    $display->panels['one_fw_main'][5] = 'new-be423259-130a-49b3-b806-ff8f2fc73962';
    $pane = new stdClass();
    $pane->pid = 'new-d6e3a5e4-be1c-454b-a1d6-92fa1b3100ef';
    $pane->panel = 'one_fw_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_registration_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => 0,
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'd6e3a5e4-be1c-454b-a1d6-92fa1b3100ef';
    $display->content['new-d6e3a5e4-be1c-454b-a1d6-92fa1b3100ef'] = $pane;
    $display->panels['one_fw_main'][6] = 'new-d6e3a5e4-be1c-454b-a1d6-92fa1b3100ef';
    $pane = new stdClass();
    $pane->pid = 'new-d79706aa-989b-43b9-be0b-b04a01c24060';
    $pane->panel = 'one_fw_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => 0,
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => '',
        'image_style' => '',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'd79706aa-989b-43b9-be0b-b04a01c24060';
    $display->content['new-d79706aa-989b-43b9-be0b-b04a01c24060'] = $pane;
    $display->panels['one_fw_main'][7] = 'new-d79706aa-989b-43b9-be0b-b04a01c24060';
    $pane = new stdClass();
    $pane->pid = 'new-e6a5afce-8526-4235-bbb0-7f4d4457044c';
    $pane->panel = 'one_fw_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => 0,
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'e6a5afce-8526-4235-bbb0-7f4d4457044c';
    $display->content['new-e6a5afce-8526-4235-bbb0-7f4d4457044c'] = $pane;
    $display->panels['one_fw_main'][8] = 'new-e6a5afce-8526-4235-bbb0-7f4d4457044c';
    $pane = new stdClass();
    $pane->pid = 'new-e7b9f0d4-5b98-4ead-be7b-9a3f1c17149d';
    $pane->panel = 'one_fw_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => 0,
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'e7b9f0d4-5b98-4ead-be7b-9a3f1c17149d';
    $display->content['new-e7b9f0d4-5b98-4ead-be7b-9a3f1c17149d'] = $pane;
    $display->panels['one_fw_main'][9] = 'new-e7b9f0d4-5b98-4ead-be7b-9a3f1c17149d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6894e98a-349f-42b3-9287-62154663fae0';
  $panelizer->display = $display;
  $export['node:event:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'one_fw';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_fw_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '70ce9225-ef04-414b-8664-71c2d9fdb577';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-30a583d3-f198-493d-b5ef-2cd84e5354cd';
    $pane->panel = 'one_fw_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '30a583d3-f198-493d-b5ef-2cd84e5354cd';
    $display->content['new-30a583d3-f198-493d-b5ef-2cd84e5354cd'] = $pane;
    $display->panels['one_fw_main'][0] = 'new-30a583d3-f198-493d-b5ef-2cd84e5354cd';
    $pane = new stdClass();
    $pane->pid = 'new-93533a34-a20e-46b2-ac30-79775624c217';
    $pane->panel = 'one_fw_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '93533a34-a20e-46b2-ac30-79775624c217';
    $display->content['new-93533a34-a20e-46b2-ac30-79775624c217'] = $pane;
    $display->panels['one_fw_main'][1] = 'new-93533a34-a20e-46b2-ac30-79775624c217';
    $pane = new stdClass();
    $pane->pid = 'new-104683a5-f1cb-400a-89e9-3d519d57a4b3';
    $pane->panel = 'one_fw_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'addressfield_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_handlers' => array(
          0 => 'address',
        ),
        'use_widget_handlers' => 1,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '104683a5-f1cb-400a-89e9-3d519d57a4b3';
    $display->content['new-104683a5-f1cb-400a-89e9-3d519d57a4b3'] = $pane;
    $display->panels['one_fw_main'][2] = 'new-104683a5-f1cb-400a-89e9-3d519d57a4b3';
    $pane = new stdClass();
    $pane->pid = 'new-7804f6e7-20f3-4643-9ef5-38435a71a3fd';
    $pane->panel = 'one_fw_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => '',
        'image_style' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7804f6e7-20f3-4643-9ef5-38435a71a3fd';
    $display->content['new-7804f6e7-20f3-4643-9ef5-38435a71a3fd'] = $pane;
    $display->panels['one_fw_main'][3] = 'new-7804f6e7-20f3-4643-9ef5-38435a71a3fd';
    $pane = new stdClass();
    $pane->pid = 'new-6ebcbefd-970b-4120-a702-d72e86554d02';
    $pane->panel = 'one_fw_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_number_of_attendee';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'number_integer',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'decimal_separator' => '.',
        'prefix_suffix' => TRUE,
        'scale' => 0,
        'thousand_separator' => ' ',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '6ebcbefd-970b-4120-a702-d72e86554d02';
    $display->content['new-6ebcbefd-970b-4120-a702-d72e86554d02'] = $pane;
    $display->panels['one_fw_main'][4] = 'new-6ebcbefd-970b-4120-a702-d72e86554d02';
    $pane = new stdClass();
    $pane->pid = 'new-08fa120a-bdef-4bd3-80e6-8cc7fdf9e84d';
    $pane->panel = 'one_fw_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'long',
        'fromto' => 'both',
        'multiple_from' => '',
        'multiple_number' => '',
        'multiple_to' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '08fa120a-bdef-4bd3-80e6-8cc7fdf9e84d';
    $display->content['new-08fa120a-bdef-4bd3-80e6-8cc7fdf9e84d'] = $pane;
    $display->panels['one_fw_main'][5] = 'new-08fa120a-bdef-4bd3-80e6-8cc7fdf9e84d';
    $pane = new stdClass();
    $pane->pid = 'new-99b8eac4-5286-4169-a8b7-a5565d8f0c8c';
    $pane->panel = 'one_fw_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_external_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '99b8eac4-5286-4169-a8b7-a5565d8f0c8c';
    $display->content['new-99b8eac4-5286-4169-a8b7-a5565d8f0c8c'] = $pane;
    $display->panels['one_fw_main'][6] = 'new-99b8eac4-5286-4169-a8b7-a5565d8f0c8c';
    $pane = new stdClass();
    $pane->pid = 'new-3e361401-4df1-430c-bc7a-cc7e7b3c253a';
    $pane->panel = 'one_fw_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '3e361401-4df1-430c-bc7a-cc7e7b3c253a';
    $display->content['new-3e361401-4df1-430c-bc7a-cc7e7b3c253a'] = $pane;
    $display->panels['one_fw_main'][7] = 'new-3e361401-4df1-430c-bc7a-cc7e7b3c253a';
    $pane = new stdClass();
    $pane->pid = 'new-7c595bcf-3907-4b06-862a-99ff51700481';
    $pane->panel = 'one_fw_main';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '7c595bcf-3907-4b06-862a-99ff51700481';
    $display->content['new-7c595bcf-3907-4b06-862a-99ff51700481'] = $pane;
    $display->panels['one_fw_main'][8] = 'new-7c595bcf-3907-4b06-862a-99ff51700481';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-30a583d3-f198-493d-b5ef-2cd84e5354cd';
  $panelizer->display = $display;
  $export['node:event:default:default'] = $panelizer;

  features_alter_code('panelizer_defaults', $export);

  return $export;
}
