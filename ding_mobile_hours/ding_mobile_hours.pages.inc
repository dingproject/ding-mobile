<?php
/**
 * @file
 * Page callbacks for ding_mobile_hours.
 */

/**
 * Main opening hours page.
 */
function ding_mobile_hours_page() {
  // Get the libraries in the right order.
  $query = db_query('
    SELECT n.nid, n.title 
    FROM {node} AS n
    INNER JOIN {ding_library} AS dl ON (n.nid = dl.nid)
    WHERE n.status <> 0
    ORDER BY dl.library_weight
  ');


  $libraries = array();
  while ($row = db_fetch_object($query)) {
    $libraries[] = $row;
  }

  return theme('ding_mobile_hours_list', $libraries);
}
