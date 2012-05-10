<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ekb_glossary_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function ekb_glossary_node_info() {
  $items = array(
    'definition' => array(
      'name' => t('Glossary Term'),
      'module' => 'features',
      'description' => t('A reference for common eCW and EHR Industry terms'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function ekb_glossary_views_api() {
  return array(
    'api' => '2',
  );
}
