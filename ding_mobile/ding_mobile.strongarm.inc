<?php

/**
 * Implementation of hook_strongarm().
 */
function ding_mobile_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile-tools-theme-switch';
  $strongarm->value = 'mobile-tools-mobile-url';

  $export['mobile-tools-theme-switch'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_notification';
  $strongarm->value = '<a href="">Mobile View</a>';

  $export['mobile_notification'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_android_enable';
  $strongarm->value = 0;

  $export['mobile_tools_android_enable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_android_theme';
  $strongarm->value = 'aarhus';

  $export['mobile_tools_android_theme'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_blackberry_enable';
  $strongarm->value = 0;

  $export['mobile_tools_blackberry_enable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_blackberry_theme';
  $strongarm->value = 'aarhus';

  $export['mobile_tools_blackberry_theme'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_cookie_session';
  $strongarm->value = '2592000';

  $export['mobile_tools_cookie_session'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_enable_build_mode';
  $strongarm->value = 0;

  $export['mobile_tools_enable_build_mode'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_hide_address_bar';
  $strongarm->value = 1;

  $export['mobile_tools_hide_address_bar'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_opera_mini_enable';
  $strongarm->value = 0;

  $export['mobile_tools_opera_mini_enable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_opera_mini_theme';
  $strongarm->value = 'aarhus';

  $export['mobile_tools_opera_mini_theme'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_redirect';
  $strongarm->value = 0;

  $export['mobile_tools_redirect'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_redirect_exceptions';
  $strongarm->value = 'payment/dibs/callbackok/*';

  $export['mobile_tools_redirect_exceptions'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_redirect_exceptions_type';
  $strongarm->value = 'not-redirect';

  $export['mobile_tools_redirect_exceptions_type'] = $strongarm;
  return $export;
}
