<?php
/**
 * @file
 * movies.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function movies_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'movies';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Movies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Movies';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Chronological Order */
  $handler->display->display_options['fields']['field_chronological_order']['id'] = 'field_chronological_order';
  $handler->display->display_options['fields']['field_chronological_order']['table'] = 'field_data_field_chronological_order';
  $handler->display->display_options['fields']['field_chronological_order']['field'] = 'field_chronological_order';
  $handler->display->display_options['fields']['field_chronological_order']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_chronological_order']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_chronological_order']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_chronological_order']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Release Date */
  $handler->display->display_options['fields']['field_release_date']['id'] = 'field_release_date';
  $handler->display->display_options['fields']['field_release_date']['table'] = 'field_data_field_release_date';
  $handler->display->display_options['fields']['field_release_date']['field'] = 'field_release_date';
  $handler->display->display_options['fields']['field_release_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_release_date']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_release_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_release_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Release Date (field_release_date) */
  $handler->display->display_options['sorts']['field_release_date_value']['id'] = 'field_release_date_value';
  $handler->display->display_options['sorts']['field_release_date_value']['table'] = 'field_data_field_release_date';
  $handler->display->display_options['sorts']['field_release_date_value']['field'] = 'field_release_date_value';
  $handler->display->display_options['sorts']['field_release_date_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_release_date_value']['expose']['label'] = 'Release Date';
  /* Sort criterion: Content: Chronological Order (field_chronological_order) */
  $handler->display->display_options['sorts']['field_chronological_order_value']['id'] = 'field_chronological_order_value';
  $handler->display->display_options['sorts']['field_chronological_order_value']['table'] = 'field_data_field_chronological_order';
  $handler->display->display_options['sorts']['field_chronological_order_value']['field'] = 'field_chronological_order_value';
  $handler->display->display_options['sorts']['field_chronological_order_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_chronological_order_value']['expose']['label'] = 'Chronological Order';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'movie' => 'movie',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'movies';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Movies';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['movies'] = $view;

  return $export;
}
