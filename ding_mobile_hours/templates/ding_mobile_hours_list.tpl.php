<?php
/**
 * @file
 * Template to render simple list of opening hours.
 */
?>
<ul class="collapsible-list">
  <?php foreach ($libraries as $library): ?>
  <li>
    <h3 class="title-collapsible">
      <?php echo check_plain($library->title); ?>
    </h3>
    <div class="collapsible-info">
      <?php echo theme('opening_hours_week', $library); ?>
    </div>
  </li>
  <?php endforeach; ?>
</ul>
