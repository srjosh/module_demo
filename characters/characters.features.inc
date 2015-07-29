<?php
/**
 * @file
 * characters.features.inc
 */

/**
 * Implements hook_node_info().
 */
function characters_node_info() {
  $items = array(
    'characters' => array(
      'name' => t('Characters'),
      'base' => 'node_content',
      'description' => t('Characters that appear in one or more of Shakespeare\'s plays.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
