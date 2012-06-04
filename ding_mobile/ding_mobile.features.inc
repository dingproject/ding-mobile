<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function ding_mobile_news_imagecache_default_presets() {
  $items = array(
    'mobile_list_image' => array(
      'presetname' => 'mobile_list_image',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '800px',
            'height' => '248px',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ding_mobile_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}
