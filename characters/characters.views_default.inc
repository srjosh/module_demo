<?php
/**
 * @file
 * characters.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function characters_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'characters';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Characters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Characters';
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
  /* Field: Content: Brief Description */
  $handler->display->display_options['fields']['field_brief_description']['id'] = 'field_brief_description';
  $handler->display->display_options['fields']['field_brief_description']['table'] = 'field_data_field_brief_description';
  $handler->display->display_options['fields']['field_brief_description']['field'] = 'field_brief_description';
  $handler->display->display_options['fields']['field_brief_description']['label'] = '';
  $handler->display->display_options['fields']['field_brief_description']['element_label_colon'] = FALSE;
  /* Field: Content: Age Range */
  $handler->display->display_options['fields']['field_age_range']['id'] = 'field_age_range';
  $handler->display->display_options['fields']['field_age_range']['table'] = 'field_data_field_age_range';
  $handler->display->display_options['fields']['field_age_range']['field'] = 'field_age_range';
  $handler->display->display_options['fields']['field_age_range']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_age_range']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_age_range']['element_default_classes'] = FALSE;
  /* Field: Content: Gender */
  $handler->display->display_options['fields']['field_gender_1']['id'] = 'field_gender_1';
  $handler->display->display_options['fields']['field_gender_1']['table'] = 'field_data_field_gender';
  $handler->display->display_options['fields']['field_gender_1']['field'] = 'field_gender';
  $handler->display->display_options['fields']['field_gender_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_gender_1']['element_label_type'] = 'strong';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'characters' => 'characters',
  );
  /* Filter criterion: Content: Age Range (field_age_range) */
  $handler->display->display_options['filters']['field_age_range_value']['id'] = 'field_age_range_value';
  $handler->display->display_options['filters']['field_age_range_value']['table'] = 'field_data_field_age_range';
  $handler->display->display_options['filters']['field_age_range_value']['field'] = 'field_age_range_value';
  $handler->display->display_options['filters']['field_age_range_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_age_range_value']['expose']['operator_id'] = 'field_age_range_value_op';
  $handler->display->display_options['filters']['field_age_range_value']['expose']['label'] = 'Age Range';
  $handler->display->display_options['filters']['field_age_range_value']['expose']['operator'] = 'field_age_range_value_op';
  $handler->display->display_options['filters']['field_age_range_value']['expose']['identifier'] = 'field_age_range_value';
  $handler->display->display_options['filters']['field_age_range_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Gender (field_gender) */
  $handler->display->display_options['filters']['field_gender_value']['id'] = 'field_gender_value';
  $handler->display->display_options['filters']['field_gender_value']['table'] = 'field_data_field_gender';
  $handler->display->display_options['filters']['field_gender_value']['field'] = 'field_gender_value';
  $handler->display->display_options['filters']['field_gender_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_gender_value']['expose']['operator_id'] = 'field_gender_value_op';
  $handler->display->display_options['filters']['field_gender_value']['expose']['label'] = 'Gender';
  $handler->display->display_options['filters']['field_gender_value']['expose']['operator'] = 'field_gender_value_op';
  $handler->display->display_options['filters']['field_gender_value']['expose']['identifier'] = 'field_gender_value';
  $handler->display->display_options['filters']['field_gender_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'characters';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Characters';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['characters'] = $view;

  return $export;
}
