<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function droplit_variables_ctools_plugin_api() {
  module_load_include('inc', 'droplit_variables', 'droplit_variables.defaults');
  $args = func_get_args();
  return call_user_func_array('_droplit_variables_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function droplit_variables_user_default_permissions() {
  module_load_include('inc', 'droplit_variables', 'droplit_variables.defaults');
  $args = func_get_args();
  return call_user_func_array('_droplit_variables_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function droplit_variables_strongarm() {
  module_load_include('inc', 'droplit_variables', 'droplit_variables.defaults');
  $args = func_get_args();
  return call_user_func_array('_droplit_variables_strongarm', $args);
}
