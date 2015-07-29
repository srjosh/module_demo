<?php
/**
 * @file
 * plays.features.inc
 */

/**
 * Implements hook_views_api().
 */
function plays_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function plays_node_info() {
  $items = array(
    'play' => array(
      'name' => t('Play'),
      'base' => 'node_content',
      'description' => t('Content type for cataloging all of Shakespeare\'s plays.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
