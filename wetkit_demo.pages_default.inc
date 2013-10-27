<?php
/**
 * @file
 * wetkit_demo.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function wetkit_demo_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'wetkit_demo_panel_front';
  $page->task = 'page';
  $page->admin_title = 'WetKit Demo Front';
  $page->admin_description = 'This is a demo panel for WetKit so folks can see the magic';
  $page->path = 'demo';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => 'Homepage Demo',
    'name' => 'main-menu',
    'weight' => '-10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_wetkit_demo_panel_front_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'wetkit_demo_panel_front';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Demo Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'sutherland';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
      'sutherland_top' => NULL,
      'sutherland_first' => NULL,
      'sutherland_second' => NULL,
      'sutherland_third' => NULL,
      'sutherland_bottom' => NULL,
    ),
    'sidebar' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'Homepage Demo';
  $display->uuid = 'f434ee22-6e3e-9b44-a9d4-b7c4547f9236';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0e492bee-57b7-e3e4-9d3d-5fb8689994d3';
    $pane->panel = 'sutherland_bottom';
    $pane->type = 'block';
    $pane->subtype = 'bean-Stay-Connected';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0e492bee-57b7-e3e4-9d3d-5fb8689994d3';
    $display->content['new-0e492bee-57b7-e3e4-9d3d-5fb8689994d3'] = $pane;
    $display->panels['sutherland_bottom'][0] = 'new-0e492bee-57b7-e3e4-9d3d-5fb8689994d3';
    $pane = new stdClass();
    $pane->pid = 'new-673f621a-6667-3cc4-e51d-31865bc28dd5';
    $pane->panel = 'sutherland_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'headlines_front_page-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '673f621a-6667-3cc4-e51d-31865bc28dd5';
    $display->content['new-673f621a-6667-3cc4-e51d-31865bc28dd5'] = $pane;
    $display->panels['sutherland_first'][0] = 'new-673f621a-6667-3cc4-e51d-31865bc28dd5';
    $pane = new stdClass();
    $pane->pid = 'new-35c7b53d-e887-7d34-0d7d-f6764c371638';
    $pane->panel = 'sutherland_second';
    $pane->type = 'block';
    $pane->subtype = 'bean-Videos';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '35c7b53d-e887-7d34-0d7d-f6764c371638';
    $display->content['new-35c7b53d-e887-7d34-0d7d-f6764c371638'] = $pane;
    $display->panels['sutherland_second'][0] = 'new-35c7b53d-e887-7d34-0d7d-f6764c371638';
    $pane = new stdClass();
    $pane->pid = 'new-eaf2caa7-8bde-c1c4-d9e7-cba81fc40e11';
    $pane->panel = 'sutherland_third';
    $pane->type = 'block';
    $pane->subtype = 'bean-Priorities';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'eaf2caa7-8bde-c1c4-d9e7-cba81fc40e11';
    $display->content['new-eaf2caa7-8bde-c1c4-d9e7-cba81fc40e11'] = $pane;
    $display->panels['sutherland_third'][0] = 'new-eaf2caa7-8bde-c1c4-d9e7-cba81fc40e11';
    $pane = new stdClass();
    $pane->pid = 'new-20d35494-9a04-c8c4-9923-84170a218e8c';
    $pane->panel = 'sutherland_third';
    $pane->type = 'block';
    $pane->subtype = 'bean-Minister';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '20d35494-9a04-c8c4-9923-84170a218e8c';
    $display->content['new-20d35494-9a04-c8c4-9923-84170a218e8c'] = $pane;
    $display->panels['sutherland_third'][1] = 'new-20d35494-9a04-c8c4-9923-84170a218e8c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['wetkit_demo_panel_front'] = $page;

  return $pages;

}
