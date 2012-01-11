<?php

/**
 * Implementation of hook_content_default_fields().
 */
function ding_mobile_images_content_default_fields() {
  $fields = array();

  // Exported field: field_mobile_image
  $fields['article-field_mobile_image'] = array(
    'field_name' => 'field_mobile_image',
    'type_name' => 'article',
    'display_settings' => array(
      'weight' => '6',
      'parent' => '',
      'mobile' => array(
        'format' => 'mobile_list_image_default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'mobile_images',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_80_x' => 0,
        'imagecache_120_120' => 0,
        'imagecache_180_x' => 0,
        'imagecache_210_x' => 0,
        'imagecache_440_width' => 0,
        'imagecache_460_180' => 0,
        'imagecache_460_240' => 0,
        'imagecache_680_200_crop' => 0,
        'imagecache_680_200_crop_noupscale' => 0,
        'imagecache_mobile-list-image' => 0,
        'imagecache_mobile_list_image' => 0,
        'imagecache_ting_search_carousel' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Mobil billede',
      'weight' => '6',
      'description' => 'Billede til mobil side.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_mobile_image
  $fields['event-field_mobile_image'] = array(
    'field_name' => 'field_mobile_image',
    'type_name' => 'event',
    'display_settings' => array(
      'weight' => '6',
      'parent' => '',
      'mobile' => array(
        'format' => 'mobile_list_image_default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'mobile_images',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_80_x' => 0,
        'imagecache_120_120' => 0,
        'imagecache_180_x' => 0,
        'imagecache_210_x' => 0,
        'imagecache_440_width' => 0,
        'imagecache_460_180' => 0,
        'imagecache_460_240' => 0,
        'imagecache_680_200_crop' => 0,
        'imagecache_680_200_crop_noupscale' => 0,
        'imagecache_mobile-list-image' => 0,
        'imagecache_mobile_list_image' => 0,
        'imagecache_ting_search_carousel' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Mobil billede',
      'weight' => '6',
      'description' => 'Billede til mobil side.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Mobil billede');

  return $fields;
}
