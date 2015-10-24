<?php
/**
 * @file
 * characters.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function characters_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function characters_node_info() {
  $items = array(
    'characters' => array(
      'name' => t('Characters'),
      'base' => 'node_content',
      'description' => t('Characters that appear in one or more of the Star Wars films.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
